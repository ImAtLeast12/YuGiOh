//
//  Monster.cpp
//  YuGiOh
//
//  Created by Nick Loyd on 4/29/17.
//  Copyright © 2017 Nick Loyd. All rights reserved.
//
#include "Card.hpp"
#include "Monster.hpp"
Monster::Monster(){
    
}
Monster::Monster(int _ATK, int _DEF){
    setATK(_ATK);
    setDEF(_DEF);
}

void Monster::setATK(int _ATK){
    this->ATK = _ATK;
}

void Monster::setDEF(int _DEF){
    this->DEF = _DEF;
}

int Monster::getATK(){
    return this->ATK;
}

int Monster::getDEF(){
    return this->DEF;
}
