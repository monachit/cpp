/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:39:34 by mnachit           #+#    #+#             */
/*   Updated: 2025/03/29 06:54:15 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{

    protected :
        std::string type;

    public :
        ~WrongAnimal();
        WrongAnimal();
        WrongAnimal(const WrongAnimal &a);
        WrongAnimal& operator=(const WrongAnimal &a);
        void makeSound() const;
        const std::string& getType() const;

    
};


#endif