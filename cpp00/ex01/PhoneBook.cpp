/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:14:58 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/24 13:19:38 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int::Phonebook::get_index()
{
    return (index);
}

void::Phonebook::set_index(int i)
{
    if (i > 9)
        return ;
    index = i;
}

void::Phonebook::add_in(Phonebook *list)
{
    static int  i = 0;
    std::string input;
    
    list->set_index(0);
    while (input.length() == 0)
    {
        std::cout<< "Enter the first name : \n";
        if (!getline(std::cin, input))
            exit(1);
        if (input[0] >= 0 && input[0] <= 31)
                input.clear();
    }
    list->phonebook[i % 8].set_fname(input);
    input.clear();
    while (input.length() == 0)
    {
        std::cout << "Enter the last name : \n";
        if (!getline(std::cin, input))
            exit(1);
        if (input[0] >= 0 && input[0] <= 31)
            input.clear();       
    }
    list->phonebook[i % 8].set_lname(input);
    input.clear();
    while (input.length() == 0)
    {
        std::cout << "Enter the phonNumber: \n";
        if (!getline(std::cin, input))
            exit(1);
        for (int i = 0; input[i] != '\0'; i++)
        {
            if (input[i] < '0' || input[i] >'9')
            {
                std::cout << "Please we accept only numbers \n";   
                input.clear();     
                break;
            }
        }
    }
    list->phonebook[i % 8].set_pnumber(input);
    input.clear();
    while (input.length() == 0)
    {
        std::cout << "Enter the Nickname: \n";
        if (!getline(std::cin, input))
            exit(1);
        if (input[0] >= 0 && input[0] <= 31)
                input.clear();
        
    }
    list->phonebook[i % 8].set_nickname(input);
    input.clear();
    while (input.length() == 0)
    {
        std::cout << "Enter the darkest secret: \n";
        if (!getline(std::cin, input))
            exit(1);
        if (input[0] >= 0 && input[0] <= 31)
                input.clear();
    }
    list->phonebook[i % 8].set_dsecret(input);
    list->set_index(i);
    i++;
}

int     Myatoi(std::string input)
{
    if (input.length() > 1)
        return (-1);
    if (input[0] >= '1' && input[0] <= '8')
        return (input[0] - '0');
    return(-1);
}

std::string handle_length(std::string s)
{
    std::string st;
    int i = 0;
    if (s.length() > 10)
    {
        st.resize(10);
        while (i < 9)
        {
            st[i] = s[i]; 
            i++;
        }
        st[9] = '.';
    }
    else
        st = s;
    return (st);
}

void::Phonebook::search_in(Phonebook *list)
{
    std::string input;
    int     p;
    
    if (list->get_index() == -1)
    {
        std::cout << "There is no information here \n";
        return ;
    }
    std::cout << "Enter the index please : \n";
    if (!std::getline(std::cin, input))
        exit(1);
    p = Myatoi(input);
    while (p == -1)
    {
        if (p == -1)
        {
            std::cout << "Please should be between 1 and 8 \n";
            std::cout << "Enter the index please : \n";
        }
        if (!std::getline(std::cin, input))
            return ;
        p = Myatoi(input);
    }
    p -= 1;
    if (p <= list->get_index())
    {
        std::cout << "First name :   " << handle_length(list->phonebook[p].get_fname());
        std::cout << " |      Last name :   " << handle_length(list->phonebook[p].get_lname());
        std::cout << " |      Phone number :   " << handle_length(list->phonebook[p].get_pnumber());
        std::cout << " |       Nikname  :   " << handle_length(list->phonebook[p].get_nickname())<< "\n";
    }
}