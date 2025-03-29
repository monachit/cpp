/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 05:04:53 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 05:34:14 by mnachit          ###   ########.fr       */
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
        void set(int index, std::string str);
        std::string get(int index);
};





#endif