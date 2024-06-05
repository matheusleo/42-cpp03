/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:32:09 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 23:22:47 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main(void)
{
    ClapTrap claptrap("Claptrapper");
    ScavTrap scavtrap("Serena");

    claptrap.attack("Skag");
    claptrap.takeDamage(5);
    claptrap.beRepaired(10);

    scavtrap.attack("Skag");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    return (0);
}