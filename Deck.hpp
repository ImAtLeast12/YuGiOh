//
//  Deck.hpp
//  YuGiOh
//
//  Created by Nick Loyd on 4/29/17.
//  Copyright © 2017 Nick Loyd. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp
#include "Card.hpp"

class Deck{
private:
    int array;
    std::array<Card,30>CardArray;
    
public:
    Deck();
    void shuffleDeck();//this will shuffle all of the cards in the deck
    void printDeck();
    void addCardToDeck();
};


#include <stdio.h>

#endif /* Deck_hpp */
