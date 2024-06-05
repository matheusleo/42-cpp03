/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:19:07 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 22:50:28 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name)
    : name(name),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " is gone!" << std::endl;
    std::cout << std::endl;
    std::cout << "Final '" << name << "' stats: " << std::endl;
    std::cout << "Hit points: " << hitPoints << std::endl;
    std::cout << "Energy points: " << energyPoints << std::endl;
    std::cout << "Attack damage: " << attackDamage << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (!(this->hasEnergy() || this->hasHitPoints()))
    {
        std::cout << "ClapTrap "
                  << name
                  << " is out of energy!"
                  << std::endl;
        return;
    }
    std::cout << "ClapTrap "
              << name
              << " attacks "
              << target
              << ", causing "
              << attackDamage
              << " points of damage!" << std::endl;
    this->wasteEnergy(1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    std::cout << "Ouch! ClapTrap "
              << name
              << " suffered "
              << amount
              << " hit points!"
              << " Current hit points: "
              << this->hitPoints
              << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!(this->hasEnergy() || this->hasHitPoints()))
    {
        std::cout << "ClapTrap "
                  << name
                  << " is out of energy!"
                  << std::endl;
        return;
    }
    this->hitPoints += amount;
    std::cout << "Yeah! ClapTrap "
              << name
              << " has been repaired for "
              << amount
              << " points!"
              << " Current hit points: "
              << this->hitPoints
              << std::endl;
    this->wasteEnergy(1);
}

bool ClapTrap::hasEnergy(void) const
{
    return (this->energyPoints > 0);
}

bool ClapTrap::hasHitPoints(void) const
{
    return (this->hitPoints > 0);
}

void ClapTrap::wasteEnergy(unsigned int amount)
{
    if (!(this->hasEnergy() || this->hasHitPoints()))
    {
        std::cout << "ClapTrap "
                  << name
                  << " cannot do anything!"
                  << std::endl;
        return;
    }
    this->energyPoints -= amount;
    std::cout << "ClapTrap "
              << name
              << " has wasted "
              << amount
              << " energy points!"
              << " Current energy points: "
              << this->energyPoints
              << std::endl;
}