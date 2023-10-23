/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:44:20 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 14:56:23 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*list;
	list = zombieHorde(5, "Bob");
	if (!list)
		return (0);
	for (int i = 0; i < 5; i++) {
		list[i].announce();
	}
	delete[] list;
}