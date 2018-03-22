//
// Created by Сергачев Андрей on 22.03.2018.
//

#ifndef LAB7_PRODUCTION_H
#define LAB7_PRODUCTION_H

#include <iostream>
#include "../State/Budget.h"

using namespace std;


class Production : public Budget{
public:
    virtual ~Production();

    virtual void startProduction(){}
    virtual void stopProduction(){}

};

Production::~Production() = default;


#endif //LAB7_PRODUCTION_H
