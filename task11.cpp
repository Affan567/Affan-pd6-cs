#include <iostream>
#include <windows.h>
using namespace std;

// Function declarations
void gotoxy(int x, int y);
void printenemy1();  
void eraseenemy1(); 
void printenemy2();  
void eraseenemy2(); 
void printenemy3();  
void eraseenemy3(); 
void eraseplayer();
void printplayer();
void moveplayerleft();
void moveplayerright();
void moveenemy1();
void moveenemy2();
void moveenemy3();
void printmaze();
void printscore();
void placebonus();
void erasebonus();
bool checkcollision();
void updatebonusstatus();

// Variables for enemies' positions
int ex1 = 2, ey1 = 2; // Enemy 1 (Horizontal movement)
int ex2 = 4, ey2 = 2; // Enemy 2 (Vertical movement)
int ex3 = 2, ey3 = 6; // Enemy 3 (Diagonal movement)
int px = 20, py = 20; // Player position
int bonusx = 10, bonusy = 10; // Bonus pill position
int score = 0; // Player score

bool bonus_collected = false; // Track if the bonus pill is collected

int main() {
    system("cls"); // Clear the console screen
    printmaze();
    placebonus();
    printenemy1();
    printenemy2();
    printenemy3();
    printplayer();
    printscore();
    
    while (true) {
        if (GetAsyncKeyState(VK_LEFT)) {
            moveplayerleft();
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            moveplayerright();
        }
        moveenemy1(); // Move first enemy (horizontally)
        moveenemy2(); // Move second enemy (vertically)
        moveenemy3(); // Move third enemy (diagonally)
        updatebonusstatus(); // Check if player collects bonus pill
        Sleep(200); // Delay for smoother movement
    }
}

// Move the cursor to (x, y) coordinates in the console
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Erase the player from the screen
void eraseplayer() {
    gotoxy(px, py);
    cout << "                          ";
    gotoxy(px, py + 1);
    cout << "                          ";
    gotoxy(px, py + 2);
    cout << "                          ";
    gotoxy(px, py + 3);
    cout << "                          ";
    gotoxy(px, py + 4);
    cout << "                          ";
}

// Print the player on the screen
void printplayer() {
    gotoxy(px, py);
    cout << "         /\\              ";
    gotoxy(px, py + 1);
    cout << "       __/~~\\__          ";
    gotoxy(px, py + 2);
    cout << "     /  ||  ||   \\       ";
    gotoxy(px, py + 3);
    cout << "=====             ======= ";
    gotoxy(px, py + 4);
    cout << "         ||||             ";
}

// Move player to the left
void moveplayerleft() {
    eraseplayer();
    if (px > 1) { // Check bounds to avoid moving out of the maze
        px = px - 1;
    }
    printplayer(); 
}

// Move player to the right
void moveplayerright() {
    eraseplayer();
    if (px < 48) { // Check bounds to avoid moving out of the maze
        px = px + 1;
    }
    printplayer();
}

// Print the maze
void printmaze() {
    cout << "################################################"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "#                                              #"<<endl;
    cout << "################################################"<<endl;
}

// Move enemy 1 (Horizontal movement)
void moveenemy1() {
    eraseenemy1();
    ex1 += 1;  
    if (ex1 >= 48) { // Boundaries of the maze
        ex1 = 2;  
    }
    printenemy1();
}

// Move enemy 2 (Vertical movement)
void moveenemy2() {
    eraseenemy2();
    ey2 += 1;
    if (ey2 >= 24) { // Boundaries of the maze
        ey2 = 2;  
    }
    printenemy2();
}


void moveenemy3() {
    eraseenemy3();
    ex3 += 1;
    ey3 += 1;
    if (ex3 >= 48 || ey3 >= 24) { 
        ex3 = 2;
        ey3 = 6;
    }
    printenemy3();
}


void printenemy1() {
    gotoxy(ex1, ey1);
    cout << "  |  ";
    gotoxy(ex1, ey1 + 1);
    cout << " / \\ ";
    gotoxy(ex1, ey1 + 2);
    cout << "|___|";  
}


void eraseenemy1() {
    gotoxy(ex1, ey1);
    cout << "     ";
    gotoxy(ex1, ey1 + 1);
    cout << "     ";
    gotoxy(ex1, ey1 + 2);
    cout << "     ";
}


void printenemy2() {
    gotoxy(ex2, ey2);
    cout << "  |  ";
    gotoxy(ex2, ey2 + 1);
    cout << " / \\ ";
    gotoxy(ex2, ey2 + 2);
    cout << "|___|";  
}


void eraseenemy2() {
    gotoxy(ex2, ey2);
    cout << "     ";
    gotoxy(ex2, ey2 + 1);
    cout << "     ";
    gotoxy(ex2, ey2 + 2);
    cout << "     ";
}


void printenemy3() {
    gotoxy(ex3, ey3);
    cout << "  |  ";
    gotoxy(ex3, ey3 + 1);
    cout << " / \\ ";
    gotoxy(ex3, ey3 + 2);
    cout << "|___|";  
}


void eraseenemy3() {
    gotoxy(ex3, ey3);
    cout << "     ";
    gotoxy(ex3, ey3 + 1);
    cout << "     ";
    gotoxy(ex3, ey3 + 2);
    cout << "     ";
}


void placebonus() {
    gotoxy(bonusx, bonusy);
    cout << "  O  "; 
}


void erasebonus() {
    gotoxy(bonusx, bonusy);
    cout << "     ";
}

// Print the score
void printscore() {
    gotoxy(0, 0); 
    cout << "Score: " << score;
}


bool checkcollision() {
    return px == bonusx && py == bonusy;
}


void updatebonusstatus() {
    if (!bonus_collected && checkcollision()) {
        erasebonus();
        bonus_collected = true;
        score += 1;
        printscore();
    }
}
