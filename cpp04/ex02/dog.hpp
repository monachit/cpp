/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:49:11 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 11:38:12 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"


class Dog: public Animal{

    private :
        Brain* a;
    
    public:
       Dog(); 
       ~Dog(); 
       Dog(const Dog &other); 
       Dog& operator=(const Dog &other); 
       void makeSound() const;
       const std::string get(int index) const;
       void set(int index, const std::string &str);
      
};


#endif