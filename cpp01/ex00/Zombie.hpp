/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:31:08 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/21 14:08:59 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


#include <iostream>
#include <string>


class Zombie
{
    private :
        std::string name;

    public :
    Zombie(std::string x)
    {
        name = x;  
    }
        void announce(void);
};
void randomChump(std::string name);
    Zombie* newZombie(std::string name);

#endif 