/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:39 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 16:21:18 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType() {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::Weapon(std::string type) {
	this->setType(type);
}