//
//  Monster.hpp
//  YuGiOh
//
//  Created by Nick Loyd on 4/29/17.
//  Copyright © 2017 Nick Loyd. All rights reserved.
//
#include "Card.hpp"
#ifndef Monster_hpp
#define Monster_hpp

class Monster: public Card{
private:
    int ATK;
    int DEF;
    
public:
    Monster();
    Monster(int ATK, int DEF);
    
    void setATK(int _ATK);
    void setDEF(int _DEF);
    
    int getATK();
    int getDEF();
};



#include <stdio.h>
#endif /* Monster_hpp */
