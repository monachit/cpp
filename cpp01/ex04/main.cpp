/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:19:40 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/12 01:23:39 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "have.hpp"

int main(int ac, char **av)
{
    have p;
    if (ac != 4)
    {
        std::cout << "THE PROGRAM ACCAPT ONLY 3 PARAMETERS \n";
        return (1);
    }
    std::string text;
    std::ifstream MyReadFile(av[1]);
    std::ofstream MyFile(p.ft_newname(av[1]));
    bool a = 1;
    while (getline(MyReadFile, text))
    {
        if (!a)
            MyFile << "\n";
        MyFile << p.ft_modif(text, av[2], av[3]);
        a = 0;
    }
    MyReadFile.close();
    MyFile.close();
    
}
