#include <iostream>
#include "Expert.h"
#include "CSVParser.h"

using namespace std;

int main()
{
    float beta = 0.5;
    float lambda = 0.5;

    std::ifstream       file("resources/criterial.csv");

    CSVRow              row;
    while(file >> row)
    {
        for(size_t i=0; i < sizeof(row) / sizeof(row[0]); i++){
            std::cout << row[i] << endl;
        }
    }

    return 0;
}