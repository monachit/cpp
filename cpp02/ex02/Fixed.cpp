/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:01:00 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/25 23:19:50 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::scale = 8;

Fixed::~Fixed()
{
    
}

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    this->value = other.value;
}

Fixed::Fixed(const int& val)
{   
    value = val * (1 << scale);
}

Fixed::Fixed(const float& val)
{
    value = roundf(val * (1 << scale));
}

bool Fixed::operator>(const Fixed &other) const
{
    return value > other.value;
}
bool Fixed::operator<(const Fixed &other) const
{
    return value > other.value;
}
bool Fixed::operator>=(const Fixed &other) const
{
    return value > other.value;
}
bool Fixed::operator<=(const Fixed &other) const
{
    return value > other.value;
}
bool Fixed::operator==(const Fixed &other) const
{
    return value > other.value;
}
bool Fixed::operator!=(const Fixed &other) const
{
    return value > other.value;
}

int Fixed::getRawBits() const
{
    return (value);
}


float Fixed::toFloat() const
{
    return ((float)(value) / 256);
}

int Fixed::toInt() const
{
    return ((int)(value) / 256);    
}

void Fixed::setRawBits(int const raw)
{
    value = raw; 
}

Fixed& Fixed::min(Fixed& a,Fixed& b)
{
    if (a.value < b.value)
        return (a);
    return(b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.value < b.value)
        return (a);
    return(b);
}

Fixed& Fixed::max(Fixed& a,Fixed& b)
{
    if (a.value > b.value)
        return (a);
    return(b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.value > b.value)
        return (a);
    return(b);
}

Fixed& Fixed::operator=(const Fixed& val) 
{
    if (this != &val)
        value = val.getRawBits();
    return (*this);
}

Fixed& Fixed::operator++()
{
    value+=1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    value+=1;
    return (tmp);
}

Fixed& Fixed::operator--()
{
    value-=1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    value-=1;
    return (tmp);
}

Fixed Fixed::operator +(const Fixed& r) const
{
    Fixed tmp = *this;
    tmp.value += r.value;
    return (tmp);
}

Fixed Fixed::operator -(const Fixed& r) const
{
    Fixed tmp = *this;
    tmp.value -= r.value;
    return (tmp);
}

Fixed Fixed::operator /(const Fixed& r)  const
{
    return (Fixed(this->toFloat() / r.toFloat()));
}

Fixed Fixed::operator *(const Fixed& r) const
{
    return (Fixed(this->toFloat() * r.toFloat()));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
