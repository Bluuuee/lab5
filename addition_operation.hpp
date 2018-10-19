//
// Created by Sonny Fung on 2018-10-18.
//
#include "abstract_operation.hpp"

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : public abstract_operation{
public:
    static const char ADDITION_CODE = '+';
    addition_operation(): abstract_operation(ADDITION_CODE){};
    virtual int perform(int a, int b) override {return a + b;};
    ~addition_operation() override = default;
};
#endif //LAB5_ADDITION_OPERATION_HPP
