#include <iostream>
#include <vector>
#include "ttt_functions.h"

int main(){

    // vector to store data input
    std::vector<char> board(9, ' ');

    //this stores where abouts the player wants to go
    int pchoice;

    //this stores what symbol the player enters
    char ptype;

    // display board status
    display_status(board);

    //repeats the function 9 times
    for (int i = 0; i < 9; i++) {

        //player input
        board = enter_input(pchoice, ptype, board);

        //display board status
        display_status(board);

        //checks if there is a winner
        check_winner(board);       
    }
    std::cout << "It's a draw! play again :)\n";



}
