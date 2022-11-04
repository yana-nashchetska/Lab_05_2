// Лабораторна робота № 5.2 

#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

double S(const double x, const double eps, int &n);
double A(const double x, const int n, double a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "----------------------------------------------------------" << endl;
    cout << "|" << setw(5) << "\tx" << "\t|"
        << setw(10) << "\tln x" << "\t|"
        << setw(7) << "\tS" << "\t|"
        << setw(5) << "n" << "\t|"
        << endl;
    cout << "----------------------------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        s = S(x, eps, n);
        double result = 2 * s;

        cout << "|" << setw(7) << setprecision(2) << x << "\t|"
            << setw(10) << setprecision(5) << log(x) << "\t|"
            << setw(10) << setprecision(5) << result << "\t|"
            << setw(5) << n << "\t|"
            << endl;
        x += dx;
    }
    cout << "----------------------------------------------------------" << endl;

    return 0;
}

double S(const double x, const double eps, int &n)
{
    n = 0; // вираз залежить від умови завдання варіанту 
    double a = (x - 1) / (1. * (x + 1)); // вираз залежить від умови завдання варіанту 
    double s = a;
    do {
        n++;
        a = A(x, n, a);
        s += a;

    } while (abs(a) >= eps);
    return s;
}
double A(const double x, const int n, double a)
{
    double R = (pow((x - 1), 2)) / (1. * (pow((x + 1), 2))) * (2. * n - 1) / (2. * n + 1); // вираз залежить від умови завдання варіанту 
    a *= R;
    return a;
}
