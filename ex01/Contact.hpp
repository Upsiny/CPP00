#ifndef CONTACT_HPP
# define  CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{
	
	int			index;
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string phone;
	std::string secret;

public :

    Contact( void );
    ~Contact( void );

    void	initContact(int id_sent);
	void	to_string( void );
	void	to_str( void );
};

#endif
