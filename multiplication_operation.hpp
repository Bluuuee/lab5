//
// Created by Sonny Fung on 2018-10-18.
//
#include "abstract_operation.hpp"

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP
class multiplication_operation : public abstract_operation{
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation();
    int perform(int a, int b) override;
    ~multiplication_operation() override = default;
};

multiplication_operation::multiplication_operation(): abstract_operation(MULTIPLICATION_CODE){};
int multiplication_operation:: perform(int a, int b) {
    return a * b;
}
#endif //LAB5_MULTIPLICATION_OPERATION_HPP
