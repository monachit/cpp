/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:49:11 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 06:53:50 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog: public Animal{


    public:
       Dog(); 
       ~Dog(); 
       Dog(const Dog &a); 
       Dog& operator=(const Dog &a); 
       void makeSound() const;
    
      
};


#endif