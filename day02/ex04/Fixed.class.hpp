// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/03 14:40:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/03 14:40:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed{
    public:
        Fixed(void);
        Fixed(const int);
        Fixed(const float);

        Fixed(Fixed const & copy);
        ~Fixed(void);
        Fixed&  operator=(Fixed const & copy);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        Fixed   operator+(Fixed const & other) const;
        Fixed   operator-(Fixed const & other) const;
        Fixed   operator*(Fixed const & other) const;
        Fixed   operator/(Fixed const & other) const;

        bool   operator<(Fixed const & other) const;
        bool   operator<=(Fixed const & other) const;
        bool   operator>(Fixed const & other) const;
        bool   operator>=(Fixed const & other) const;
        bool   operator==(Fixed const & other) const;
        bool   operator!=(Fixed const & other) const;
      // overloaded prefix ++ operator
        Fixed&  operator++(void);
        Fixed&  operator--(void);      
      // overloaded postfix ++ operator
        Fixed  operator++(int);
        Fixed  operator--(int);

    static Fixed & min(Fixed& a, Fixed& b);
    static const Fixed & min(const Fixed& a, const Fixed& b);
    static Fixed & max(Fixed& a, Fixed& b);
    static const Fixed & max(const Fixed& a, const Fixed& b);
    private:
        int _value;
        static const int _point;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &r);




#endif