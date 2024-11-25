#ifndef CONTACT_HPP
# define  CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

private :

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
	void	setIndex(int i);
	void	setFname(std::string str);
	void	setLname(std::string str);
	void	setNname(std::string str);
	void	setPhone(std::string str);
	void	setSecret(std::string str);
};

#endif
