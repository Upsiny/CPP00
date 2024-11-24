#ifndef PHONEBOOK_HPP
# define  PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook{

	int	id;
	Contact pb_tab[8];

public :

    PhoneBook();
    ~PhoneBook();
    void	work();
    void	add();
    void	search();
};

#endif
