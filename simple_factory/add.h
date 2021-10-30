//
// Created by xc on 2021/10/30.
//
#ifndef DESIGN_PATTERN_LEARN_ADD_H
#define DESIGN_PATTERN_LEARN_ADD_H

#include "operation_base.h"
namespace Calculator{
class OperationAdd:public OperationBase{
public:
    double GetResult(){
        return firstNum_ + secondNum_;
    }

};
}
#endif //DESIGN_PATTERN_LEARN_ADD_H
