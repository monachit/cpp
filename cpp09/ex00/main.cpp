/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 06:30:23 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/20 12:10:48 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>



int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: invalid number of arguments\n";
        return 1;
    }
    BitcoinExchange btc;
    if (btc.parseData())
        return 1;
    btc.processInput(av[1]);
    
}
