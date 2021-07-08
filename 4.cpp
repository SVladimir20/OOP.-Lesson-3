#include <iostream>
using namespace std;
class Card
{
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
	bool card_position{};

public:
	Card(bool card_p, Suit Field_suit, Card_value Field_card_value) : card_position(card_p) {}
	void setCard_position(bool card_p)
	{
		card_position = card_p;
	}
	bool getCard_position() const
	{
		return card_position;
	}
	bool Flip()
	{
		if (card_position == false)
		{
			card_position = true;
		}
		return card_position;
	}
	int GetValue() const
	{
		Card_value card_value = Card_value::Ace;
		return (int)card_value;
	}
};