#include <iostream>
using namespace std; \*Game Development: write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.
*\
int main() {
int score1[5], score2[5];
int pass, comp, temp;
cout << "Enter the score for player 1:\n";
for (int i = 0; i < 5; i++) {
cin >> score1[i];
}
cout << "Enter the score for player 2:\n";
for (int i = 0; i < 5; i++) {
cin >> score2[i];
}
for (pass = 0; pass < 5; pass++) {
for (comp = 0; comp < 5 - pass - 1; comp++) {
if (score1[comp] < score1[comp + 1]) {
temp = score1[comp];
score1[comp] = score1[comp + 1];
score1[comp + 1] = temp;
}
}
}
cout<<"\n";
cout << "Player 1 scores sorted:\n";
for (int i = 0; i < 5; i++) {
cout << score1[i] << "\t";
}
cout << "\n";
for (pass = 0; pass < 5; pass++) {
for (comp = 0; comp < 5 - pass - 1; comp++) {
if (score2[comp] < score2[comp + 1]) {
temp = score2[comp];
score2[comp] = score2[comp + 1];
score2[comp + 1] = temp;
}
}
}
cout << "Player 2 scores sorted:\n";
for (int i = 0; i < 5; i++) {
cout << score2[i] << "\t";
}
cout << "\n";
cout<<"\n";
cout << "And the Winner is !!-->";
if (score1[0] > score2[0]) {
cout << "Player 1";
} else if (score1[0] < score2[0]) {
cout << "Player 2";
} else {
cout << "Draw";
}
return 0;
}
