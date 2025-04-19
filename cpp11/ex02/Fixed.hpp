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
        Fixed& operator =(const Fixed& val);
        Fixed& operator ++();
        Fixed operator ++(int);
        Fixed& operator --();
        Fixed operator --(int);
        Fixed operator +(const Fixed& r) const; 
        Fixed operator -(const Fixed& r) const;
        Fixed operator *(const Fixed& r) const;
        Fixed operator /(const Fixed& r) const;
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        static  Fixed& min(Fixed& a,Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static  Fixed& max(Fixed& a,Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);



#endif