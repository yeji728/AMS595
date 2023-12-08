#ifndef PI_APPROX_H
#define PI_APPROX_H

#include<cmath>

//This structure represents the results of Pi approximation, including the calculated approximation and its corresponding error.

struct PiResults{
    double approx;
    double error;

};

//This function prototype declares the pi_approx function, which approximates Pi using the trapezoidal rule with N intervals.
// It returns a PiResults structure encapsulating the computed approximation and the absolute error.

PiResults pi_approx(int N);

#endif 
