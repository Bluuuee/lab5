//
// Created by Sonny Fung on 2018-10-18.
//
#include "abstract_operation.hpp"

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP
class multiplication_operation : public abstract_operation{
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation():abstract_operation(MULTIPLICATION_CODE){};
    int perform(int a, int b) override {return a * b;};
    ~multiplication_operation() override = default;
};
#endif //LAB5_MULTIPLICATION_OPERATION_HPP
