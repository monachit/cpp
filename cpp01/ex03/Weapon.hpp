/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:48:50 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/19 08:53:39 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{

    private:
        std::string type;

    public:
    Weapon(const std::string& std);
    void setType(const std::string& std);
    const std::string& getType();

    ~Weapon();

    
};


#endif