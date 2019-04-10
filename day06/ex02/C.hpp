// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:57:43 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:57:44 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class C: public Base{

public:
    C();
    C(C const &);
    ~C();
    C& operator=(C const&);

    C * generate(void);
};

#endif