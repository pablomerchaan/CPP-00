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
	teststrings();
}

void	Contact::teststrings() {
	int i = 0;
	std::string s1;
	std::string s2;
	while (firstname[i]) {
		if ((unsigned char)firstname[i] == 0xC3 &&
				(unsigned char)firstname[i + 1] == 0xB1) {
			s1 = firstname.substr(0, i);
			s2 = firstname.substr(i + 2, firstname.size() - i - 2);
			firstname = s1 + s2;
		}
		else
				i++;
	}
	i = 0;
	while (lastname[i]) {
		if ((unsigned char)lastname[i] == 0xC3 &&
				(unsigned char)lastname[i + 1] == 0xB1) {
			s1 = lastname.substr(0, i);
			s2 = lastname.substr(i + 2, lastname.size() - i - 2);
			lastname = s1 + s2;
		}
		else
				i++;
	}
	i = 0;
	while (nickname[i]) {
		if ((unsigned char)nickname[i] == 0xC3 &&
				(unsigned char)nickname[i + 1] == 0xB1) {
			s1 = nickname.substr(0, i);
			s2 = nickname.substr(i + 2, nickname.size() - i - 2);
			nickname = s1 + s2;
		}
		else
				i++;
	}
	i = 0;
	while (phonenumber[i]) {
		if ((unsigned char)phonenumber[i] == 0xC3 &&
				(unsigned char)phonenumber[i + 1] == 0xB1) {
			s1 = phonenumber.substr(0, i);
			s2 = phonenumber.substr(i + 2, phonenumber.size() - i - 2);
			phonenumber = s1 + s2;
		}
		else
				i++;
	}
	i = 0;
	while (darkestsecret[i]) {
		if ((unsigned char)darkestsecret[i] == 0xC3 &&
				(unsigned char)darkestsecret[i + 1] == 0xB1) {
			s1 = darkestsecret.substr(0, i);
			s2 = darkestsecret.substr(i + 2, darkestsecret.size() - i - 2);
			darkestsecret = s1 + s2;
		}
		else
				i++;
	}
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
	return (lastname);
}

std::string Contact::show_nickname()
{
	return (nickname);
}
