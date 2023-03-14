#define TTT_FUNCTIONS_H
#include <vector>



void display_status(std::vector<char> board);
std::vector<char> enter_input(int pchoice, char ptype, std::vector<char> board);
bool check_winner(std::vector<char> board);