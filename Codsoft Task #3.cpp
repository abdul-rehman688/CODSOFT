#include <iostream>
using namespace std;
int main() {
    char board[3][3] = { {' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '} }; // Initialize empty board
    char currentPlayer = 'X';
    int turns = 0;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    // Game loop
    while (true) {
        // Display the board
        cout << "-------------" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "| ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " | ";
            }
            cout << endl << "-------------" << endl;
        }

        // Prompt the current player for their move
        cout << "Player " << currentPlayer << "'s turn. Enter row and column (1-3): ";
        int row, col;
        cin >> row >> col;

        // Adjust input to zero-based indexing
        row--;
        col--;

        // Check if the selected position is valid and empty
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            turns++;

            // Check for win
            if ((board[row][0] == currentPlayer && board[row][1] == currentPlayer && board[row][2] == currentPlayer) ||
                (board[0][col] == currentPlayer && board[1][col] == currentPlayer && board[2][col] == currentPlayer) ||
                (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
                (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
                // Display the winning board
                cout << "-------------" << endl;
                for (int i = 0; i < 3; ++i) {
                    cout << "| ";
                    for (int j = 0; j < 3; ++j) {
                        cout << board[i][j] << " | ";
                    }
                    cout << endl << "-------------" << endl;
                }
                cout << "Player " << currentPlayer << " wins!" << endl;
                break; // End the game
            }

            // Check for draw
            if (turns == 9) {
                // Display the final board
                cout << "-------------" << endl;
                for (int i = 0; i < 3; ++i) {
                    cout << "| ";
                    for (int j = 0; j < 3; ++j) {
                        cout << board[i][j] << " | ";
                    }
                    cout << endl << "-------------" << endl;
                }
                cout << "It's a draw!" << endl;
                break; // End the game
            }

            // Switch players
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } 
        else {
            cout << "Invalid move! Please try again." << endl;
        }
    }

    return 0;
}

