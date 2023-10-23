/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:49:13 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 13:17:49 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	std::string	name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif