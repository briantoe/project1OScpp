//
// Created by osboxes on 9/16/19.
//

#include "memory.h"

memory::memory(std::string input) {
    std::ifstream infile;
    infile.open(input);
    int instruction;
    int index = 0;
    std::string line;
    while (!infile.eof()) {
        std::getline(infile, line);
        std::stringstream ss(line);

        if (line[0] == '.') {
            ss >> index;
            printf("%d\n", index);
        }
        else
        {
            ss >> instruction;
            printf("%d\n", instruction);
        }

    }

}

void memory::print() {



}

int memory::read(int address) {
    return program[address];
}

void memory::write(int address, int data) {
    program[address] = data;
}
