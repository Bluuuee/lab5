//
// Created by Sonny Fung on 2018-10-18.
//
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include <stack>
#include <iostream>

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

class rpn_calculator {
private:
    int result;
    std::stack<int> stack;
    operation* operation_type(int operation);
    void perform(operation* op);
    int process_form(std::string formula);
};
#endif //LAB5_RPN_CALCULATOR_HPP
