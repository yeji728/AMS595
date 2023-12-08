#include <vector>
#include <cmath>
#include "pi_approx.h"
#include <iostream>

using namespace std;



//iterates through the provided intervals, calls the pi_approx function for each interval,
// and stores the resulting Pi approximations in a dynamically allocated array. The caller is responsible for freeing
// the memory allocated for the array.
double* approximations(const vector<int>& intervals ){
    int size = intervals.size();
    double* results = new double[size];
    // Iterate through intervals and calculate Pi approximations
    for (int i = 0; i < size; ++i){

        // Call pi_approx for each interval and store the result in the array
        
        PiResults pi_results = pi_approx(intervals[i]);
        results[i] = pi_results.approx;
    }
    return results;
}