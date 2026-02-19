/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 05:05:34 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 13:57:54 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"



Brain::Brain()
{
    std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called\n";
}

Brain::Brain(const Brain& a)
{
    std::cout << "Brain copy constructor called\n";
    for (int i = 0; i < 100 ;i++)
        ideas[i] = a.ideas[i];
}

Brain& Brain::operator=(const Brain &a)
{
    if (this != &a)
    {
        for (int i = 0; i <  100 ;i++)
            ideas[i] = a.ideas[i];
    }
    return *this;
}

void Brain::set(int index, const std::string &str)
{
    if (index >=0 && index < 100)
        ideas[index] = str;
}

const std::string Brain::get(int index) const
{
    if (index >=0 && index < 100)
        return (ideas[index]);
    return ("Wrong");
}

