/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:12:12 by mnachit           #+#    #+#             */
/*   Updated: 2025/10/15 06:58:11 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"





int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: Not enough arguments" << std::endl;
        return 1;
    }

    try
    {
        PmergeMe pmerge;
        std::vector<int> v = pmerge.parseinput(ac, av);
        std::deque<int> d(v.begin(), v.end());

        clock_t startvec = clock();
        std::vector<int> sortedVec = pmerge.FordJohnsonsortvec(v);
        clock_t endvec = clock();
            
        clock_t startdeq = clock();
        std::deque<int> sortedDeq = pmerge.FordJohnsonsortdeq(d);
        clock_t enddeq = clock();
        std::cout << "Sorted Vector: ";
        for (size_t i = 0; i < sortedVec.size(); i++)
            std::cout << sortedVec[i] << " ";
        std::cout << std::endl;
        
        std::cout << "Sorted Deque: ";
        for (size_t i = 0; i < sortedDeq.size(); i++)
            std::cout << sortedDeq[i] << " ";
        std::cout << std::endl;
        double timevec = double(endvec - startvec) / CLOCKS_PER_SEC * 1000000;
        double timedeq = double(enddeq - startdeq) / CLOCKS_PER_SEC * 1000000;
        std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << timevec << " us" << std::endl;
        std::cout << "Time to process a range of " << v.size() << " elements with std::deque : " << timedeq << " us" << std::endl;

        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
}