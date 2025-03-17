/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:08:37 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/14 05:29:50 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    int l;
    
    l = 8;
    Zombie *a = zombieHorde(l, "Hello");
    if (!a)
        return (1);
    for (int i = 0; i < l; i++)
    {
        a[i].announce();
    }

    delete[] a;
    return (0);
}