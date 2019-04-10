// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:57:24 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:57:25 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class A : public Base{

public:
    A();
    A(A const &);
    ~A();
    A& operator=(A const&);

    A * generate(void);
};

#endif