/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:00:35 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/30 18:25:49 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (void) {
	Harl test;

	test.complain("debug");
	test.complain("warnIng");
	test.complain("info");
	test.complain("error");
	test.complain("dEbUg");
	test.complain("WarNing ");
	test.complain("i nfo");
	test.complain(" error");
	test.complain("");
}