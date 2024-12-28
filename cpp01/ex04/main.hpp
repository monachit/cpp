/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:25:13 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/25 11:45:10 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>
#include <fstream>


class Main{
    private :
        std::string s1;
        std::string s2;
    public :
        Main(std::string s1, std::string s2);
        std::string getfile1(std:ifstream file);
};

#endif