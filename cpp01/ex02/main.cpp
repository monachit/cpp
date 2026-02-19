/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:39:59 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/20 21:20:59 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
    std::string ptr = "HI THIS IS BRAIN";    
    
    std::string *stringPTR = &ptr;
    
    std::string &stringREF = ptr;

    std::cout << "The memory address of the string variable :  " << &ptr << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable : "<< ptr << std::endl;
    std::cout << "The value pointed to by stringPTR : "<< *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : "<< stringREF << std::endl;
    
    return (0); 
}