
// Lab 4.7.cpp
// <Хмиз Магдалини>
// Лабораторна робота № 4.7
// “Обчислення суми ряду Тейлора за допомогою ітераційнихциклів та рекурентних співвідношень”
// Варіант 21
 
#include <iostream>
#include <iomanip>
#include <cmath>
 
 
using namespace std;
 
 
int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;
 
 
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
 
 
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "log((x + 1 * 1.) / (x - 1))" << " |"
        << setw(5) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;
 
 
    x = xp;
    while (x <= xk)
    {
        n = 0;
        a = 2 * (1. / x);
        S = a;
        do {
            n++;
            R = 2 * ((2 * n - 1 * 1.) / ((x * x) * (2 * n + 1)));
            a *= R;
            S += a;
        } while (abs(a) >= eps);
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(2) << log((x + 1 * 1.) / (x - 1)) << " |"
            << setw(10) << setprecision(2) << S << " |"
            << setw(10) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}
