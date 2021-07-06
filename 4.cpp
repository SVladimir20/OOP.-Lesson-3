#include <iostream>
using namespace std;
class Card
{
public:
	void setCard_position(bool card_p)
	{
		card_position = card_p;
	}
	bool getCard_position() const
	{
		return card_position;
	}
	bool Flip(bool card_p)
	{
		if (card_p == false)
		{
			card_p = true;
		}
		return card_p;
	}
	int GetValue()
	{
		Card_value card_value = Card_value::Ace;
		return (int)card_value;
	}

private:
	enum class Suit
	{
		Spades,
		Hearts,
		Diamonds,
		Clubs
	};
	enum class Card_value
	{
		One = 1,
		Two,
		Tree,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack = 10,
		Queen = 10,
		King = 10,
		Ace = 1
	};
	bool card_position;
};