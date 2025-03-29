/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:40:11 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 04:50:04 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wronganimal.hpp"


WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(std::string str)
{
    std::cout << "WrongAnimal copy constructor called\n";
    type = str;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &a)
{
    if (this != &a)
        this->type = a.type;
    return *this;
}

void  WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a generic sound!" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return (type);
}