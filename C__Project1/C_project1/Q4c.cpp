
#include <iostream>




#include <vector>



// Function to print the elements of a vector
void print_vector(std::vector<int> v){

    std:: cout << "[";
    for ( int i = 0; i < v.size(); ++i )  {

        std:: cout << v[i];
        
        if (i < v.size() -1) {

            std:: cout << ", ";

        }


    }

    std:: cout << "]" << std:: endl;
}




// Function to check if a number is prime

bool isprime(int n) {
        bool result;
        
        
        result = true;

        if (n <= 1){
            return false;
        }

        for (int i = 2; i * i <=n  ; i ++ ){
            if (n % i  == 0){
                return false;
                break;
            }


        }
        
        
        return result;
    }


// Function to perform prime factorization of a number
std:: vector<int> prime_factorize(int n){

    
    std:: vector < int > answer;

    // Iterate through numbers from 2 to n
    for (int i = 2; i <= n; ++i){

        // If i is a factor of n and i is prime, add it to the answer vector
        if (n % i == 0 && isprime(i)){
            answer.push_back(i);
        }
    }

    
    

    return answer;

}


        
// Function to test the prime_factorize function
void test_factorize() {
        print_vector(prime_factorize(2));
        print_vector(prime_factorize(72));
        print_vector(prime_factorize(196));
}
int main(){
        test_factorize();
        return 0;
}