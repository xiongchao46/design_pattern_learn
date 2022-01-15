//
// Created by xc on 2021/10/30.
//
#include <gtest/gtest.h>
#include "../operation_factory.h"

using namespace Calculator;
TEST(calculator_test, add)
{
   OperationFactory factory;
   OperationBase* cal =  factory.CreateOperator(Operation::ADD);
   cal->SetNumber(1, 2 );
   double res = cal->GetResult();
   EXPECT_DOUBLE_EQ(res, 1+2);
   cal->SetNumber(10.21, 36.55 );
   res = cal->GetResult();
   EXPECT_DOUBLE_EQ(res, 10.21+36.55);
   cal->SetNumber(-2.3, 1000.0 );
   res = cal->GetResult();
   EXPECT_DOUBLE_EQ(res, 1000.0-2.3);
}
TEST(calculator_test, sub)
{
    OperationFactory factory;
    OperationBase* cal =  factory.CreateOperator(Operation::SUB);
    cal->SetNumber(1, 2 );
    double res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 1-2);
    cal->SetNumber(10.21, 36.55 );
    res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 10.21-36.55);
    cal->SetNumber(-2.3, 1000.0 );
    res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, -2.3-1000.0);
}
TEST(calculator_test, multiply)
{
    OperationFactory factory;
    OperationBase* cal =  factory.CreateOperator(Operation::MULTIPLY);
    cal->SetNumber(1, 2 );
    double res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 1*2);
    cal->SetNumber(10.21, 36.55 );
    res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 10.21*36.55);
    cal->SetNumber(-2.3, 1000.0 );
    res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 1000.0 * (-2.3));
}

TEST(calculator_test, divide)
{
    OperationFactory factory;
    OperationBase* cal =  factory.CreateOperator(Operation::DIVIDE);
    cal->SetNumber(1.0, 2.0 );
    double res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 1.0 / 2.0);
    cal->SetNumber(10.21, 36.55 );
    res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, 10.21/36.55);
    cal->SetNumber(-2.3, 1000.0 );
    res = cal->GetResult();
    EXPECT_DOUBLE_EQ(res, (-2.3) / 1000.0);
}