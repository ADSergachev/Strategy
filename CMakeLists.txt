cmake_minimum_required(VERSION 3.9)
project(lab7)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab7 main.cpp People/People.h People/Millitary.h People/Scientists.h Production/ChemicalReactor.h Production/Production.h State/State.h State/Budget.h People/Workers.h State/Area.h)