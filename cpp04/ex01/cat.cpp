/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:51:57 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 15:14:05 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called\n";
    a = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";   
    delete a;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat Copy constructor called\n";
    a = new Brain(*other.a);
    type = other.type;
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        delete a;
        this->type = other.type;
        this->a = new Brain(*other.a);
    }
    return (*this);
}

void Cat::makeSound() const
{ 
    std::cout << "Meowwww \n";
}

const std::string Cat::get(int index) const
{
    return (this->a->get(index));
}

void Cat::set(int index, const std::string &str)
{
    this->a->set(index, str);
}