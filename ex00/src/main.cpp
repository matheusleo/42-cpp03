/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:32:09 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 22:33:00 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main(void)
{
    ClapTrap claptrap("Claptrap");

    claptrap.attack("Skag");
    claptrap.takeDamage(5);
    claptrap.beRepaired(10);

    return (0);
}