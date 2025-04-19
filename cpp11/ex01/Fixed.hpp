/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 05:29:03 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/25 22:31:27 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{

    private :
        int value;
        static const int scale;
        
    public :
        float toFloat(void) const;
        int toInt(void) const;
        ~Fixed();
        Fixed();
        Fixed(const int& val);
        Fixed(const float& val);
        Fixed(const Fixed& val);
        Fixed& operator=(const Fixed& val);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif