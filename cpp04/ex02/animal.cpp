/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:50:10 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 05:50:57 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"


Animal::Animal()
{
    std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(std::string str)
{
    std::cout << "Animal copy constructor called\n";
    type = str;
}

Animal& Animal::operator=(Animal &a)
{
    if (this != &a)
        this->type = a.type;
    return *this;
}

const std::string& Animal::getType() const
{
    return (type);
}