//
// Created by xc on 2021/10/30.
//

#ifndef DESIGN_PATTERN_SUB_H
#define DESIGN_PATTERN_SUB_H

#include "operation_base.h"

namespace Calculator{
class OperationSub:public OperationBase{
    double GetResult() {
        return firstNum_ - secondNum_;
    }
};
}
#endif //DESIGN_PATTERN_SUB_H
