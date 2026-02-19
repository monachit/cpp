/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:14:55 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/24 13:04:28 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


int main(int ac, char **av)
{
    Phonebook phonebook;
    std::string str;

    std::cout << "Welcome to the Phonebook : \n";
    std::cout << "Please choose : ADD, SEARCH, EXIT \n";
    if (!getline(std::cin, str))
        return (1);
    phonebook.set_index(-1);
    while (str != "EXIT")
    {
        if (str == "ADD")
            phonebook.add_in(&phonebook);
        else if (str == "SEARCH")
            phonebook.search_in(&phonebook);
        std::cout << "Please choose : ADD, SEARCH, EXIT \n";
        if(!getline(std::cin, str))
            return (1);
    }
    std::cout << "Gooood byy \n";
    return(0);
}