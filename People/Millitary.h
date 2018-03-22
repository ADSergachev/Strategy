//
// Created by Сергачев Андрей on 22.03.2018.
//

#ifndef LAB7_MILLITARY_H
#define LAB7_MILLITARY_H

#include <iostream>
#include "People.h"

using namespace std;

class Millitary : public People{
private:
    double prosents;
public:
    explicit Millitary(double prosents){
        this->prosents = prosents;
    }


};


#endif //LAB7_MILLITARY_H
