/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 02:10:41 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 05:52:00 by mnachit          ###   ########.fr       */
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
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    
    
    delete j;
    delete i;
    
    return 0;
}