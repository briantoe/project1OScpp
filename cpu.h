//
// Created by briant on 9/15/19.
//

#ifndef PROJECT1OSCPP_CPU_H
#define PROJECT1OSCPP_CPU_H

#include <string>
#include <fstream>

class cpu{
private:
    int program_counter; // PC
    int stack_pointer; // SP
    int instruction_register; // IR
    int x_reg; // x register
    int y_reg; // y register
    int ac; // accumulator

    // maybe a var to hold a memory class

    int instruction;
    std::istream *input;
public:
    cpu(std::string input_file);
    void run();


    void fetch(); // grabs next instruction
    void execute(); // runs next instruction loaded

    void load_value(); // load value into the ac (accumulator)
    void load_addr(); // load address of
    void loadInd_addr();


};
#endif //PROJECT1OSCPP_CPU_H
