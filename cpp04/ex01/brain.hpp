/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 05:04:53 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 11:15:14 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"

class Brain{
    
    private :
        std::string ideas[100];
    
    
    public:
        ~Brain();
        Brain();
        Brain(const Brain& a);
        Brain& operator=(const Brain &a);
        void set(int index, const std::string &str);
        const std::string get(int index) const;
};





#endif