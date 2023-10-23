/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:06:05 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 16:34:56 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
	Weapon *weapon;
	std::string name;

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif