#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <random>
using namespace std;

enum{
    boardSize = 9,
};


class Puzzle{
    private:
        int board[boardSize * boardSize]; //Choosing to use 1d array to store , should increase efficiency a little
        /*
        I've gone over more efficiency/memory stuff since I wrote this before
        and I think that going for a 1d array, although losing some readability,
        should perform better than a 2d array overall.
        */
    public:
        Puzzle(){
            srand(time(NULL));
            for(int i = 0; i < boardSize; i++){
                for(int j = 0; j < boardSize; j++){
                    board[i*9 + j] = 0;
                }
            }
        }
        void PrintPuzzle(){
            cout << "--------+-------+--------" << endl;
            for(int i = 0; i < boardSize; i++){
                for(int j = 0; j < boardSize; j++){
                    if(j % 3 == 0){
                        cout << "| ";
                    }
                    cout << board[i*9 + j] << " ";
                }
                cout << "|" << endl;
            
                if(i % 3 == 2){
                    cout << "--------+-------+--------" << endl;
                }
            }
        }

        bool checkRow();
        bool checkCol();
        bool checkBox();
        bool checkAll();

        void insertRandom(){
            int row = rand() % 9; //0 - 8
            int col = rand() % 9;

            int numToInsert = rand() % 9 + 1;

            board[row * 9 + col] = numToInsert;

            
        }



        
        
};



#endif