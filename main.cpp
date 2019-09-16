#include <iostream>
#include <unistd.h>
#include <fstream>
#include <climits>
#include "cpu.h"



using namespace std;

int main(int argc, char** argv)
{

    ifstream input;
    input.open(argv[1]);
    cout << input.good() << endl;

    int instruction;
    while(input >> instruction)
    {

        cout << instruction << endl;
        switch(instruction)
        {
            case 1:

        }

        input.ignore(UINT_MAX, '\n');

    }
}
