// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/12 14:00:13 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/12 14:00:13 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename T>
void    print_f(T &a){
    std::cout << " iteam " << a << std::endl;
}

template<typename T>
void    iter(T *arr, size_t n, void (* f)(T &)){
    for(size_t i = 0; i < n; i++)
    {
        f(arr[i]);
    }
}

int main(){
    char arr_char[6] = "hello";
    int arr_int[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    iter<char>(arr_char, 5, print_f<char>);
    iter<int>(arr_int, 10, print_f<int>);

    return 0;
}