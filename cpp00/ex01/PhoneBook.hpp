/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:15:12 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/24 12:37:11 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook{

    private:
        Contact phonebook[8];
        int    index;

    public:
        void add_in(Phonebook *list);
        void search_in(Phonebook *list);
        void  set_index(int i);
        int     get_index();
};

#endif