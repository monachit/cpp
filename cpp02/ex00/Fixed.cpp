/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 05:28:59 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/25 22:46:37 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::scale = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& c)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed& Fixed::operator=(const Fixed& b)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &b)
        value = b.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout <<  "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}
