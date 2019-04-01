// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/01 14:34:38 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/01 14:34:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void	toUpcase(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' and str[i] <= 'z')
			str[i] += 'A' - 'a';
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		toUpcase(argv[i]);
		std::cout << argv[i];
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}