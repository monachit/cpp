/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:43:44 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/25 11:45:18 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Main::Main(std::string s1, std::string s2)
{
    this->s1 = s1;
    this->s2 = s2;
}

std::string Main::getfile1(std::ifstream file)
{
    std::string line;
    
    getline(file, line);
    return (line);
}