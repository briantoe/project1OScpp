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
        }
        else
        {
            ss >> instruction;

        }


    }
}
