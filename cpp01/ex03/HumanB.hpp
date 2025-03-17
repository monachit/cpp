/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:03:23 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/10 16:06:02 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

    private:
        std::string name;
        Weapon *a;
        
    public:
        void attack();
        HumanB(std::string x);
        void setWeapon(Weapon &club);

    

};



#endif