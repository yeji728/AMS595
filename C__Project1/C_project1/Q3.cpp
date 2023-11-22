#include <iostream>

using namespace std;

int main(){

    // Initialize the first two terms of the Fibonacci sequence
    int first_term = 1;
    int second_term = 2;

    // output the first two terms
    cout << first_term << ", " << second_term;

    // Generate and output the remaining Fibonacci sequence terms
    while ( true ){
        // Calculate the next term in the Fibonacci sequence
        int next_term = first_term + second_term;
        

        // check if the next term exceeds the limit
        if (next_term > 4000000){
            break;
        }
         
        // Output the next term
        cout << ", " << next_term;


        // Update the first and second terms for the next iteration
        first_term = second_term;
        second_term = next_term;
    }




}