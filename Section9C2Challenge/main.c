#include <stdio.h>

// Functieprototypes
void drawBoard(char board[]);
int checkForWin(char board[]);
int markBoard(char board[], int choice, char mark);

int main() {
    char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int player = 1;  // Player 1 begint
    int choice;
    char mark;
    int gameStatus = 0; // 0=door, 1=win, 2=draw

    do {
        drawBoard(board);
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d, enter a number (1-9) to place %c: ", player, mark);
        scanf("%d", &choice);

        if (!markBoard(board, choice, mark)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        gameStatus = checkForWin(board);
        if (gameStatus == 1) {
            drawBoard(board);
            printf("==> Player %d wins!\n", player);
            break;
        } else if (gameStatus == 2) {
            drawBoard(board);
            printf("==> Game draw!\n");
            break;
        }

        player++;
    } while (1);

    return 0;
}

// Tekent het bord
void drawBoard(char board[]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", board[7], board[8], board[9]);
}

// Zet een markering op het bord, returnt 1 als succesvol, 0 als invalid
int markBoard(char board[], int choice, char mark) {
    if (choice < 1 || choice > 9) return 0;          // buiten bereik
    if (board[choice] == 'X' || board[choice] == 'O') return 0; // al bezet
    board[choice] = mark;
    return 1;
}

// Checkt of er een winnaar is of gelijkspel
int checkForWin(char board[]) {
    // Win-condities checken
    int winLines[8][3] = {
        {1,2,3}, {4,5,6}, {7,8,9},  // rijen
        {1,4,7}, {2,5,8}, {3,6,9},  // kolommen
        {1,5,9}, {3,5,7}            // diagonalen
    };
    int i;

    for (i = 0; i < 8; i++) {
        int a = winLines[i][0], b = winLines[i][1], c = winLines[i][2];
        if (board[a] == board[b] && board[b] == board[c]) {
            return 1; // win
        }
    }

    // Check voor gelijkspel: als alle plekken bezet zijn, return 2
    for (i = 1; i <= 9; i++) {
        if (board[i] != 'X' && board[i] != 'O')
            return 0; // nog open plekken, geen win, geen draw
    }
    return 2; // gelijkspel
}
