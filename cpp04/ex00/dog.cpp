/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:59:30 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 06:56:01 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n"; 
}

Dog::Dog(const Dog &a)
{
    std::cout << "Dog Copy constructor called\n";
    type = a.type;
}

Dog& Dog::operator=(const Dog &a)
{
    if (this != &a)
    this->type = a.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Kalb\n";
}