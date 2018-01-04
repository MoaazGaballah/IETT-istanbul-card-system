#ifndef CARD_H
#define	CARD_H
#include <iostream>
#include <string>


typedef enum cardType {
	Normal, Student, Retired
} cardType;

class Card {

private:
	int balance;
	cardType cardType;

public:
	void setCardType(char);
	void getCardType();
	int getBalance();




};


#endif	/* CARD_H */

