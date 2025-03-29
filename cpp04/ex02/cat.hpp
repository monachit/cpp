/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:47:13 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 05:45:22 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"

class Cat: public Animal{

    private:
        Brain* a;

    public:
       Cat(); 
       ~Cat(); 
       Cat(const Cat &other); 
       Cat& operator=(const Cat &other); 
       void makeSound() const;
      
};


#endif