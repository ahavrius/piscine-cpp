/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 13:23:44 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 13:53:08 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <fstream>

int			 pos = 0;
str::string	 from_file = "";

bool	is_num(std::string & const str, int pos){
	int	num_of_points = 0;
	int	num_of_not_nums = 0;

	while (pos < str.size() && str[pos] != ' ')
	{
		num_of_points += (str[pos] == '.');
		num_of_nums += (".0123456789".find(str[pos]) == string::npos)
		pos++;
	}
	return (num_of_points <= 1 && num_of_not_nums == 0);
}

int		operation_token(){

}

int		analyse_token(){
	str::string	temp_oper = "";

	if (token.compare("(") == 0 || token.compare(")") == 0){
		from_file = from_file + token + " ";
		pos += 2;
	}
	else if (token.compare("+") == 0 || token.compare("-") == 0)
		operation_token();
	else if (token.compare("*") == 0 || token.compare("/") == 0){
		if (from_file.size() > 1 && (from_file[from_file.size() - 2] == '+' ||  from_file[from_file.size() - 2] == '-')){
			temp_oper = from_file[from_file.size() - 2] + "";
			from_file = from_file.substr(0, from_file.size() - 2);
		}
		operation_token();
		from_file = from_file + temp_oper;
		pos += temp_oper.size();
	}
	else
	{
		std::cout << "wrong expression ;(" << std::endl;
		exit(0);
	}
	
}


void	parse_to_file(std::string str)
{
	std::ostream ofile("temp");
	str::string	token;

	while(pos < str.size()){
		token = s.substr(pos, s.find(" "));
		pos = analyse_token(token)
	}
	
	

}

int		main(int ac, char **av)
{
	if (ac == 2){
		parse_to_file(a[1]);

	}
	return (0);
}
