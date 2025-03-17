/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:15:57 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/28 10:53:47 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "banan zwin \n";
}

void Harl::info()
{
    std::cout << "banan fih fawa2id\n";
}

void Harl::warning()
{
    std::cout << "had shi 4ali\n";    
}

void Harl::error()
{
    std::cout << "4ala2 2as3ar wa3\n";    
}

void Harl::complain(std::string level)
{
   void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   
    int i = 0;
    while(level != levels[i])
        i++;
    switch (i)
    {
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break;
        default:
            std::cout << "try again please\n";
            break;
    }
}