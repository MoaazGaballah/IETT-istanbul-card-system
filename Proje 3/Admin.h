#ifndef ADMIN_H
#define	ADMIN_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
static Person pList[10];

class Admin : public Person {

private:
	int pListIndexSayac;
	int adminSayac;

public:
	Admin(string,string,int,personType);
	Admin();
	void CreateUser(string, string, int);
	void DeleteUser(int tcNo);
	void ShowPersonState(int tcNo);
	void ShowUserState();
	void FindUser();
	void CombineUserCards();

};

#endif


