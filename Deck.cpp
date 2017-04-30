//
//  Deck.cpp
//  YuGiOh
//
//  Created by Nick Loyd on 4/29/17.
//  Copyright © 2017 Nick Loyd. All rights reserved.
//

#include "Deck.hpp"
Deck::Deck(){

}

void Deck::shuffleDeck(){
    this->CardArray.std::random_shuffle(std::begin(this->CardArray), std::end(this->CardArray));
    //This takes the card array and shuffles it from the begining to the ending
}
