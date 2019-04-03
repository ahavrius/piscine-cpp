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
        Fixed& operator=(Fixed const & copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        int _value;
        static const int _point;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &r);


#endif