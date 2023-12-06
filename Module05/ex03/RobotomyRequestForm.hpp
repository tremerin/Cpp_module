/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:13:08 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/06 20:07:42 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <ctime>
# include <cmath>

class AForm;

class RobotomyRequestForm : public AForm
{
private:
    const std::string   _target;
    RobotomyRequestForm();

public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & src);
    ~RobotomyRequestForm();
    RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
    void	execute(const Bureaucrat & executor) const;

};


#endif
