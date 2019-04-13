// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/13 12:26:10 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/13 12:26:11 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"
#include <time.h>

#include <iostream>

int	main(int ac, char **av)
{
	srand(time(0));
	if (ac != 2)
	{
		std::cout << "enter a positive value" << std::endl;
		return (0);
	}
	int n_span = atoi(av[1]);

	if (n_span <= 0)
	{
		std::cout << "enter a positive value" << std::endl;
		return (0);
	}
    int temp;
	Span test(n_span);
    std::cout << "[ ";
    for(int i = 0; i < n_span; i++)
    {
        temp = rand() % 10000;
  		test.addNumber(temp);
        if (i != n_span - 1)
            std::cout << temp << ", ";
    }
    std::cout << " ]" << std::endl;
	try
	{
		std::cout << "shortest span: " << test.shortestSpan() << std::endl;
        std::cout << "longest span: " << test.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    
	return (0);
}