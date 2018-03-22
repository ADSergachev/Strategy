//
// Created by Сергачев Андрей on 22.03.2018.
//

#ifndef LAB7_CHEMICALREACTOR_H
#define LAB7_CHEMICALREACTOR_H

#include <iostream>
#include "Production.h"
using namespace std;

class ChemicalReactor : public Production{
public:
    int kolvo;
    explicit ChemicalReactor(int kolvo){
        this->kolvo = kolvo;
    };

    bool isProduction{};

    void startProduction(){
        isProduction = true;
        cout << "Производство запущено\n";
    }

    void stopProduction(){
        isProduction = false;
        cout << "Производство остановлено\n";
    }
};


#endif //LAB7_CHEMICALREACTOR_H
