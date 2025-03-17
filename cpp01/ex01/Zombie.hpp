/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:08:42 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/05 13:34:51 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP 
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new> 

class  Zombie{

    private:
        std::string name;
        int N;

    public:
        void announce(void);
        std::string getName();
        void set(std::string a);
    ~Zombie();
    
};

Zombie* zombieHorde(int N, std::string name);



#endif