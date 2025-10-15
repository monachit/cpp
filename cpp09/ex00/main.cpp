/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 06:30:23 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/11 03:56:17 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>




int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file.\n";
        return 1;
    }
    BitcoinExchange btc;
    btc.parseData();
    btc.processInput(av[1]);
    
}
