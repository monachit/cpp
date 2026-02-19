/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 06:06:11 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/20 12:10:37 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP




#include <iostream>
#include <fstream>
#include <sstream>
#include <map>


class BitcoinExchange {

    private :
        std::map<std::string, double> map;

    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange &other); 
        BitcoinExchange& operator=(BitcoinExchange &other);   
        int check_date(std::string str);
        int parseData();
        void processInput(const std::string& filename);
};






#endif