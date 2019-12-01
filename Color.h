#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

void set_color(int);
void reset_color(int);

void set_color(int i) {
cout << "\u001b[38;5;" << i << "m";
}
void reset_color() {
cout << "\u001b[0m";
}
#endif