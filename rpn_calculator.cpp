//
// Created by Sonny Fung on 2018-10-19.
//
#include "rpn_calculator.hpp"
#include <sstream>

operation* rpn_calculator::operation_type(int operation) {
    switch (operation) {
        case addition_operation::ADDITION_CODE :
            return new addition_operation();
        case subtraction_operation::SUBTRACTION_CODE :
            return new subtraction_operation();
        case multiplication_operation::MULTIPLICATION_CODE :
            return new multiplication_operation();
        case division_operation::DIVISION_CODE :
            return new division_operation();
        default:
            return nullptr;
    }
};

void rpn_calculator::perform(operation *op) {
    int b = stack.top();
    stack.pop();
    int a = stack.top();
    stack.pop();
    int result = op->perform(a,b);
    stack.push(result);
};

int rpn_calculator::process_form(std::string formula) {
    std::istringstream iss(formula);
    std::string operand;
    while(iss >> operand) {
        std::istringstream iss2(operand);
        int val;
        if(iss2 >> val) {
            stack.push(val);
        } else {
            perform(operation_type(operand[0]));
        }
    }
    stack.top();

};