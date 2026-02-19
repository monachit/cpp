/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:03:57 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/19 08:34:12 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


void HumanB::attack()
{
    if (a)
        std::cout << name << " attacks with their " << a->getType() << "\n";
    else
        std::cout << name << " has No weapon " << "\n";
}

HumanB::HumanB(std::string x)
{
    a = NULL;
    name = x;
}

void HumanB::setWeapon(Weapon &club)
{
    a = &club;
}