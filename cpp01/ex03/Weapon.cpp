/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:51:05 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/20 21:29:27 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(const std::string& str)
{
    type = str;
}

void    Weapon::setType(const std::string& str)
{
    type = str;
}

const std::string& Weapon::getType()
{
    return(type);
}

Weapon::~Weapon()
{
    std::cout << "See u later \n" ;   
}