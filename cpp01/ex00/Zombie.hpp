/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:53:20 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/12 01:41:27 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie{
    
    private:
        std::string name;
    public:
        void announce(void);
        Zombie(std::string a);
        
    ~Zombie();
        
};

        void randomChump(std::string name);
        Zombie* newZombie(std::string name);



#endif