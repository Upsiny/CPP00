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
#include <string.h>
#include "PhoneBook.hpp"

// C++ #5 - saisie utilisateur -> Video ytb (FormationVideo)
// 			std::cout << "demander une saisie : " << std::endl;
// 			std::cin >> #variable ; demande une entree de l'utilisateur
// 			std::getline(std::cin, #variable, 'delimiteur';) --- Le delimiteur arrete la saisie(non obligatoire
// 			std::cout << "#texte" << #variable << std::endl;)
// C++ #16 - classes et objets -> video ytb (FormationVideo)
// ADD (ajoute un contact)/ SEARCH (affiche le contact demander)/ EXIT (quitte et delete)

//	std::string f_name;
//	std::string l_name;
//	std::string n_name;
//	std::string phone;
//	std::string secret;

int	main()
{
	PhoneBook	pb;

	pb.work();
	return 0;
}
