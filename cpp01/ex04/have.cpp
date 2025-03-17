/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   have.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:41:21 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/12 01:26:03 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "have.hpp"

std::string have::ft_newname(std::string s)
{
    std::string str;
    std::string str1=".replace";
    int i = 0;
    while (s[i])
        i++;
    str.resize(i + 8);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    for(int j = 0; str1[j]; j++)
        str[i++] = str1[j];
    return (str);
}

int check_first(std::string s, std::string s1)
{
    int i = 0;
    int j;
    while (s[i])
    {
        j = 0;
        while (s1[j] == s[i + j])
        {
            j++;
            if (!s1[j])
                return (0);
        }
        i++;
    }
    return (1);
}

int ft_check(std::string s1, std::string s, int l)
{
    int i = 0;
    while (s1[i] == s[l])
    {
        i++;
        l++;
        if (s1[i] == '\0')
            return (1);
    }
    return (0);
}

std::string have::ft_modif(std::string s, std::string s1, std::string s2)
{
    
    if (check_first(s, s1))
        return s;
    std::string str = "";
    unsigned long  i = 0;
    while (i < s.length())
    {
        if (s1[0] == s[i] && ft_check(s1, s, i))
        {
            str += s2;
            i += s1.length();            
        }
        else
        {
            str += s[i];
            i++;
        }
    }
    return (str);
}