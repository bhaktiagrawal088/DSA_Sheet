// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number of value";
//     cin>>n;
//     int b;
//     // convert into 32 bits
//     int x = n & 0xFFFFFF;
//     for (int i =31 ; i >=0; i--){
//        b = ((x>>i) & 1);
//        cout<<b;
//     }
//     cout<<endl;
//     int rev=0;
//     if(x  !=  b){
//         cout << "The reversed binary representation is: ";
//         while(x > 0 ){
//             int last = b%10;
//             rev = rev*10+last;
//             b = b/10;
//         }
//         cout <<rev;
//     }
//     else{
//         cout<<0;
//     }
// }


#include <iostream>
#include <bitset>

// Function to reverse the bits of a 32-bit unsigned integer
unsigned int reverseBits(unsigned int n) {
    unsigned int reversed = 0;
    
    // Iterate through each bit of the original number
    for (int i = 0; i < 32; i++) {
        // Shift the reversed number to the left
        reversed <<= 1;
        // If the current bit of the original number is 1, set the corresponding bit in the reversed number
        if (n & 1)
            reversed |= 1;
        // Shift the original number to the right for the next bit
        n >>= 1;
    }
    
    return reversed;
}

// Function to calculate the price of each ticket based on the reversed bits of a given numbersi



int main() {
    unsigned int n = 6; // Example unsigned integer
    
    std::cout << "Original number: " << n << std::endl;
    std::cout << "Reversed number: " << reverseBits(n) << std::endl;
    
    return 0;
}

long reverseBits(long n) {
    long rev = 0;
    int numbits = sizeof(long) * 8;
    
    for (int i = 0; i < numbits; ++i) {
        rev <<= 1;
        rev |= (n & 1); // Take the least significant bit of n and set it in rev
        n >>= 1;        // Shift n to the right to consider the next bit
    }
    
    return rev;
}

