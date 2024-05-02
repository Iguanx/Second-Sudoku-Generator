#include "Puzzle.h"
#include <iostream>
using namespace std;

int main(){
    Puzzle main;
    for(int i = 0; i < 5; i ++){
        main.insertRandom();
    }
    main.PrintPuzzle();
}


// g++ -c main.cpp
// g++ -o main.exe main.o
// ./main.exe