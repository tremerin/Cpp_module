/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:00:10 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 01:48:53 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <iomanip>
# include <vector>
# include <deque>

class	PmergeMe 
{
private:
    PmergeMe();
    PmergeMe(PmergeMe const & src);
    ~PmergeMe();
    PmergeMe & operator=(PmergeMe const & src);
public:
    static void	vectorPmergeMe(int argc, char **argv);
    static void	dequePmergeMe(int argc, char **argv);

    class	InvalidValueFoundException : public std::exception 
    {
        virtual const char* what() const throw() { return "Invalid Value Found"; }
    };

};

#endif