// main.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Admin.h"
#include "User.h"
#include "Card.h"
#include "Person.h"
using namespace std;
void isAdmin();
void hazirKullanicilar();
Person P[10];
int main(void) {    
	do
	{
		cout << "IETT" << endl;
		cout << "1-Yönetici iþlemleri" << endl;
		cout << "2-Kullanýcý iþlemleri" << endl;
		cout << "3-çýkýþ" << endl;
		int secenek;
		cin >> secenek;
		if (secenek==1)
		{
			isAdmin();
		}
		else if (secenek==2)
		{

		}
		else if(secenek==3)
		{
			break;
		}
		else
		{
			cout << "lUTFEN 1 2 3 GIRNIZ AMK " << endl;
		}



	} while (true);
	system("pause");
	return 0;
}

void isAdmin(){
	
	cout << "TC numaranýzý girin: " << endl;
	cin >> tc;
	for (int i = 0; i < sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == tc)
		{
			cout << "IETT>yönetici giriþ" << endl;
			cout << "1-Kullanýcý oluþtur" << endl;
			cout << "2-Kullanýcý sil" << endl;
			cout << "3-kiþi durumunu göster" << endl;
			cout << "4-Kullanýcý bul" << endl;
			cout << "5-Kullanýcý kartlarýný birleþtir" << endl;
			cout << "6-isim soyisim deðiþtir" << endl;
			cout << "7-ana menü" << endl;
			int secenek;
			cin >> secenek;
			if (secenek == 1) {
				Admin a;
				string isim, soyisim;
				int tcNo;
				cout << "isimi girin" << endl;
				cin >> isim;

				cout << "soyismi girin" << endl;
				cin >> soyisim;
				cout << "TC girin" << endl;
				cin >> tcNo;

				a.CreateUser(isim, soyisim, tcNo);
				pList[index] = a;

			}
			else if (secenek == 2) {

				Admin a;
				int tcNo;
				cout << "TC girin" << endl;
				cin >> tcNo;
				a.DeleteUser(tcNo);

			}
			else if (secenek == 3) {
				Admin a;
				int tcNo;
				cout << "TC girin" << endl;
				cin >> tcNo;
				a.ShowPersonState(tcNo);
			}
			else if (secenek == 4) {
			}
			else {
				cout << "Lütfen (1-3) arasýnda bir sayý giriniz" << endl;
			}
		}
		else
		{
			cout << "YANLIZ TC GIRNIZ " << endl;
		}
	}
}
void hazirKullanicilar()
{
	Admin *A = new Admin("Hakki","Hakli",1234,admin);
	pList[index] = *A;
	index++;
	A->CreateUser("Selin","sakli",4321);
	User u;

}
