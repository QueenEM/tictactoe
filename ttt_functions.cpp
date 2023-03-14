#include <iostream>
#include <vector>

// display status function
void display_status(std::vector<char> board) {

    // vector to store data input
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";
 

}

//enter input function
std::vector<char> enter_input(int pchoice, char ptype, std::vector<char> board) {
    std::cout << "Select where you want to go\n";
    std::cout << " _________________________________________________________\n";
    std::cout << "|                                                         |\n";
    std::cout << "| Top Left = 0      | Top Middle = 1     | Top Right = 2  |\n";
    std::cout << "| Left = 3          | Middle = 4         | Right = 5      |\n";
    std::cout << "| Bottom Right = 6  | Bottom Middle = 7  | Bottom Right 8 |\n";
    std::cout << "|_________________________________________________________|\n";
    std::cout << "Enter your choice: ";
    std::cin >> pchoice;
    std::cout << "\n Enter x or o : ";
    std::cin >> ptype;
    board[pchoice] = ptype;
    return board;
}

bool check_winner(std::vector<char> board) {
    // Define the winning spots
    std::vector<std::vector<int>> winner = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };
    
    // Check if any of the winning spots contain the same non-empty value
    for (auto& spots : winner) {
        if (board[spots[0]] != ' ' && board[spots[0]] == board[spots[1]] && board[spots[1]] == board[spots[2]]) {
            std::cout << "Congratulations! Player " << board[spots[0]] << " has won the game!\n";
            exit(0);
        }
    }
    return false;
}
