// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 12:24:59 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 12:25:00 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony{
public:
    Pony(std::string a1, std::string a2);
    ~Pony(void);
    void ponyPlay(void);
    void ponyWalk(void);

private:
    std::string _name;
    std::string _color;
};

#endif