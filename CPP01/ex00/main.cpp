/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:11:44 by amaso             #+#    #+#             */
/*   Updated: 2023/05/30 17:11:50 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	zombie1.setname("dio");
	zombie1.announce();

	Zombie *zombie2 = newZombie("stronzo");
	delete zombie2;

	randomChump("coglione");
ls
	return 0;
}