/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:52:21 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 23:17:27 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void guardGate(void);
    void attack(const std::string &target);
};

#endif