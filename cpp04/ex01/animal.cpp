/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:50:10 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 06:57:59 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"


Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &a)
{
    std::cout << "Animal copy constructor called\n";
    type = a.type;
}

Animal& Animal::operator=(const Animal &a)
{
    if (this != &a)
        this->type = a.type;
    return *this;
}

void  Animal::makeSound() const
{
    std::cout << "Animal makes a generic sound!" << std::endl;
}

const std::string& Animal::getType() const
{
    return (type);
}