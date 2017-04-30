//
//  Card.hpp
//  YuGiOh
//
//  Created by Nick Loyd on 4/25/17.
//  Copyright © 2017 Nick Loyd. All rights reserved.
//

#include <string>
#ifndef Card_hpp
#define Card_hpp

class Card{
private:
    std::string Name;
    std::string Description;
    int location;           //This will describe if they are in the Monsterzone to the deck to the hand.
    int previousLocation;           //This will let me know if an effect is trigerable baised on the location and previous locations
    
public:
    Card();
    Card(std::string _Name, std::string _Description);
    void setName(std::string _Name);
    void setDescription(std::string _Description);
    std::string getName();
    std::string getDescription();
};

#include <stdio.h>

#endif /* Card_hpp */
