/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:44:20 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 11:47:01 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *z1 = newZombie("Peter");
	Zombie *z2 = newZombie("John");
	randomChump("Bob");
	randomChump("Charlie");
	delete (z1);
	delete (z2);
	{
		Zombie *z3 = newZombie("Simon");
		randomChump("Alice");
		delete (z3);
	}
}