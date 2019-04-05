// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 10:18:09 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 10:18:09 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim{
public:
    Victim(std::string name);
    ~Victim(void);
    Victim(Victim const &);
    Victim& operator=(Victim const &);
    std::string getName(void) const;
    virtual void getPolymorphed() const;

protected:
    Victim(void);
    std::string name_;
};

std::ostream& operator<<(std::ostream &, Victim const &);

#endif