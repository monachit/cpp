/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 11:39:17 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/21 09:09:55 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
        this->stack = other.stack;
    return *this;
}
 


int  RPN::setStack(std::string str)
{
    int a[2];
    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
           
        if (c == ' ')
            continue;
        if (isdigit(c))
        {
            int value = c - '0';
            stack.push(value);    
        }
        else if (c == '*' || c == '/' || c == '+' || c == '-')
        {
            if (stack.size() < 2)
            {
                std::cout << "Error \n";
                return 1;
            }
            a[0] = stack.top(); stack.pop();
            a[1] = stack.top(); stack.pop();
            
            if(c == '*') stack.push(a[1] * a[0]);
            else if(c == '-') stack.push(a[1] - a[0]);
            else if(c == '+') stack.push(a[1] + a[0]);
            else if(c == '/')
            {
                if (a[0] == 0)
                {
                    std::cout << "Nah\n";
                    return (1);
                }
                stack.push(a[1] /a[0]);
            }
        }
        else
        {
            std::cout << "Invalid token\n";
            return (1);
        }
    }
    if (stack.size() != 1)
    {
        std::cout << "Error\n";
        return (1);
    }
    return (0);
}

int RPN::getResult()
{
    return stack.top();
}