#ifndef BUDGET_H
#define BUDGET_H
#include <string>
using namespace std;

class Budget {
  private:
    double cost;
    string description;
  public:
    Budget(double c, std::string d) {
      cost = c;
      description = d;
    }
    double getCost() const {
      return cost;
    }
    string getDescription() const {
      return description;
    }
    void setCost(double c) {
      cost = c;
    } 
    void setDescription(std::string d) {
      description = d;
    }
};
#endif