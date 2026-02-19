/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 04:43:42 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/21 12:31:50 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"




PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
    }
    return *this;
}

std::vector<int> PmergeMe::parseinput(int ac, char **av)
{
    std::vector<int> v;
    
    for (int i = 1; i < ac; i++)
    {
        std::string arg(av[i]);
        for (size_t j = 0; j < arg.length(); j++)
        {
            if (arg[j] == ' ')
                throw std::invalid_argument("Invalid input: Multiple numbers in a single argument");
        }
    }
    for (int i = 1; i < ac; i++)
    {
        std::istringstream iss(av[i]);
        int num;
        if (!(iss >> num))
            throw std::invalid_argument("Invalid input: Non-integer value");
        v.push_back(num);
    }
    return v;
}

void binaryinsert(std::vector<int> &vec, int value)
{
    int l = 0;
    int r = vec.size();
    while (l < r)
    {
        int m = (l + r) / 2;
        if (vec[m] < value)
            l = m + 1;
        else
            r = m;
    }
    vec.insert(vec.begin() + l, value);
}

std::vector<int> jacobsthalnum(int n)
{
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    int i = 2;
    while (true)
    {
        int next = vec[i - 1] + 2 * vec[i - 2];
        if (next >= n)
            break;
        vec.push_back(next);
        i++;
    }
    return vec;
}


std::vector<int> PmergeMe::FordJohnsonsortvec(std::vector<int> &v)
{
    std::vector<int> win, los;
    if (v.size() <= 1)
        return v;
    bool unpair = (v.size() % 2 != 0);
    int l = v.size() - (unpair ? 1 : 0);
    for (int i = 0; i < l; i += 2)
    {
        if (v[i] > v[i + 1])
        {
            win.push_back(v[i]);
            los.push_back(v[i + 1]);
        }
        else
        {
            win.push_back(v[i + 1]);
            los.push_back(v[i]);
        }
    }
    if (unpair)
        win.push_back(v.back());
    
    win = FordJohnsonsortvec(win);
    
    std::vector<bool> check(los.size(), false);
    std::vector<int> jacob = jacobsthalnum(los.size());

    for (int i = 2; i < (int)jacob.size(); i++)
    {
        if (jacob[i] < (int)los.size())
        {
            binaryinsert(win, los[jacob[i]]);
            check[jacob[i]] = true;
        }
    }
    
    for (int i = 0; i < (int)los.size(); i++)
    {
        if (!check[i])
            binaryinsert(win, los[i]);
    }
    
    return win;
}

void binaryinsert(std::deque<int> &deq, int value)
{
    int l = 0;
    int r = deq.size();
    while (l < r)
    {
        int m = (l + r) / 2;
        if (deq[m] < value)
            l = m + 1;
        else
            r = m;
    }
    deq.insert(deq.begin() + l, value);
}

std::deque<int> jacobsthalnum1(int n)
{
    std::deque<int> deq;
    deq.push_back(0);
    deq.push_back(1);
    int i = 2;
    while (true)
    {
        int next = deq[i - 1] + 2 * deq[i - 2];
        if (next >= n)
            break;
        deq.push_back(next);
        i++;
    }
    return deq;
}

std::deque<int> PmergeMe::FordJohnsonsortdeq(std::deque<int> &d)
{
    std::deque<int> win, los;
    if (d.size() <= 1)
        return d;
    bool unpair = (d.size() % 2 != 0);
    int l = d.size() - (unpair ? 1 : 0);
    for (int i = 0; i < l; i += 2)
    {
        if (d[i] > d[i + 1])
        {
            win.push_back(d[i]);
            los.push_back(d[i + 1]);
        }
        else
        {
            win.push_back(d[i + 1]);
            los.push_back(d[i]);
        }
    }
    if (unpair)
        win.push_back(d.back());
    
    win = FordJohnsonsortdeq(win);
    
    std::vector<bool> check(los.size(), false);
    std::deque<int> jacob = jacobsthalnum1(los.size());

    for (int i = 2; i < (int)jacob.size(); i++)
    {
        if (jacob[i] < (int)los.size())
        {
            binaryinsert(win, los[jacob[i]]);
            check[jacob[i]] = true;
        }
    }
    
    for (int i = 0; i < (int)los.size(); i++)
    {
        if (!check[i])
            binaryinsert(win, los[i]);
    }
    
    return win;
}