/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:17:29 by hguillau          #+#    #+#             */
/*   Updated: 2024/11/25 13:41:03 by hguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

// pour la declaration de 'c', possibilite aussi d'utiliser char c pour un unique caractere.
// std::string permet cependant de prendre aussi en compte les chaines de caracteres.

int	main(int ac, char **av)
{
	std::string	c;

	if (ac > 1)
	{
		for (int i = 1; av[i]; i++)
		{
			for	(int j = 0; av[i][j]; j++)
			{
				c = toupper(av[i][j]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
