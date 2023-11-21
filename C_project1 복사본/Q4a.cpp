#include <iostream>
 
 bool isprime(int n) {
        bool result;
        
        // Your implementation
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

    void test_isprime() {
        std::cout << "isprime(2) = " << isprime(2) << '\n';
        std::cout << "isprime(10) = " << isprime(10) << '\n';
        std::cout << "isprime(17) = " << isprime(17) << '\n';
}


int main(){
    test_isprime();
    return 0;
}
