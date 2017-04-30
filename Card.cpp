//
//  Card.cpp
//  YuGiOh
//
//  Created by Nick Loyd on 4/25/17.
//  Copyright © 2017 Nick Loyd. All rights reserved.
//

Card::Card(){
}

Card::Card(std::string _Name, std::string _Description){
    setName(_Name);
    setDescription(_Description);
}

void Card::setName(std::string _Name){
    this->Name = _Name;
}

void Card::setDescription(std::string _Description){
    this->Description = _Description;
}

std::string Card::getName(){
    return this->Name;
}
std::string Card::getDescription(){
    return this->Description;
}

