/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:15:03 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 16:36:51 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <exception>

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon *weapon) {
	this->name = name;
	this->weapon = weapon;
}

void	HumanB::attack() {
	try {
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->name << " does not have a weapon" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}