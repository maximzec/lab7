//
// Created by User on 19.04.2019.
//

#ifndef LAB7_HUMAN_H
#define LAB7_HUMAN_H

#include <iostream>
using  namespace std;
class Human
{
protected:
    string surname;
    string name;
    string midname;
    int age;
public:
    Human();
    Human(string surname , string name , string midname , int age);
    ~Human();
    virtual void print() = 0 ;
};
#endif //LAB7_HUMAN_H
