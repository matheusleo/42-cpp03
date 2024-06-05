/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:32:09 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 23:39:05 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main(void)
{

    ClapTrap claptrap("Claptrapper");
    claptrap.attack("Skag");
    claptrap.takeDamage(5);
    claptrap.beRepaired(10);
    std::cout << std::endl;

    ScavTrap scavtrap("Serena");
    scavtrap.attack("Skag");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    std::cout << std::endl;

    FragTrap fragtrap("Fraggy");
    fragtrap.attack("Skag");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

    return (0);
}