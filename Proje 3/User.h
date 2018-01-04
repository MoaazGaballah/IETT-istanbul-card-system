#ifndef USER_H
#define	USER_H
#include "Person.h"
#include "Card.h"
using namespace std;

class User : public Person {
private:
	Card userCard1;
	Card userCard2;
	Card userCard;
	User *u;

	Card c;
public:

	void loadBalance();
	void loadBalance(int balance);
	void readCard(Card c);
	void showCardState(Card c);

};

#endif	/* USER_H */

