/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:36:54 by mnachit           #+#    #+#             */
/*   Updated: 2025/02/27 18:05:23 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl a;

    a.complain("DEBUG");
    a.complain("ERROR");
    a.complain("WARNING");
    a.complain("INFO");

    return (0);
}