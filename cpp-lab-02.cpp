#include <iostream>
#include <cmath>
using namespace std;

long long DoubleFactorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }

    return x * DoubleFactorial(x - 2);
}

double t(double x)
{
double sum1, sum2;

for (int k = 0; k <= 10; k++)
{
  sum1 += (pow(x,2*k+1))/(DoubleFactorial(2*k+1));
}

for (int k = 0; k <= 10; k++)
{
  sum2 += (pow(x,2*k))/(DoubleFactorial(2*k));
}

return sum1/sum2;
}

int main()
{
double y;
cin >> y;

cout << (7*t(0.25) + 2*t(1 + y))/(6-t(y*y-1));
}