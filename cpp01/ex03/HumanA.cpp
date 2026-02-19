/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:56:24 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/20 21:27:14 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack()
{
    std::cout << name << " attacks with their " << a.getType() << std::endl;
}

HumanA::HumanA(std::string x, Weapon &y) : a(y){
    name  =x;
}