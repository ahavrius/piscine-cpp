// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:08:15 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:08:15 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include <iostream>

Squad::Squad(void): count_(0), head_(NULL), tail_(NULL) {}

Squad::Squad(Squad const & copy) {
    this->head_ = NULL;
    this->tail_ = NULL;
    this->operator= (copy);
}
void    Squad::deleteAll(void){
    marinelist_t    *old;

    while (this->head_ != NULL)
    {
        delete this->head_->marine;
        old = this->head_;
        this->head_ = this->head_->next;
        delete old;
    }
    this->head_ = NULL;
    this->tail_ = NULL;
    this->count_ = 0;
}
Squad::~Squad(void){
    this->deleteAll();
}
Squad& Squad::operator=(Squad const & copy){
    this->deleteAll();

    for(int i = 0; i < copy.getCount(); ++i)
       this->push(copy.getUnit(i)->clone());

    return *this;
}
int Squad::getCount() const{
    return this->count_;
}
ISpaceMarine* Squad::getUnit(int index) const{
    marinelist_t    *current = this->head_;
    int i = -1;

    if (index < 0 || index >= this->count_)
        return (NULL);
    while (++i < index)
        current = current->next;

    return current->marine;
}

bool    Squad::isUnic(ISpaceMarine* check) const{
    marinelist_t    *current = this->head_;

    while (current != NULL && current->marine != check)
        current = current->next;
    return current != NULL;
}


int Squad::push(ISpaceMarine* new_marine){
    if (new_marine == NULL || this->isUnic(new_marine))
        return this->count_;

    marinelist_t    *new_mlist = new marinelist_t;
    new_mlist->marine = new_marine;
    new_mlist->next = NULL;
    this->count_++;
    if (this->head_ == NULL)
    {
        this->head_ = new_mlist;
        this->tail_ = new_mlist;
    }
    else
    {
        this->tail_->next = new_mlist;
        this->tail_ = new_mlist;
    }
    return this->count_;
}