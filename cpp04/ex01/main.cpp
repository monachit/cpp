/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 02:10:41 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 13:55:29 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"
#include "brain.hpp"

int main()
{   
    Dog a;
    Cat b;



    for (int i = 0; i < 5 ; i++)
    {
        a.set(i, "Brain");
        b.set(i, "Brain1");
    }

    for (int i = 0; i < 5 ; i++)
    {
        std::cout << a.get(i) << " ";
        std::cout << b.get(i) << "\n";
    }
    return 0;
}