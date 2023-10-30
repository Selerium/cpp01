/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:25:15 by jadithya          #+#    #+#             */
/*   Updated: 2023/10/30 18:11:43 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
		void	complain(std::string level);
		typedef void (Harl::*message) (void);
};

#endif