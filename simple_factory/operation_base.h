//
// Created by xc on 2021/10/30.
//

#ifndef DESIGN_PATTERN_LEARN_OPERATION_BASE_H
#define DESIGN_PATTERN_LEARN_OPERATION_BASE_H
namespace Calculator{
class OperationBase{
public:
    OperationBase() = default;
    ~OperationBase() = default;
    virtual double GetResult() = 0;
    void SetNumber(const double& a, const double& b) {
        firstNum_ = a;
        secondNum_ = b;
    }

protected:
    double firstNum_{0};
    double secondNum_{0};
};
}

#endif //DESIGN_PATTERN_LEARN_OPERATION_BASE_H
