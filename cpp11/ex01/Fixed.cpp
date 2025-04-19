/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 05:29:05 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/25 22:48:40 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::scale = 8;

Fixed::~Fixed()
{
    std::cout << "Nihaya l3alam\n"; 
}

Fixed::Fixed()
{
    std::cout << "default called\n";
}

Fixed::Fixed(const int& val)
{   
    std::cout << "int called\n";
    value = val * (1 << scale);
}

Fixed::Fixed(const float& val)
{
    std::cout << "float called\n";
    value = roundf(val * (1 << scale));
}

Fixed::Fixed(const Fixed& val)
{
    std::cout << "copy ja \n" ;
    *this = val;
}

Fixed& Fixed::operator=(const Fixed& val)
{
    std::cout << "copy assing \n";
    if (this != &val)
        value = val.getRawBits();
    return (*this);
}

float Fixed::toFloat() const
{
    return ((float)(value) / 256);
}

int Fixed::toInt() const
{
    return ((int)(value) / 256);    
}

int Fixed::getRawBits() const
{
    std::cout << "getRaw \n";
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    std::cout << fixed.toFloat();
    return os;
}
