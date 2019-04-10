// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   B.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:57:38 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:57:38 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef B_HPP
#define B_HPP
#include "Base.hpp"

class B: public Base{

public:
    B();
    B(B const &);
    ~B();
    B& operator=(B const&);

    B * generate(void);
};

#endif