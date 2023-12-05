/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:04:52 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/04 00:37:37 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
private:
    const std::string   _target;
    PresidentialPardonForm();

public:
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & src);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
    void    execute(const Bureaucrat & executor) const;
    
};

#endif