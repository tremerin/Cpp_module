/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:49 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/28 00:04:12 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(const Brain & src);
    Brain & operator=(const Brain & src);
    ~Brain();

    void setIdea(const int i, const std::string idea);
    const std::string getIdea(const int i);
};


#endif
