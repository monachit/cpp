/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:37:44 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/27 18:04:52 by mnachit          ###   ########.fr       */
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
    
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (this->*ptr[i])();   
    }
}