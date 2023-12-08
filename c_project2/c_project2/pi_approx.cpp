
#include <iostream>
#include <cmath>
using namespace std;
#include "pi_approx.h"



//calculates the y-value of a semi-circle at a given x-coordinate.

double f(double x){
    return sqrt(1-x * x);
}

//approximates Pi using the trapezoidal rule with N intervals. It calculates the area under a semi-circle curve  and computes both the approximation and the absolute error with respect to the actual value of Pi.

PiResults pi_approx(int N){
    PiResults result;



   
    double sum = 0.0;
    double delta_x_k = 1.0/N;

     // Iterate through intervals and apply the trapezoidal rule
    for (int k = 1; k <= N; ++k){
        double x_k = 1.0 / N * k;
        double x_k_minus_1 =  1.0 / N * (k-1);
        sum += (f(x_k) + f(x_k_minus_1)) / 2 * delta_x_k;


    }

    // Calculate the Pi approximation and absolute error
    result.approx = 4 * sum;
    
    result.error = abs(result.approx-M_PI);

    return result;


    


}