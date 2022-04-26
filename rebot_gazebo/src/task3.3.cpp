#include <iostream>
#include <math.h>

using namespace std;

double f(double mu, double sigma2, double x)
{
    //Use mu, sigma2 (sigma squared), and x to code the 1-dimensional   Gaussian
    //Put your code here
    double prob = (1/(sigma2 * sqrt(2*M_PI))*exp((-1/2)((x-mu)/sigma2)^2));


    return prob;
}
int main()
{
    cout << f(10.0, 4.0, 8.0) << endl;
    return 0;
}
