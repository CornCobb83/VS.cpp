#include <iostream>
#include <conio.h>  // For _getch() function on Windows

using namespace std;

const int width = 20;
const int height = 10;

int pacManX, pacManY;
int ghostX, ghostY;
int fruitX, fruitY;
bool gameOver;
int score;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

char board[height][width];

void Setup() {
    gameOver = false;
    dir = STOP;
    pacManX = width / 2;
    pacManY = height / 2;
    ghostX = 0;
    ghostY = 0;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;

    // Initialize the game board
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                board[i][j] = '#';
            else
                board[i][j] = ' ';
        }
    }

    board[pacManY][pacManX] = 'P';
    board[ghostY][ghostX] = 'G';
    board[fruitY][fruitX] = 'F';
}

void Draw() {
    system("cls");  // Clear the console
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void Logic() {
    int prevX = pacManX;
    int prevY = pacManY;

    switch (dir) {
        case LEFT:
            pacManX--;
            break;
        case RIGHT:
            pacManX++;
            break;
        case UP:
            pacManY--;
            break;
        case DOWN:
            pacManY++;
            break;
    }

    if (pacManX == fruitX && pacManY == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
    }

    board[prevY][prevX] = ' ';
    board[pacManY][pacManX] = 'P';
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        // Add ghost movement logic here
    }
    return 0;
}
