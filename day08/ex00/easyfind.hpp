// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/12 20:31:37 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/12 20:31:38 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator   easyfind(T list, int value){
    typename T::const_iterator i_find = std::find(std::begin(list), std::end(list), value);

    if (i_find == std::end(list))
        throw std::exception();
    return i_find;
}

/*template<typename T>
T   easyfind(T list, int value)
{
typename T::const_iterator i_current = std::begin(list);
typename T::const_iterator i_end = std::end(list);

for(; i_current != i_end; i_current++)
{
    if (*i_current == value)
        return i_current;
}
if (i_current == i_end)
    throw std::exception();

}*/

#endif