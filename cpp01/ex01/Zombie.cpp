/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:08:40 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/05 13:16:50 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << std::endl;
}

void Zombie::set(std::string a)
{
    name = a;
}

Zombie::~Zombie()
{
    std::cout << name << " is dead" << std::endl;
}