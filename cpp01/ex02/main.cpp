/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:39:36 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/21 14:45:25 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << "The memory address of the string variable is : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR is : " << ptr << std::endl;
    std::cout << "The memory address held by stringREF is : " << &ref << std::endl;
    
    std::cout << "The string variable is : " << str << std::endl;
    std::cout << "The string variable held by stringPTR is : " << *ptr << std::endl;
    std::cout << "The string variable held by stringREF is : " << ref << std::endl;
}