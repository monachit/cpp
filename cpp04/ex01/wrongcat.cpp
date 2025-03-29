/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:40:05 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 04:50:07 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"

Wrongcat::Wrongcat()
{
    std::cout << "Wrongcat constructor called\n";
}

Wrongcat::~Wrongcat()
{
    std::cout << "Wrongcat destructor called\n";
}

Wrongcat::Wrongcat(std::string str)
{
    std::cout << "Wrongcat copy constructor called\n";
    type = str;
}

Wrongcat& Wrongcat::operator=(Wrongcat &a)
{
    if (this != &a)
        this->type = a.type;
    return *this;
}

void  Wrongcat::makeSound() const
{
    std::cout << "Wrongcat makes a generic sound!" << std::endl;
}
