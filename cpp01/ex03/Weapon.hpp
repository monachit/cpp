/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:46:38 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/23 15:31:20 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
    
    private : 
        std::string type;

    public :
        Weapon(std::string type){
            this->type = type;
        }
        std::string const &getType(void);
        void setType(std::string type);
};

#endif