// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 20:12:21 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 20:12:21 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>

class Human {
private:
    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);

public:
    void action(std::string const & action_name, std::string const & target);
};

typedef  void (Human::*actions)(std::string const &);

#endif