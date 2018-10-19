//
// Created by Sonny Fung on 2018-10-18.
//
#include "abstract_operation.hpp"

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP
class division_operation : public abstract_operation{
public:
    static const char DIVISION_CODE = '/';
    division_operation();
    int perform (int a, int b) override;
    ~division_operation() override = default;
};

division_operation::division_operation() : abstract_operation(DIVISION_CODE){};
int division_operation:: perform(int a, int b) {
    return a / b;
}

#endif //LAB5_DIVISION_OPERATION_HPP
