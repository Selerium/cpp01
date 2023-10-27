/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:45:45 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/24 19:01:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Invalid arguments. Exiting" << std::endl;
		return (0);
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string replacer;
	int	pos;

	filename.append(".replace");
	std::ifstream infile(argv[1]);
	if (!infile) {
		std::cout << "Error in infile opening. Exiting" << std::endl;
		return (0);
	}
	std::ofstream outfile(filename.c_str());
	if (!outfile) {
		std::cout << "Error in outfile creation. Exiting" << std::endl;
		return (0);
	}

	while (std::getline(infile, replacer)) {
		do {
			pos = replacer.find(s1);
			if (pos == (int) std::string::npos)
				break ;
			replacer.erase(pos, s1.length());
			replacer.insert(pos, s2);
		} while (pos != (int) std::string::npos);
		outfile << replacer << std::endl;
	}

	infile.close();
	outfile.close();
}