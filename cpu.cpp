//
// Created by briant on 9/15/19.
//

#include "cpu.h"

cpu::cpu(std::string input_file) {

}



void cpu::fetch() {

}

void cpu::execute() {

}

void cpu::load_value() {

}

void cpu::load_addr() {

}

void cpu::loadInd_addr() {

}

void cpu::run() {

    while(!input->eof())
    {
        this->fetch();
        this->execute();
    }
}

