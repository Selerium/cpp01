/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:06:35 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/23 15:54:44 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << "\t\t"
		<< stringPTR << "\t\t"
		<< &stringREF << std::endl;
	
	std::cout << str << "\t"
		<< *stringPTR << "\t"
		<< stringREF << std::endl;
}