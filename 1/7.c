#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7
/*
55 9
-0.1636

-22 4
0.1818 
*/ 
double bisection(double p, double q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main() 
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(double p, double q, double (*func)(int, int, double)) 
{
    double a, b, c;
    a = -20;
    b = 20;
    c = (a + b) / 2;
    while (fabs(f(p, q, c)) >= EPSILON) {
        if (f(p, q, a) * f(p, q, c) < 0) {
            b=c;
        }
        else {
            a=c;
        }
        c=(a + b) / 2.0;
    }
    return c;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
