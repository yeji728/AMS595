#include <iostream>

// Function to print Pascal's Triangle up to the nth row
void printPascalTriangle(int n){
     // Loop through each row
    for (int i = 0; i < n; ++i){
        int coef = 1;

        // Loop through each element in the row
        for ( int j = 0; j <= i; ++j){

            // Print the current coefficient
            std:: cout << coef << " ";

            // Update the coefficient for the next element in the row
            coef = coef * (i - j) / (j + 1);

        }
        // Move to the next line for the next row
        std:: cout << std:: endl;
    }
}

int main(){

    
    // Call the function to print Pascal's Triangle with 5 rows
    printPascalTriangle(5);
    
    return 0;
}