// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/01 15:35:40 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/01 15:35:41 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	int getIndex(void);
	void showInfo(void);
	void setInfo(void);

private:
	int			index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std:string	_login;
	std::string	_address;
	std::string	_email;
	std::string	_phone;
	std::string	_birthday;
	std::string	_meal;
	str::string	_color;
	str::string	_secret;
};


#endif