// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 14:30:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 14:30:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
 
 #ifndef ZOMBIEHORDE_H
 #define ZOMBIEHORDE_H
 #include "Zombie.hpp"

 class ZombieHorde{
    public:
        ZombieHorde(int N);
        ~ZombieHorde(void);
        void announce(void);
    
        Zombie *horde;
        int     amount;
 };


 #endif