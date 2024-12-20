/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:45:12 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/20 15:20:42 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool    PhoneBook::add_contact(PhoneBook *list)
{    
    std::string input;
    std::cout << "please enter first name: ";
    while (true)
    {
        if (!std::getline(std::cin, input))
            return false;
        if (!input.empty())
            break;  
        std::cout << "please enter first name: ";
    }
    list->contact[list->index % 8].first_name(input); 
    std::cout << "please enter last name: ";
    while (true)
    {
        if (!std::getline(std::cin, input))
            return false;
        if (!input.empty())
            break;
        std::cout << "please enter last name: ";
    }
    list->contact[list->index % 8].last_name(input);
    std::cout << "please enter nickname: ";
    while (true)
    {
        if (!std::getline(std::cin, input))
            return false;
        if (!input.empty())
            break;
        std::cout << "please enter nickname: ";
    }
    list->contact[list->index % 8].nick_name(input);
    std::cout << "please enter phone number: ";
    while (true)
    {
        if (!std::getline(std::cin, input))
            return false;
        if (!input.empty())
            break;
        std::cout << "please enter phone number: ";
    }
    list->contact[list->index % 8].phone_number(input);
    std::cout << "please enter secret: ";
    while (true)
    {
        if (!std::getline(std::cin, input))
            return false;
        if (!input.empty())
            break;
        std::cout << "please enter secret: ";
    }
    list->contact[list->index % 8]._secret(input);
    std::cout << "contact added\n";
    list->index++;
    return (true);
}

bool   PhoneBook::search_contact(PhoneBook *list)
{
    if (list->index == 0)
    {
        std::cout << "no contact\n";
        return true;
    }
    for (int i = 0; i < list->index; i++)
        list->contact[i].print_contact1(&list->contact[i], i + 1);
    while (1)
    {
        std::string input;
        std::cout << "please enter index : \n";
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty. Try again.\n";
            return false;
        }

        if (input.size() == 1 && input[0] >= '1' && input[0] <= '8')
        {
            int index = input[0] - '0';
            list->contact[index - 1].print_contact(&list->contact[index - 1]);
            std::cout << "please enter : ADD, SEARCH, EXIT: ";
            return true;
        }
        else
            std::cout << "Invalid input\n";
    }
}

void    PhoneBook::inizialize_index(PhoneBook *list)
{
    list->index = 0;
}