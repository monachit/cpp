/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:45:29 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/04 11:44:55 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP






#include <stack>
#include <iostream>


class RPN
{
    private:
        std::stack<int> stack;

    public:
        RPN();
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        int setStack(std::string str);
        int getResult();
        
};

#endif



