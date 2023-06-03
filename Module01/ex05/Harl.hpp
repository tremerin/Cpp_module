/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:00:26 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:00:30 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>


class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:
	Harl();
	~Harl();

	void complain(std::string level);
};

typedef void (Harl::*t_func) (void);

#endif
