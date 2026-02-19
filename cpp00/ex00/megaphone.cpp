/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:13:20 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/24 13:25:05 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        if (i != 1 && av[i])
            std::cout << " ";
        for  (int j = 0; av[i][j] ; j++)
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] = av[i][j] - 32;
            std::cout << av[i][j];
        }
    }
    std::cout << "\n";
}