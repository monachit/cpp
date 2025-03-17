/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:13:56 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/27 18:13:57 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
class Harl{

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);    

    public:
        void complain(std::string level);


};




#endif