/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/1909/19 10:02:42 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/14 01:15:57 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(BitcoinExchange &other) : map(other.map) {}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange &other)   
{
    if (this != &other)
        this->map = other.map;
    return *this;
}


int BitcoinExchange::check_date(std::string str)
{
    int l = 0;
    
    if (str.length() != 11)
    {
        std::cout << "Error: wrong format\n";
        return 1;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-')
            l++;
        if (l > 2)
        {
            std::cout << "Error: wrong format\n";
            return 1;
        }
    }
    int year, month, day;
    int i = str.find('-');
    int j = str.find('-', i + 1);
    std::stringstream(str.substr(0, i)) >> year;
    std::stringstream(str.substr(i + 1, j - i - 1)) >> month;
    std::stringstream(str.substr(j + 1)) >> day;
    if (year < 2008 || year > 2025 || 1 > month || month > 12 || 1 > day || day > 31)
    {
        std::cout << "Error: wrong format\n";
        return 1;
    }
    return 0;
}

int BitcoinExchange::parseData()
{
    std::string text;
    std::ifstream MyReadFile("data.csv");
    double value;

    if (!MyReadFile.is_open())
    {
        std::cout << "Error: could not open file\n";
        return 1;
    }
    getline(MyReadFile, text);
    while (getline(MyReadFile, text))
    {
           int pos = text.find(',');
           std::stringstream ss(text.substr(pos + 1));
           ss >> value;
           map[text.substr(0, pos)] = value;
    }
    return 0;
}

void BitcoinExchange::processInput(const std::string& filename)
{
    std::string text;
    std::ifstream line(filename);
    double value;

    if (!line.is_open())
    {
        std::cout << "Error: could not open file.\n";
        return;
    }
    getline(line, text);
    if (text != "date | value" || text.empty())
    {
        std::cout << "Error: bad header\n";
        return;
    }
    while (getline(line, text))
    {
        int pos = text.find('|');
        if (pos == -1)
        {
            std::cout << "Error : bad line \n";
            continue;
        }
        std::stringstream ss(text.substr(pos + 1));
        ss >> value;
        if (ss.fail() || value < 0 || value  > 1000)
        {
            std::cout << "Error : invalid number\n";
            continue;
        }
        if (check_date(text.substr(0 , pos)))
            continue;
        std::map<std::string, double>::iterator it = map.lower_bound(text.substr(0, pos));
        if (it == map.end() || it->first != text.substr(0, pos))
        {
            if (it != map.begin())
                it--;
        }

        std::cout << text.substr(0, pos) << " => " << value << " = " << value * it->second << "\n";
    }
}