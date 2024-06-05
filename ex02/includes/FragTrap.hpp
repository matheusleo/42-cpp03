/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:32:39 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 23:33:30 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
