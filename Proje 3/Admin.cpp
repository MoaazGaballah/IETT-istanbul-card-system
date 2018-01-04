#include  "Admin.h"
#include "Person.h"
Admin::Admin(string a, string s , int i , personType p):Person(a,s,i,admin){}

Admin::Admin()
{
}

void Admin::CreateUser(string name, string surname, int tcNo)
{
	Admin a;
	a.SetName(name);
	a.SetSurName(surname);
	a.SetTc(tcNo);

	for (int i = 0; i <sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == 0) {
			pList[i] = a;
			return;
		}
	}
	pList[index] = a;
	index++;

}
void Admin::DeleteUser(int tcNo)
{
	for (int i = 0; i < sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == tcNo) {
			pList[i].SetName("");
			pList[i].SetSurName("");
			pList[i].SetTc(0);
			return;
		}
	}
	cout << "öyle bir kullanıcı yok" << endl;
}
void Admin::ShowPersonState(int tcNo)
{
	for (int i = 0; i <sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == tcNo) {
			cout << "isim: " << pList[i].GetName() << endl;
			cout << "soyisim: " << pList[i].GetSurName() << endl;
			cout << "Tc: " << tcNo << endl;

			return;
		}
	}
	cout << "öyle bir kullanıcı yok" << endl;
}

void Admin::ShowUserState()
{

}

void Admin::FindUser()
{

}

void Admin::CombineUserCards()
{

}




