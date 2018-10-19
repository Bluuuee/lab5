//
// Created by Sonny Fung on 2018-10-18.
//
#include "abstract_operation.hpp"

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
class subtraction_operation : public abstract_operation {
public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation();
    int perform(int a, int b) override;
    ~subtraction_operation() override = default;
};

subtraction_operation::subtraction_operation() : abstract_operation(SUBTRACTION_CODE){};
int subtraction_operation:: perform(int a, int b) {
    return a - b;
};
#endif //LAB5_SUBTRACTION_OPERATION_HPP
