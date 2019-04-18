//
// Created by User on 19.04.2019.
//

#include "Student.h"


Student::Student():Human(){
    this->on_lesson = false;
}

Student::~Student() = default;

Student::Student(string surname, string name, string midname, int age, bool on_lesson)
:Human(surname , name , midname , age){
    this->on_lesson = on_lesson;
}

void Student::print() {
    std::cout << "Surname :" << this->surname << std::endl;
    std::cout << "Name :" << this->name << std::endl;
    std::cout << "Midname :" << this->midname << std::endl;
    std::cout << "Age :" << this->age << std::endl;
    std::cout << "On Lesson :" << this->on_lesson << std::endl;

}