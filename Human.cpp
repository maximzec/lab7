//
// Created by User on 19.04.2019.
//

#include "Human.h"

Human::Human() {
    this->name = "";
    this->surname = "";
    this->midname = "";
    this->age = 0;
}

Human::Human(string surname, string name, string midname , int age) {
    this->name = name;
    this->surname = surname;
    this->midname = midname;
    this->age = age ;

}

Human::~Human() = default;