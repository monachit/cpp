/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:15:02 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/24 11:55:56 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::set_fname(std::string s)
{
    first_name = s;
}

void Contact::set_lname(std::string s)
{
    last_name = s;
}

void Contact::set_pnumber(std::string s)
{
    phone_number = s;
}

void Contact::set_nickname(std::string s)
{
    nikname = s;
}

void Contact::set_dsecret(std::string s)
{
    darkest_secret = s;
}

std::string Contact::get_fname()
{
    return (first_name);   
}

std::string Contact::get_lname()
{
    return (last_name);
}

std::string Contact::get_nickname()
{
    return (nikname);
}

std::string Contact::get_pnumber()
{
    return (phone_number);
}