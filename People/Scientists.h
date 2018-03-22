//
// Created by Сергачев Андрей on 22.03.2018.
//

#ifndef LAB7_SCIENTISTS_H
#define LAB7_SCIENTISTS_H


#include "People.h"

class Scientists : public People{
private:
    double prosents;
public:
    explicit Scientists(double prosents){
        this->prosents = prosents;
    }
};


#endif //LAB7_SCIENTISTS_H
