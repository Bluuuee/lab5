//
// Created by Sonny Fung on 2018-10-18.
//
#include "abstract_operation.hpp"

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : public abstract_operation{
public:
    static const char ADDITION_CODE = '+';
    addition_operation();
    virtual int perform(int a, int b) override;
    ~addition_operation() override = default;
};

addition_operation:: addition_operation() : abstract_operation(ADDITION_CODE){};
int addition_operation:: perform(int a, int b) {
    return a + b;
}
#endif //LAB5_ADDITION_OPERATION_HPP
