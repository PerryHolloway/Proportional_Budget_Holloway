#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Budget.h"
#include "input_Validation.h"
#include "Color.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void showMenu();
void handleOption( string,  vector<Budget*>&, double&, double&, double&);
void showExpenseMenu( vector<Budget*>&);
void showPercentMenu(double&, double&);
void handleExpense( string,  vector<Budget*>&);
void handlePercent( string, double&, double&);
void printResults( vector<Budget*>, double, double, double);
void printToFile( vector<Budget*>, double, double, double);

void showMenu() {
   cout << "Menu:" <<  endl;
   cout << "Option A: Edit overall budget income" <<  endl;
   cout << "Option B: Edit expenses" <<  endl;
   cout << "Option C: Edit proportional percentages" <<  endl;
   cout << "Option E: Exit" <<  endl;
}

void handleOption( string userOption,  vector<Budget*>& vect, double& p1, double & p2, double& budgetIncome) {
  if (userOption == "A" || userOption == "a") {
     cout << "Please enter the overall budget income." <<  endl;
    budgetIncome = validateDouble(budgetIncome);
  }
  else if (userOption == "B" || userOption == "b") {
    showExpenseMenu(vect);
  }
  else if (userOption == "C" || userOption == "c") {
    showPercentMenu(p1, p2);
  }
  else if (userOption == "E" || userOption == "e") {
     cout << "Goodbye!" <<  endl;
  }
  else {
     cout << "Invalid option." <<  endl;
  }
}

void showExpenseMenu( vector<Budget*>& vect){
   string option;
   cout << "\n Expense Menu:" <<  endl;
   cout << "Option A: Edit Mortgage/Rent" <<  endl;
   cout << "Option B: Edit Electric Bills" <<  endl;
   cout << "Option C: Edit Gas Bills" <<  endl;
   cout << "Option D: Edit Water Bills" <<  endl;
   cout << "Option E: Edit Savings" <<  endl;
   cout << "Option F: Edit Entertainment Expenses" <<  endl;
   cout << "Option G: Edit Clothes Expenses" <<  endl;
   cout << "Option H: Edit Shoes Expenses" <<  endl;
   cout << "Option I: Edit Vending Machine Expenses" <<  endl;
   cout << "Option J: Edit Credit Card Payments" <<  endl;
   cout << "Option K: Edit Car Payments" <<  endl;
   cout << "Option L: Edit Car Insurance Expenses" <<  endl;
   cout << "Option M: Edit Car Maintenance Expenses" <<  endl;
   cout << "Option N: Edit Car Gas Expenses" <<  endl;
   cout << "Option O: Edit School Books Expenses" <<  endl;
   cout << "Option P: Edit Groceries Expenses" <<  endl;
   cout << "Option Q: Edit Dining Out Expenses" <<  endl;
   cout << "Option R: Edit Cleaning Supplies Expenses" <<  endl;
   cout << "Option S: Edit Personal Care Expenses" <<  endl;
   cout << "Option T: Edit Charity Expenses" <<  endl;
   cout << "Option U: Edit Day Care Expenses" <<  endl;
   cout << "Option V: Edit Pet Care Expenses" <<  endl;
   cout << "Option W: Edit Cell Phone Expenses" <<  endl;
   cout << "Option X: Edit Internet Expenses" <<  endl;
   cout << "Option Y: Edit Cable/Satellite Expenses" <<  endl;
   cout << "Option Z: Edit Streaming Services Expenses" <<  endl;
   cout << "Option AA: Edit Amazon Spendings" <<  endl;
   cout << "Option AB: Return" <<  endl;
   cout << "Please enter your option: ";
   cin >> option;
  handleExpense(option, vect);
}

void showPercentMenu(double& p1, double& p2) {
   string option;
   cout << "\nPercentage Menu:" <<  endl;
   cout << "Option A: Edit Person One's Percentage" <<  endl;
   cout << "Option B: Edit Person Two's Percentage" <<  endl;
   cout << "Option C: Return" <<  endl;
   cout << "Please enter your option: ";
   cin >> option;
  handlePercent(option, p1, p2);
}

void handleExpense( string userOption,  vector<Budget*>& vect) {
  double d;
  if (userOption == "A" || userOption == "a") {
     cout << "Please enter the mortgage/rent." <<  endl;
    d = validateDouble(d);
    vect[0]->setCost(d);
  }
  else if (userOption == "B" || userOption == "b") {
     cout << "Please enter the electric bills." <<  endl;
    d = validateDouble(d);
    vect[1]->setCost(d);
  }
  else if (userOption == "C" || userOption == "c") {
     cout << "Please enter the gas bills." <<  endl;
    d = validateDouble(d);
    vect[2]->setCost(d);
  }
  else if (userOption == "D" || userOption == "d") {
     cout << "Please enter the water bills." <<  endl;
    d = validateDouble(d);
    vect[3]->setCost(d);
  }
  else if (userOption == "E" || userOption == "e") {
     cout << "Please enter the savings." <<  endl;
    d = validateDouble(d);
    vect[4]->setCost(d);
  }
  else if (userOption == "F" || userOption == "f") {
     cout << "Please enter the entertainment expenses." <<  endl;
    d = validateDouble(d);
    vect[5]->setCost(d);
  }
  else if (userOption == "G" || userOption == "g") {
     cout << "Please enter the clothes expenses." <<  endl;
    d = validateDouble(d);
    vect[6]->setCost(d);
  }
  else if (userOption == "H" || userOption == "h") {
     cout << "Please enter the shoes expenses." <<  endl;
    d = validateDouble(d);
    vect[7]->setCost(d);
  }
  else if (userOption == "I" || userOption == "i") {
     cout << "Please enter the vending machine expenses." <<  endl;
    d = validateDouble(d);
    vect[8]->setCost(d);
  }
  else if (userOption == "J" || userOption == "j") {
     cout << "Please enter the credit card payments." <<  endl;
    d = validateDouble(d);
    vect[9]->setCost(d);
  }
  else if (userOption == "K" || userOption == "k") {
     cout << "Please enter the car payments." <<  endl;
    d = validateDouble(d);
    vect[10]->setCost(d);
  }
  else if (userOption == "L" || userOption == "l") {
     cout << "Please enter the car insurance expenses." <<  endl;
    d = validateDouble(d);
    vect[11]->setCost(d);
  }
  else if (userOption == "M" || userOption == "m") {
     cout << "Please enter the car maintenance expenses." <<  endl;
    d = validateDouble(d);
    vect[12]->setCost(d);
  }
  else if (userOption == "N" || userOption == "n") {
     cout << "Please enter the car gas expenses." <<  endl;
    d = validateDouble(d);
    vect[13]->setCost(d);
  }
  else if (userOption == "O" || userOption == "o") {
     cout << "Please enter the school books expenses." <<  endl;
    d = validateDouble(d);
    vect[14]->setCost(d);
  }
  else if (userOption == "P" || userOption == "p") {
     cout << "Please enter the groceries expenses." <<  endl;
    d = validateDouble(d);
    vect[15]->setCost(d);
  }
  else if (userOption == "Q" || userOption == "q") {
     cout << "Please enter the dining out expenses." <<  endl;
    d = validateDouble(d);
    vect[16]->setCost(d);
  }
  else if (userOption == "R" || userOption == "r") {
     cout << "Please enter the cleaning supplies expenses." <<  endl;
    d = validateDouble(d);
    vect[17]->setCost(d);
  }
  else if (userOption == "S" || userOption == "s") {
     cout << "Please enter the personal care expenses." <<  endl;
    d = validateDouble(d);
    vect[18]->setCost(d);
  }
  else if (userOption == "T" || userOption == "t") {
     cout << "Please enter the charity expenses." <<  endl;
    d = validateDouble(d);
    vect[19]->setCost(d);
  }
  else if (userOption == "U" || userOption == "u") {
     cout << "Please enter the day care expenses." <<  endl;
    d = validateDouble(d);
    vect[20]->setCost(d);
  }
  else if (userOption == "V" || userOption == "v") {
     cout << "Please enter the pet care expenses." <<  endl;
    d = validateDouble(d);
    vect[21]->setCost(d);
  }
  else if (userOption == "W" || userOption == "w") {
     cout << "Please enter the cell phone expenses." <<  endl;
    d = validateDouble(d);
    vect[22]->setCost(d);
  }
  else if (userOption == "X" || userOption == "x") {
     cout << "Please enter the internet expenses." <<  endl;
    d = validateDouble(d);
    vect[23]->setCost(d);
  }
  else if (userOption == "Y" || userOption == "y") {
     cout << "Please enter the cable/satellite expenses." <<  endl;
    d = validateDouble(d);
    vect[24]->setCost(d);
  }
  else if (userOption == "Z" || userOption == "z") {
     cout << "Please enter the streaming services expenses." <<  endl;
    d = validateDouble(d);
    vect[25]->setCost(d);
  }
  else if (userOption == "AA" || userOption == "aa") {
     cout << "Please enter the Amazon spendings." <<  endl;
    d = validateDouble(d);
    vect[26]->setCost(d);
  }
  else if (userOption == "AB" || userOption == "ab") {
    ;
  }
  else {
     cout << "Invalid option." <<  endl;
  }
}

void handlePercent( string userOption, double& p1, double& p2) {
  if (userOption == "A" || userOption == "a") {
     cout << "Please enter the proportional percentage of Person One." <<  endl;
    p1 = validateDouble(p1);
  }
  else if (userOption == "B" || userOption == "b") {
     cout << "Please enter the proportional percentage of Person Two." <<  endl;
    p2 = validateDouble(p2);
  }
  else if (userOption == "C" || userOption == "c") {
    ;
  }
  else {
     cout << "Invalid option." <<  endl;
  }
}

void printResults( vector<Budget*> vect, double income, double p1, double p2) {
  double totalExpenses = 0.0;
  double totalP1 = 0.0;
  double totalP2 = 0.0;
   cout << "Total Income: " << "$" <<  fixed <<  setprecision(2) << income <<  endl;
   cout << "Proportional Percentage P1: " << p1 << "%" <<  endl;
   cout << "Proportional Percentage P2: " << p2 << "%" <<  endl;
   cout <<  endl;
   cout <<  left <<  setw(20) << "Description" <<  setw(10) << "Expense" <<  setw(10) << "   P1" <<  setw(10) << "   P2" <<  endl;
   cout << "-------------------------------------------------------------------" <<  endl;
  for (Budget* b : vect) {
     cout <<  left <<  fixed <<  setprecision(2) <<  setw(20) << b->getDescription() << "$" <<  setw(10) << b->getCost() << "$" <<  setw(10) << b->getCost() * p1 / 100.00 << "$" <<  setw(10) << b->getCost() * p2 / 100.00 <<  endl;
    totalExpenses += b->getCost();
    totalP1 += b->getCost() * p1 / 100.00;
    totalP2 += b->getCost() * p2 / 100.00;
  }
   cout <<  setw(20) << "Total" << "$" <<  setw(10) <<  fixed <<  setprecision(2) << totalExpenses << "$" <<  setw(10) << totalP1 << "$" <<  setw(10) << totalP2 <<  endl;
   cout <<  endl;
   cout << "Remaining: $" << income - totalExpenses <<  endl;
   cout <<  endl; 
}

void printToFile( vector<Budget*> vect, double income, double p1, double p2) {
   ofstream file;
  double totalExpenses = 0.0;
  double totalP1 = 0.0;
  double totalP2 = 0.0;
  file.open("Budget.txt");
  file << "Total Income: $" <<  fixed <<  setprecision(2) << income <<  endl;
  file << "Proportional Percentage P1: " << p1 << "%" <<  endl;
  file << "Proportional Percentage P2: " << p2 << "%" <<  endl;
  file <<  endl;
  file <<  left <<  setw(20) << "Description" <<  setw(10) << "Expense" <<  setw(10) << "   P1" <<  setw(10) << "   P2" <<  endl;
  file << "---------------------------------------------------------" <<  endl;
  for (Budget* b : vect) {
    totalExpenses += b->getCost();
    totalP1 += b->getCost() * p1 / 100.00;
    totalP2 += b->getCost() * p2 / 100.00;
    file <<  left <<  fixed <<  setprecision(2) <<  setw(20) << b->getDescription() << "$" <<  setw(10) << b->getCost() << "$" <<  setw(10) << b->getCost() * p1 / 100.00 << "$" <<  setw(10) << b->getCost() * p2 / 100.00 <<  endl;
  }
  file <<  left <<  fixed <<  setprecision(2) <<  setw(20) << "Total" << "$" <<  setw(10) << totalExpenses << "$" <<  setw(10) << totalP1 << "$" <<  setw(10) << totalP2 <<  endl;
  file <<  endl;
  file << "Remaining: $" <<  fixed <<  setprecision(2) << income - totalExpenses <<  endl;
  file.close();
}
#endif