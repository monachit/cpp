/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:29:26 by mnachit           #+#    #+#             */
/*   Updated: 2024/12/20 10:24:12 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"


class PhoneBook {
    private:
        Contact contact[8];
        int index;
    
    public:
        bool add_contact(PhoneBook *list);
        bool search_contact(PhoneBook *list);
        void inizialize_index(PhoneBook *list);
};

#endif