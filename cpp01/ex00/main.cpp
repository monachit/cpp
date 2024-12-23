/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:31:08 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/21 14:08:01 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie =  newZombie("Zombie1");
    zombie->announce();
    std::cout << "still alive" << std::endl;
    delete zombie;
    std::cout << "is dead" << std::endl;
    randomChump("Zombie2");
    std::cout << "kill him self" << std::endl;
    return (0);
}