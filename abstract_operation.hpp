//
// Created by Sonny Fung on 2018-10-18.
//
#include "operation.hpp"

#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP
class abstract_operation  : public operation {
private:
    char operation_type;
public:
    explicit abstract_operation(char operation_type) : operation_type(operation_type) {};
    virtual char get_code() override {return operation_type;};
    virtual ~abstract_operation() = default;
};
#endif //LAB5_ABSTRACT_OPERATION_HPP
