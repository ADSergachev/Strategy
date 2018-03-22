//
// Created by Сергачев Андрей on 22.03.2018.
//

#ifndef LAB7_PEOPLE_H
#define LAB7_PEOPLE_H

#include <iostream>

using namespace std;

class People {
protected:
    int population;
    string nation;
public:
    People(){
        population = 0;
    }

    People(int population, string nation){
        this->population = population;
        this->nation = nation;
    }

    void printPeople(){
        cout << "Национальность: " << nation
                         << "\nКоличество людей: " << population << "\n";

    }
};



#endif //LAB7_PEOPLE_H
