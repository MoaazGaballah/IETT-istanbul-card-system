#include "Card.h"

void Card::setCardType(char cardType)
{
	cardType = cardType;

}

void Card::getCardType() {
	std::cout << cardType;
}

int Card::getBalance() {
	return balance;
}
