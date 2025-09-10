#include "contacts.hpp"

#include <iostream>
#include <iomanip>

Contact::Contact() {}

void	Contact::setcontact()
{
	std::cout << "First Name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phonenumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestsecret);
}

void	Contact::show_contact()
{
	std::cout << "First Name: " << firstname << std::endl;
	std::cout << "Last Name: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phonenumber << std::endl;
	std::cout << "Darkest Secret: " << darkestsecret << std::endl;
}

std::string Contact::show_firstname()
{
	return (firstname);
}

std::string Contact::show_lastname()
{
	return (firstname);
}

std::string Contact::show_nickname()
{
	return (firstname);
}
