#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ) {
}


void	Contact::initContact(int id_sent) {

	index = id_sent;
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
	std::cout << f_name << " Created" << std::endl;
}

Contact::~Contact( void ) {

  std::cout << "Contact " << f_name << " removed" << std::endl;
  return;
}

std::string	resize(std::string str) {
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return str;
}

void	Contact::to_string() {
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << resize(f_name) << "|";
	std::cout << std::setw(10) << resize(l_name) << "|";
	std::cout << std::setw(10) << resize(n_name) << std::endl;
}

void	Contact::to_str() {
	std::cout << "First name   : " << f_name << std::endl;
	std::cout << "Last name    : " << l_name << std::endl;
	std::cout << "Nickname     : " << n_name << std::endl;
	std::cout << "Phone Number : " << phone << std::endl;
	std::cout << "Shame on you : " << secret << std::endl;
}
