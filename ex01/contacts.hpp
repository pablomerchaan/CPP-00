#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>

class Contact {
private:
	std::string name;
	std::string nickname;
	std::string phonenumber;
	Contact();
	void	setcontact();
public:
	void	show_contact() const;
}

#endif
