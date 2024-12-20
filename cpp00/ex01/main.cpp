/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:15:54 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/20 15:21:21 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    PhoneBook Phonebook;
    
    std::string input;
    bool a = true;
    Phonebook.inizialize_index(&Phonebook);

    std::cout << "please enter : ADD, SEARCH, EXIT: ";    
    while (a)
    {
        if (!std::getline(std::cin, input))
            return (1);
        else if (input == "EXIT")
            return (0) ;
        else if (input == "SEARCH")
            a = Phonebook.search_contact(&Phonebook);
        else if (input == "ADD")
            a = Phonebook.add_contact(&Phonebook);
        else {
            std::cout << "please enter : ADD, SEARCH, EXIT: ";    
        }
    }
}