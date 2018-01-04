#ifndef PERSON_H
#define	PERSON_H
#include <iostream>
#include <string>
using namespace std;

typedef enum personType {
	user, admin
} personType;
static int index;
static int tc;
class Person {
private:

	string name;
	string surname;
	int tcNo;
	personType PersonType ;
public:
	Person(string, string, int,personType);
	Person();

	void SetName(string);

	string GetName();

	void SetSurName(string);

	string GetSurName();

	void SetTc(int);

	int GetTc();


};

#endif

