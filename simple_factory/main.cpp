//
// Created by xc on 2021/10/30.
//
#include <iostream>
#include "operation_factory.h"

using namespace Calculator;
int main(int argc, char**argv){
    std::cout << "calculator ..." << std::endl;
    double x = 1043.6, y = 12.45;
    Operation op = Operation ::ADD;
    OperationFactory factory;
    OperationBase* calculator;
    calculator = factory.CreateOperator(op);
    calculator->SetNumber(x, y);
    std::cout << x << " + " << y << " = " << calculator->GetResult() << std::endl;


}