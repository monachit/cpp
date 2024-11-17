/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:09:30 by mnachit           #+#    #+#             */
/*   Updated: 2024/11/12 22:07:18 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av)
{
    if (ac == 1)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac ; i++)
    {
        if (i != 1)
            std::cout<< " ";
        for (int j = 0; av[i][j]; j++)
            std::cout<<  (char)(toupper(av[i][j]));
    }
    std::cout << std::endl;
}
