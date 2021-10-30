//
// Created by xc on 2021/10/30.
//

#ifndef DESIGN_PATTERN_MULTIPLY_H
#define DESIGN_PATTERN_MULTIPLY_H

#include "operation_base.h"
namespace Calculator{
    class OperationMultiply:public OperationBase{
        double GetResult(){
            return firstNum_ * secondNum_;
        }
    };
}
#endif //DESIGN_PATTERN_MULTIPLY_H
