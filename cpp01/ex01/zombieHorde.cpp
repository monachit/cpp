/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:08:44 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/14 05:18:20 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "Stop ! \n";
        exit(0);
    }
    Zombie *a = new (std::nothrow) Zombie[N];
    if (!a)
    {
        return (NULL);
    }
    int i = 0;

    while (i < N)
    {
        a[i].set(name);
        i++;
    }
    return (a);
}