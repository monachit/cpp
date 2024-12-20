/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:28:36 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/20 10:11:53 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>


class Contact {
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string secret;
    public:
        void    first_name(std::string firstname);
        void    last_name(std::string last_name);
        void    nick_name(std::string nickname);
        void    phone_number(std::string phonenumber);
        void    _secret(std::string secret);
        void    print_contact(Contact *contact);
        void    print_contact1(Contact *contact, int i);
};


#endif