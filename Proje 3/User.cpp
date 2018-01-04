#include "User.h"
#include "Person.h"
#include "Card.h"
#include "Admin.h"
void User::loadBalance(int balance) {
	Card *c = new Card();
	for (int i = 0; i<sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == tc) {
			//((Card *)(pList[i]))->
			return;
		}

	}
	cout << "öyle bir kullanýcý yok" << endl;

}

void User::readCard(Card c) {
	for (int i = 0; i<sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == tc) {
			//cout << ((Card *)(pList[i]))<< endl;
			return;
		}

	}

	cout << "öyle bir kullanýcý yok" << endl;

}

void User::showCardState(Card c) {
	for (int i = 0; i<sizeof(pList) / sizeof(pList[0]); i++) {
		if (pList[i].GetTc() == tc) {
		//	cout << ((Card *)(pList[i]))->getCardType()<< endl;
			return;
		}

	}
	cout << "öyle bir kullanýcý yok" << endl;

}
