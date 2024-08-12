/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 07:23:32 by hguillau          #+#    #+#             */
/*   Updated: 2024/08/12 10:50:45 by hguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

// C++ #5 - saisie utilisateur -> Video ytb (FormationVideo)
// 			std::cout << "demander une saisie : " << std::endl;
// 			std::cin >> #variable ; demande une entree de l'utilisateur
// 			std::getline(std::cin, #variable, 'delimiteur';) --- Le delimiteur arrete la saisie(non obligatoire
// 			std::cout << "#texte" << #variable << std::endl;)
// C++ #16 - classes et objets -> video ytb (FormationVideo)
// ADD (ajoute un contact)/ SEARCH (affiche le contact demander)/ EXIT (quitte et delete)

namespace contact0 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact1 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact2 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact3 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact4 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact5 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact6 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

namespace contact7 {
	std::string f_name;
	std::string l_name;
	std::string phone;
	std::string secret;
}

int	main()
{
//	if (ac != 2)
//		return 1;
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string phone;
	std::string secret;
	int	i = 0;

	std::cout << "Input First Name: ";
	std::cin >>	f_name;
	std::cout << "Input Last Name: ";
	std::cin >>	l_name;
	std::cout << "Input Nickname: ";
	std::cin >>	n_name;
	std::cout << "Input Phone Number: ";
	std::cin >>	phone;
	std::cout << "Input Secret: ";
	std::cin >>	secret;
	std::cout << "\nContact is: " << f_name << " | " << l_name << " | " << n_name << " | " << phone << " | " << secret << "." << std::endl;

	return 0;
}
