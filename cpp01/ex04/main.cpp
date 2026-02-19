/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:19:40 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/20 21:45:04 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string ft_modif(std::string s, std::string s1, std::string s2)
{
    int pos = 0;
    pos = s.find(s1, pos);
    while (pos  != -1)
    {
        s = s.substr(0, pos) + s2 + s.substr(pos + s1.length());  
        pos += s2.length();
        pos = s.find(s1, pos);
    }
    return s;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "THE PROGRAM ACCAPT ONLY 3 PARAMETERS \n";
        return (1);
    }
    std::string text;
    std::ifstream MyReadFile(av[1]);
    if (!MyReadFile.is_open()) {
        std::cout << "could not open the input file.\n";
        return 1;
    }
    std::ofstream MyFile(std::string(av[1]) + ".replace");
    if (!MyFile.is_open()) {
        std::cout  << "could not open the output file.\n";
        return 1;
    }
    int a = 1;
    while (getline(MyReadFile, text))
    {
        if (!a)
            MyFile << "\n";
        MyFile << ft_modif(text, av[2], av[3]);
        a = 0;
    }
    MyReadFile.close();
    MyFile.close();   
}
