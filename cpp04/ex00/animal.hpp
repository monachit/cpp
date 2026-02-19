/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:45:23 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 14:57:34 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal{

    protected:
        std::string type;

    public:
       Animal(); 
       virtual ~Animal();
       Animal(const Animal &a); 
       Animal& operator=(const Animal &a); 
       virtual void makeSound() const;
       const std::string& getType() const;

    
      
};


#endif