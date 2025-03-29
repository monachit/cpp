/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:39:02 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 06:55:05 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wronganimal.hpp"


class Wrongcat : public WrongAnimal{
    
    public :
        ~Wrongcat();
        Wrongcat();
        Wrongcat(const Wrongcat& a);
        Wrongcat& operator=(const Wrongcat& a);
        void makeSound() const;
    

};








#endif