/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:03:05 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 14:04:10 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
# include <iostream>
# include <string>

PmergeMe::PmergeMe(void)
{
    std::cout << "PmergeMe constructor is called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe & src)
{
    *this = src;
    std::cout << "PmergeMe copy constructor is called" << std::endl;
}

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe destructor is called" << std::endl;
}

PmergeMe & PmergeMe::operator=(const PmergeMe & src)
{
    (void)src;
    return (*this);
    std::cout << "PmergeMe destructor is called" << std::endl;
}

static void	vectorMerge(std::vector<int> lArray, std::vector<int> rArray, std::vector<int> &array)
{
	size_t	lSize = lArray.size();
	size_t	rSize = rArray.size();
	size_t	i = 0, l = 0, r = 0;

	while (l < lSize && r < rSize){
		if (lArray[l] < rArray[r]) {
			array[i] = lArray[l];
			i++;
			l++;
		} else {
			array[i] = rArray[r];
			i++;
			r++;
		}
	}
	while (l < lSize) {
		array[i] = lArray[l];
		i++;
		l++;
	}
	while (r < rSize) {
		array[i] = rArray[r];
		i++;
		r++;
	}
}

static void	vectorMergeSort(std::vector<int> &array)
{
	if (array.size() < 2)
		return ;
	size_t	mid = array.size() / 2;
	std::vector<int>	lArray;
	std::vector<int>	rArray;

	for (size_t i = 0; i < array.size(); i++)
    {
		if (i < mid)
			lArray.push_back(array[i]);
		else
			rArray.push_back(array[i]);
	}
	vectorMergeSort(lArray);
	vectorMergeSort(rArray);
	vectorMerge(lArray, rArray, array);
}

void	PmergeMe::vectorPmergeMe(int argc, char **argv)
{
	std::vector<int>	array;
	clock_t time;
	int 	nums = 0;
	try
    {
		for(int i = 1; i < argc; i++)
        {
			if (atoi(argv[i]) > 0)
			{
				array.push_back(atoi(argv[i]));
				nums++;
			}
			else
				throw InvalidValueFoundException();
		}
	}
    catch(std::exception &e)
    {
		throw InvalidValueFoundException();
	}
	std::cout << "Before: ";
	for(size_t i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	time = clock();
	vectorMergeSort(array);
	time = clock() - time;
	std::cout << "After: ";
	for(size_t i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	//std::cout << "\nTime to process a range of " << nums << " elements with std::vector: " 
	//<<  time / (double)CLOCKS_PER_SEC *1e6 << " us" << std::endl;
	//std::cout << "Vector time: " << time / (double)CLOCKS_PER_SEC *1e6 << " microseconds" << std::endl;
	std::cout << std::endl;
}

//deque
static void	dequeMerge(std::deque<int> lArray, std::deque<int> rArray, std::deque<int> &array)
{
	size_t	lSize = lArray.size();
	size_t	rSize = rArray.size();
	size_t	i = 0, l = 0, r = 0;

	while (l < lSize && r < rSize){
		if (lArray[l] < rArray[r]) {
			array[i] = lArray[l];
			i++;
			l++;
		} else {
			array[i] = rArray[r];
			i++;
			r++;
		}
	}
	while (l < lSize) {
		array[i] = lArray[l];
		i++;
		l++;
	}
	while (r < rSize) {
		array[i] = rArray[r];
		i++;
		r++;
	}
}

static void	dequeMergeSort(std::deque<int> &array)
{
	if (array.size() < 2)
		return ;
	size_t	mid = array.size() / 2;
	std::deque<int>	lArray;
	std::deque<int>	rArray;

	for (size_t i = 0; i < array.size(); i++)
    {
		if (i < mid)
			lArray.push_back(array[i]);
		else
			rArray.push_back(array[i]);
	}
	dequeMergeSort(lArray);
	dequeMergeSort(rArray);
	dequeMerge(lArray, rArray, array);
}

void	PmergeMe::dequePmergeMe(int argc, char **argv)
{
	std::deque<int>	array;
	clock_t time;
	int		nums = 0;
	try
    {
		for(int i = 1; i < argc; i++)
        {
			if (atoi(argv[i]) > 0)
			{
				array.push_back(atoi(argv[i]));
				nums++;
			}
			else
				throw InvalidValueFoundException();
		}
	}
    catch(std::exception &e)
    {
		throw InvalidValueFoundException();
	}
	std::cout << "Before: ";
	for(size_t i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	time = clock();
	dequeMergeSort(array);
	time = clock() - time;
	std::cout << "After: ";
	for(size_t i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	//std::cout << "\nTime to process a range of " << nums << " elements with std::deque: " 
	//<<  time / (double)CLOCKS_PER_SEC *1e6 << " us" << std::endl;
	//std::cout << "Queve time: " << time / (double)CLOCKS_PER_SEC *1e6 << " microseconds" << std::endl;
	std::cout << std::endl;
}
