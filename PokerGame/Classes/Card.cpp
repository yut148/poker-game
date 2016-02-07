//
//  Card.cpp
//  PokerGame
//

#include "Card.hpp"

// create関数
Card* Card::create(Suit suit, int number)
{
    Card* p = new Card();
    if (p && p->init(suit, number)) p->autorelease();
    else CC_SAFE_DELETE(p);
    
    return p;
}

// コンストラクタ
Card::Card()
{}

// デストラクタ
Card::~Card()
{}

// 初期化
bool Card::init(Suit suit, int number)
{
    this->suit = suit;
    this->number = number;
    
    return true;
}

// マークを取得
Suit Card::getSuit() const
{
    return this->suit;
}

// 数字を取得
int Card::getNumber() const
{
    return this->number;
}
