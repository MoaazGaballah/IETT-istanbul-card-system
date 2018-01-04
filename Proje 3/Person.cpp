#include "Person.h"

Person::Person(string name, string surname, int id, personType p) :name(name), surname(surname), tcNo(id), PersonType(p) {}
Person::Person()
{
};
void Person::SetName(string namee) {
	name = namee;
}

string Person::GetName() {
	return name;
}

void Person::SetSurName(string surnamee) {
	this->surname = surnamee;
}

string Person::GetSurName() {
	return surname;
}

void Person::SetTc(int tc) {
	this->tcNo = tc;
}

int Person::GetTc() {
	return tcNo;
}
