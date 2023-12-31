/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:09:56 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 14:55:30 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 0) {
		std::cout << "Incorrect input. Closing." << std::endl;
		return (NULL);
	}
	Zombie	*list = new Zombie[N];
	for (int i = 0; i < N; i++) {
		list[i].setName(name);
	}
	return (list);
}
