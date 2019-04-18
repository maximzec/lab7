//
// Created by User on 19.04.2019.
//

#ifndef LAB7_STUDENT_H
#define LAB7_STUDENT_H

#include "Human.h"

class Student : public Human
{
private:
    bool on_lesson;
public:
    Student();
    Student(string surname, string name, string midname , int age , bool on_lesson);
    void print() override;
    ~Student();
};
#endif //LAB7_STUDENT_H
