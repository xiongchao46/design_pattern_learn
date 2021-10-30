//
// Created by xc on 2021/10/30.
//

#ifndef DESIGN_PATTERN_OPERATION_FACTORY_H
#define DESIGN_PATTERN_OPERATION_FACTORY_H

#include "operation_base.h"
#include "add.h"
#include "sub.h"
#include "multiply.h"
#include "divide.h"

#include <iostream>
namespace Calculator{
// operation nemu(+ - x /)
enum class Operation{
    ADD = 1,
    SUB,
    MULTIPLY,
    DIVIDE
};
/**
 * OperationFactory is used to create all kinds of operation
 * for calculator such as "+" "-" "x" "/" ...
 */
class OperationFactory{
public:
    OperationFactory(){
        operation_ = nullptr;
    }
    ~OperationFactory(){
        delete operation_;
    }

    OperationBase* CreateOperator(Operation op){
       if(Operation::ADD == op) {
           return new OperationAdd;
       }
       if(Operation::SUB == op) {
           return new OperationSub;
       }
       if(Operation::MULTIPLY == op) {
           return new OperationMultiply;
       }
       if(Operation::DIVIDE == op) {
           return  new OperationDivide;
       }
        return nullptr;
    }

private:
    OperationBase* operation_;

};
}
#endif //DESIGN_PATTERN_OPERATION_FACTORY_H
