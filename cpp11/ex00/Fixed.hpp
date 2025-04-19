/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 05:28:16 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/22 05:17:17 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <stdio.h>
#include <string>


class Fixed{

    private :
        int value ;
        static const int scale;
    public : 
        Fixed();
        Fixed(const Fixed& c);
        Fixed& operator=(const Fixed& b);
        ~Fixed();
         int getRawBits(void) const;
         void setRawBits(int const raw);
};



#endif