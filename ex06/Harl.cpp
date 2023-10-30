/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 22:14:07 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/30 18:52:33 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cctype>

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I really do!" << std::endl << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! If you did, I "
		<< "wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years whereas you started working here "
		<< "since last month." << std::endl << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl << std::endl;
}

void	Harl::complain(std::string level) {
	std::string list[4] = {"debug", "info", "warning", "error"};
	int num = 4;
	for (int i = 0; i < (int) level.length(); i++)
		level[i] = tolower(level[i]);
	for (num = 0; num < 4; num++)
		if (level.compare(list[num]) == 0)
			break ;

	switch (num) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}
}