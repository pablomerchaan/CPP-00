#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contacts.hpp"

class Phonebook {
private:
	Contact contacts[8];
	int	i;
public:
	Phonebook();
	void	add_contact();
	void	display_contacts();
	void	search_contact();
};

#endif
