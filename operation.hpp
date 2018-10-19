//
// Created by Sonny Fung on 2018-10-18.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

class operation {
public:
    virtual char get_code() = 0;
    virtual int perform(int a, int b) = 0;
    virtual ~operation() = default;
};

#endif //LAB5_OPERATION_HPP
