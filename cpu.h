//
// Created by briant on 9/15/19.
//

#ifndef PROJECT1OSCPP_CPU_H
#define PROJECT1OSCPP_CPU_H

class cpu{
private:
    int program_counter; // PC
    int stack_pointer; // SP
    int instruction_register; // IR
    int x_reg; // x register
    int y_reg; // y register
    int ac; // accumulator

    // maybe a var to hold a memory class

public:
    cpu();


};
#endif //PROJECT1OSCPP_CPU_H
