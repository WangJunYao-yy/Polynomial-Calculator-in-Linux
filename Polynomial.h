#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Polynomial{
private:
    

public:
    vector <double> factor;
    Polynomial();
    Polynomial(double a0);
    string name;
    void input();
    void output();
    Polynomial plus(Polynomial operand1, Polynomial operand2);
    Polynomial derivate(Polynomial operand);
    Polynomial multiplicate(Polynomial operand1, Polynomial operand2);
    Polynomial inverse();
    double integral(double lower_limit, double upper_limit);
    double root(Polynomial operand);
    double value(double x);
};
