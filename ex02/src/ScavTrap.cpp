/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:03:16 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 23:24:22 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Oh noes! A ScavTrap " << name << " has spawned!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Thanks Heaves! ScavTrap " << this->name << " is gone!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (!(this->hasEnergy() || this->hasHitPoints()))
    {
        std::cout << "ScavTrap "
                  << name
                  << " is out of energy!"
                  << std::endl;
        return;
    }
    std::cout << "ScavTrap "
              << name
              << " attacks "
              << target
              << ", causing "
              << attackDamage
              << " points of damage!" << std::endl;
    this->wasteEnergy(1);
}