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

class Fixed{
    public:
        Fixed(void);
        Fixed(Fixed const & copy);
        ~Fixed(void);
        Fixed& operator=(Fixed const & copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _value;
        static const int _point;
};

#endif