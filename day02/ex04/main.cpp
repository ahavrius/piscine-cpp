// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 19:57:25 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 19:57:26 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Fixed.class.hpp"
#include <iostream>
#include <string>

int	find_first(std::string expr, char op)
{
	int	brackets = 0;
	int	index;

	for (index = 0; index < (int)expr.size(); index++)
	{
		if (expr[index] == '(')
			brackets++;
		else if (expr[index] == ')')
			brackets--;
		else if (expr[index] == op && brackets == 0)
			return index;
	}
	return -1;
}

Fixed	eval_expr( std::string expr )
{
	size_t expr_len = expr.size();

	while (expr_len >= 2 && expr[0] == '(' && expr[expr_len - 1] == ')')
		expr = expr.substr(1, expr_len - 2);
	if (expr_len == 0)
	{
		std::cout << "Invalid format" << std::endl;
		exit(1);
	}

	size_t op_index = std::string::npos;

	if ((op_index = find_first(expr, '+')) != -1 && op_index != 0 && op_index != expr_len)
		return	eval_expr(expr.substr(0, op_index)) +
				eval_expr(expr.substr(op_index + 1, expr_len - op_index));
	if ((op_index = find_first(expr, '-')) != -1 && op_index != 0 && op_index != expr_len)
		return	eval_expr(expr.substr(0, op_index)) -
				eval_expr(expr.substr(op_index + 1, expr_len - op_index));
	if ((op_index = find_first(expr, '*')) != -1 && op_index != 0 && op_index != expr_len)
		return	eval_expr(expr.substr(0, op_index)) *
				eval_expr(expr.substr(op_index + 1, expr_len - op_index));
	if ((op_index = find_first(expr, '/')) != -1 && op_index != 0 && op_index != expr_len)
		return	eval_expr(expr.substr(0, op_index)) /
				eval_expr(expr.substr(op_index + 1, expr_len - op_index));
	float value;
	try
	{
		value = std::stof(expr);
	}
	catch (const std::exception&)
	{
		std::cout << "Invalid format" << std::endl;
		exit(1);
	}
	return Fixed(value);
}

std::string trim( std::string str )
{
	std::string new_str = "";
	for (size_t i = 0; i < str.size(); i++)
		if (str[i] != '\t' && str[i] != ' ')
			new_str += str[i];
	return new_str;
}

int main( int argc, char **argv )
{
	if (argc == 2)
	{
		std::string expr(argv[1]);
		std::cout << eval_expr(trim(expr)) << std::endl;

    }
    else
        std::cout << "where's expression" << std::endl;
    
    return 0;
}