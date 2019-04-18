//
// Created by User on 19.04.2019.
//

#include "Boss.h"

Boss::Boss() : Human(){
    this->number_of_workers = 0 ;
}

Boss::Boss(string surname, string name, string midname, int age, int number_of_workers)
    :Human(surname , name , midname , age){
    this->number_of_workers = number_of_workers;
}

Boss::~Boss() = default;

void Boss::print() {
    std::cout << "Surname :" << this->surname << std::endl;
    std::cout << "Name :" << this->name << std::endl;
    std::cout << "Midname :" << this->midname << std::endl;
    std::cout << "Age :" << this->age << std::endl;
    std::cout << "Number of workers :" << this->number_of_workers << std::endl;
}