#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

  std::cout << "PhoneBook Created" << std::endl;
  id = 1;
  return;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "PhoneBook Destroyed" << std::endl;
	return;
}

bool	isNumber(const std::string s)
{
	if (s.empty())
		return false;
	for (int i = 0; i < (int)s.length(); i++)
	{
		if (std::isdigit(s[i]) == 0)
			return false;
	}
	return true;
}

void	PhoneBook::work() {
  std::string action;

  while (1) {
		std::cout << "Select between SEARCH, ADD and EXIT\n";
		std::cin >> action;;
		if (action == "ADD")
			PhoneBook::add();
		else if (action == "SEARCH")
			PhoneBook::search();
		else if (action == "EXIT") {
			std::cout << "Goodbye !!" << std::endl;
			break ;
		}
		else
			std::cout << "Not an option" << std::endl;
	}
}

void	PhoneBook::add() {
	if (id > 8)
		id = 1;
	pb_tab[id - 1].initContact(id);
	id++;
}


void	PhoneBook::search() {
	std::string	id_sent;
	int			index = 0;

	for (int i = 0; i < 8; i++)
		pb_tab[i].to_string();
	while (index < 1 || index > 8)
	{
		std::cout << "Select the id of the contact you need : ";
		std::cin >> id_sent;
		if (!isNumber(id_sent))
			std::cout << "Not a number" << std::endl;
		else
			index = stoi(id_sent);
	}
	pb_tab[index - 1].to_str();
}

