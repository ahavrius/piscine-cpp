// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:57:39 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:57:40 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>

class Enemy {
        private:
                Enemy();
        protected:
                std::string type_;
                int hp_;
        public:
                Enemy(int hp, std::string const & type);
                Enemy(Enemy const &);
                Enemy& operator=(Enemy const &);
                virtual ~Enemy();
                std::string const & getType() const;
                int getHP() const;
                virtual void takeDamage(int);
 };


#endif