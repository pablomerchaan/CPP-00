#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>

class Contact {
private:
	std::string	firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
public:
	Contact();
	void	setcontact();
	void	teststrings();
	void	show_contact();
	std::string	show_lastname();
	std::string	show_firstname();
	std::string	show_nickname();
};

#endif
