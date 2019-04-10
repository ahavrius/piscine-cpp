/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:08:46 by ahavrius          #+#    #+#             */
/*   Updated: 2019/04/10 19:08:46 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage:  " << argv[0] << " <string>" << std::endl;
		return (0);
	}
	std::string input(argv[1]);
    double      number;

	if (input.size() == 1 && (input[0] < '0' || input[0] > '9') && isprint(input[0]))
	{
		std::cout << "char: '" << input[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
        return (0);
	}
    if (input == "-inff" || input == "+inff" || input == "nanf")
    {
            std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
  			std::cout << "float: " << input << std::endl;
			std::cout << "double: " << input.substr(0, input.size() - 1) << std::endl;
			return (0);          
    }
    if (input == "-inf" || input == "+inf" || input == "nan")
    {
            std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
  			std::cout << "float: " << input << "f" << std::endl;
			std::cout << "double: " << input << std::endl;
			return (0);          
    }
    try{
        number = std::stod(input);
    }
    catch(const std::exception & e){
            std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return (0);
    }
		std::cout << "char: ";
		if (number > CHAR_MAX || number < 0)
			std::cout << "impossible" << std::endl;
		else if (isprint(number))
			std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

		std::cout << "int: ";
		if (number > INT_MAX || number < INT_MIN || number != number)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(number) << std::endl;

		std::cout << "float: ";
		if (number > FLT_MAX || number < -FLT_MAX)
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;

		std::cout << "double: " << std::fixed << std::setprecision(1) << number << std::endl;
}