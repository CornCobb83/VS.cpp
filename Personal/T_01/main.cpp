#include <iostream>
#include <curses.h>
#include <cstdlib>
#include <ctime>

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
    clear();  // Clear the screen
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            mvaddch(i, j, board[i][j]);
        }
    }
    mvprintw(height + 1, 0, "Score: %d", score);
    refresh();
}

void Input() {
    int ch = getch();
    switch (ch) {
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
    srand(time(NULL));  // Seed the random number generator
    initscr();          // Initialize curses
    noecho();           // Don't echo user input
    cbreak();           // Line buffering disabled
    keypad(stdscr, TRUE); // Enable keypad input
    nodelay(stdscr, TRUE); // Non-blocking input

    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        // Add ghost movement logic here
    }

    getch(); // Wait for a key press before exiting
    endwin(); // Clean up curses
    return 0;
}

