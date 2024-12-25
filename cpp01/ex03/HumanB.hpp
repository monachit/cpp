/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:56:01 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/23 15:38:40 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

    private : 
        std::string name;
        Weapon *weapon;
    
    public :
        HumanB(std::string name, Weapon &weapon)
        {
            this->name = name;
            this->weapon = &weapon;
        }
        void attack(void);
};


#endif