//
// Created by Сергачев Андрей on 22.03.2018.
//

#ifndef LAB7_PRODUCTION_H
#define LAB7_PRODUCTION_H

#include <iostream>
using namespace std;


class Production {
public:
    virtual ~Production();

    virtual void startProduction(){}
    virtual void stopProduction(){}

};

Production::~Production() {

}


#endif //LAB7_PRODUCTION_H
