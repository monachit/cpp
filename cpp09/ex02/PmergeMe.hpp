/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:12:15 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/15 06:36:05 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP



#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>

class PmergeMe {
    
    public :
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        std::vector<int> FordJohnsonsortvec(std::vector<int> &v);
        std::deque<int> FordJohnsonsortdeq(std::deque<int> &d);
        std::vector<int> parseinput(int ac, char **av);


};







#endif