/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:48:50 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/10 15:24:51 by mnachit          ###   ########.fr       */
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
    Weapon(std::string std);
    void setType(std::string std );
    std::string getType();

    ~Weapon();

    
};


#endif