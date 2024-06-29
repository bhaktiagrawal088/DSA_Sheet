#include<iostream>
using namespace std;
class Solution
{
public:
    long long sumOfDivisors(int N)
    {        
        long long totalsum = 0 ;
        for(int i = 1; i <= N ; i++){
            totalsum += calc(i);
        }
        return totalsum;
    }
    private:
        long calc(int num){
            long sum = 0;
            for(int i = 1 ; i*i <= num; i++){
                if(num % i == 0)
                {
                    sum += i;
                if(i != num/i){
                    sum += num/i;
                }
            }
        }
        return sum;
    }
};
int main()
{
    int n;
    cin >> n;
    Solution s;
    long long result = s.sumOfDivisors(n);
    cout << result;
    return 0;
}
