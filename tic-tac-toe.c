#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char PLAYER = 'X';
const char COMPUTER = 'O';
char winner;
int turns = 9;
char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}};

char checkWinner();
void printBoard();
void printIntro();
void printWinner();
void computerMove();
int playerMove();

int main()
{
    printIntro();

    while (turns)
    {
        printBoard(board);
        if (!playerMove())
        {
            continue;
        }

        winner = checkWinner();
        if (winner != ' ' || !turns)
        {
            break;
        }
        computerMove();

        winner = checkWinner();

        if (winner != ' ' || !turns)
        {
            break;
        }
    }

    printBoard();
    printWinner();

    return 0;
}

void printBoard()
{
    printf("\t     1   2   3\n");
    printf("\t  -|---|---|---|-\n");
    printf("\t1  | %c | %c | %c | \n", board[0][0], board[0][1], board[0][2]);
    printf("\t  -|---|---|---|-\n");
    printf("\t2  | %c | %c | %c | \n", board[1][0], board[1][1], board[1][2]);
    printf("\t  -|---|---|---|-\n");
    printf("\t3  | %c | %c | %c | \n", board[2][0], board[2][1], board[2][2]);
    printf("\t  -|---|---|---|-\n\n");
};

void printWinner()
{
    switch (winner)
    {
    case 'X':
        printf("\n> yahoo, you win !");
        break;

    case 'O':
        printf("\n> Sorry, you lose !");
        break;

    default:
        printf("> Draw!");
        break;
    }
}

void printIntro()
{
    printf("\n--( Welcome to Tic tac toe Game )-- \n\n");
}

char checkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    // check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

    return ' ';
}

int playerMove()
{
    int row;
    int col;

    printf("Enter row (1 - 3): ");
    scanf("%d", &row);
    printf("Enter column (1 - 3): ");
    scanf("%d", &col);
    printf("\n\n\n");

    row = (row - 1) % 3;
    col = (col - 1) % 3;

    if (board[row][col] == ' ')
    {
        board[row][col] = PLAYER;
        turns--;
        return 1;
    }
    else
    {
        printf("\n! << Entered Field is not empty, try again >>\n");
        return 0;
    }
}

void computerMove()
{
    srand(time(0));
    int row;
    int col;

    do
    {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] != ' ');

    board[row][col] = COMPUTER;

    turns--;
}