/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:24:15 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/28 03:46:21 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


int main(int ac, char **av)
{
    Main main = Main(av[2], av[3]);
    if (av[1].is_open() == false)
    {
        std::cout << "ERROR: Invalid file\n";
        return (1);
    }
    if (ac != 4)
    {
        std::cout << "ERROR: Invalid number of arguments\n";
        return (1);
    }
    std::string line = main.getfile1(av[1]);
    int j = 0;
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == ' ')
            j++;
        while (line[i]== ' ')
            i++;
    }
    st::string *tab = new std::string[j];
    for (int i = 0; i < line.size(); i++)
    {
        while (line[i] != ' ')
        {
            tab[j] += line[i];
            i++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (tab[i] == main.s1)
            tab[i] = main.s2;
    }
    av[3]+= ".replace";
    std::ofstream file(av[3]);
    for (int i = 0; i < j; i++)
    {
        file << tab[i];
        if (i != j - 1)
            file << " ";
    }
    file.close();
    delete [] tab;
}