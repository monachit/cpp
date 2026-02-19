/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:47:13 by mnachit           #+#    #+#             */
/*   Updated: 2025/04/04 10:16:35 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat: public Animal{


    public:
       Cat(); 
       ~Cat(); 
       Cat(const Cat &a); 
       Cat& operator=(const Cat &a); 
       void makeSound() const;
      
};



#endif