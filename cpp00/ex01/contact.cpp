/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:48:52 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/20 10:13:07 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string check_line(std::string line)
{
    if (line.size() > 10)
    {
        line.resize(9);
        line += ".";
    }
    return (line);
}

void Contact::first_name(std::string firstname)
{
    Contact::firstname = check_line(firstname);
}

void Contact::last_name(std::string last_name)
{
    Contact::lastname = check_line(last_name);
}

void Contact::nick_name(std::string nickname)
{
    Contact::nickname = check_line(nickname);
}

void Contact::phone_number(std::string phonenumber)
{
    Contact::phonenumber = phonenumber;
}

void Contact::_secret(std::string secret)
{
    Contact::secret = secret;
}

void Contact::print_contact(Contact *contact)
{
    std::cout << "first name : " << contact->firstname << std::endl;
    std::cout << "last name : " << contact->lastname << std::endl;
    std::cout << "nickname : " << contact->nickname << std::endl;
    std::cout << "phone number : " << contact->phonenumber << std::endl;
    std::cout << "secret : " << contact->secret << std::endl;
}

void Contact::print_contact1(Contact *contact, int i)
{
    std::cout << "index : " << i << " | ";
    std::cout << "First name : " << contact->firstname << " | ";
    std::cout << "Last name : " << contact->lastname << " | ";
    std::cout << "Nickname :" << contact->nickname << std::endl;
}