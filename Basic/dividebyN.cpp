// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     for(int i = 2; i < n; i++){
//         if(n%i == 0){
//             count++;
//     }
// }
//     cout<<count;
// }

#include <iostream>
#include <string>

int countDivisibleDigits(int n) {
    // Convert the number to a string to iterate through its digits
    std::string n_str = std::to_string(n);
    
    // Initialize a counter to keep track of the divisible digits
    int divisible_count = 0;
    
    // Iterate through each digit of the number
    for (char digit_char : n_str) {
        int digit = digit_char - '0'; // Convert char to int
        // Check if the digit is not zero and evenly divides the number
        if (digit != 0 && n % digit == 0) {
            divisible_count++;
        }
    }
    
    return divisible_count;
}

int main() {
    int n = 35;
    std::cout << "Number of digits of " << n << " that evenly divide " << n << ": " << countDivisibleDigits(n) << std::endl;
    return 0;
}

