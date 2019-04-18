//
// Created by User on 19.04.2019.
//

#ifndef LAB7_BOSS_H
#define LAB7_BOSS_H

#include "Human.h"

class Boss : public Human
{
private:
    int number_of_workers;
public:
    Boss();
    Boss(string surname , string name , string midname , int age , int number_of_workers);
    ~Boss();
    void print() override;
};
#endif //LAB7_BOSS_H
