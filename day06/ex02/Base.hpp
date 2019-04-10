// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Base.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:57:08 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:57:09 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BASE_HPP
#define BASE_HPP

class Base{

public:
    Base();
    Base(Base const &);
    virtual ~Base();
    Base& operator=(Base const&);

    Base * generate(void);
};

#endif