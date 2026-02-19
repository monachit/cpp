/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:51:57 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 09:56:40 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"


Cat::Cat()
{
    type =  "Cat";
    std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";   
}

Cat::Cat(const Cat &a)
{
    std::cout << "Cat Copy constructor called\n";
    type = a.type;
}

Cat& Cat::operator=(const Cat &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}

void Cat::makeSound() const
{ 
    std::cout << "Meooow \n";
}