#include <iostream>
#include <vector>
#include <cmath>
#include "pi_approx.h"

// Function prototype
double* approximations(const std::vector<int>& intervals);

int main() {
    // Q1
    int N_q1 = 10000;

    // Call the pi_approx function for Q1
    PiResults pi_results_q1 = pi_approx(N_q1);
    std::cout << "Q1: Approximation for N = " << N_q1 << ": " << pi_results_q1.approx
              << ", Error: " << pi_results_q1.error << std::endl;

    // Q2
    std::vector<int> intervals_q2 = {101, 102, 103, 104, 105, 106, 107};
    // Call the approximations function for Q2
    double* approximations_q2 = approximations(intervals_q2);

     // Print the results for Q2
    std::cout << "Q2: Approximations using vector {101, 102, ..., 107}:\n";
    for (int i = 0; i < intervals_q2.size(); ++i) {
        std::cout << "N = " << intervals_q2[i] << ": " << approximations_q2[i] << std::endl;
    }

    // Deallocate the memory allocated for approximations_q2
    delete[] approximations_q2;

    return 0;
}