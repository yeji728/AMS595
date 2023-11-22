#include <iostream>
#include <vector>




void print_vector(std::vector<int> v){

    //std:: cout << "[";
    for ( int i = 0; i < v.size(); ++i )  {

        std:: cout << v[i];
        
        if (i < v.size() -1) {

            std:: cout << " ";

        }


    }

    //std:: cout << "]" << std:: endl;
     std::cout << std::endl;
}






// Function to print Pascal's Triangle up to the nth row
void printPascalTriangle(int n){



    std::vector<std::vector<int> > triangle;  // Add space between right angle brackets

    for (int i = 0; i < n; ++i) {
        std::vector<int> row(1, 1);  // Use parentheses instead of curly braces to initialize the vector

        if (!triangle.empty()) {
            // For rows after the first one
            const std::vector<int>& lastRow = triangle.back();

            for (int j = 0; j < lastRow.size() - 1; ++j) {
                // Calculate the next element using the sum of two elements from the previous row
                row.push_back(lastRow[j] + lastRow[j + 1]);
            }

            row.push_back(1);  // Last element of each row is always 1
        }

        triangle.push_back(row);

        // Print each row using the print_vector function
        print_vector(row);
    }
}







int main(){

    
    // Call the function to print Pascal's Triangle with 5 rows
    printPascalTriangle(5);
    
    return 0;
}