/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:59:30 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 05:48:53 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called\n";
    a = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n"; 
    delete a;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog Copy constructor called\n";
    type = other.type;
    a = new Brain(*other.a);
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        delete a;
        this->type = other.type;
        this->a = new Brain(*other.a);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Kalb\n";
}