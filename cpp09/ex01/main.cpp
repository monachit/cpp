/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:45:01 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/04 11:44:42 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>


//"8 9 * 9 - 9 - 9 - 4 - 1 +"
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error\n";
        return 1;
    }
    RPN rpn;
    
    if (rpn.setStack(av[1]))
        return 1;
    std::cout << rpn.getResult() << std::endl;
    return 0;
}