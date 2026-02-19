/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:15:06 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/23 09:11:07 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    private :
        std::string first_name;
        std::string last_name;
        std::string nikname;
        std::string phone_number;
        std::string darkest_secret;
    public :
        void set_fname(std::string s);
        void set_lname(std::string s);
        void set_nickname(std::string s);
        void set_pnumber(std::string s);
        void set_dsecret(std::string s);
        std::string get_fname();
        std::string get_lname();
        std::string get_nickname();
        std::string get_pnumber();

};


#endif