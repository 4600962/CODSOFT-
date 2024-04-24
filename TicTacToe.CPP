#include <iostream>
#include <vector>

// Function to print the Tic Tac Toe board
void print_board(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

// Function to check if there is a winner or a tie
bool check_winner(const std::vector<std::vector<char>>& board, char c) {
    // Check rows end columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == c && board[i][1] == c && board[i][2] == c) ||
            (board[0][i] == c && board[1][i] == c && board[2][i] == c)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == c && board[1][1] == c && board[2][2] == c) ||
        (board[0][2] == c && board[1][1] == c && board[2][0] == c)) {
        return true;
    }

    return false;
}

// Function to check if the board is full (tie)
bool is_full(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '-') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, '-'));
    int row, col;
    bool player1_turn = true;

    while (true) {
        print_board(board);
        std::cout << "Player " << (player1_turn ? "1" : "2") << ", enter your move (row and column): ";
        std::cin >> row >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '-') {
            board[row][col] = player1_turn ? 'X' : 'O';
            if (check_winner(board, player1_turn ? 'X' : 'O')) {
                std::cout << "Player " << (player1_turn ? "1" : "2") << " wins!" << std::endl;
                break;
            } else if (is_full(board)) {
                std::cout << "It's a tie!" << std::endl;
                break;
            }
            player1_turn = !player1_turn;
        } else {
            std::cout << "Invalid move. Try again." << std::endl;
        }
    }

    return 0;
}
