#include <bits/stdc++.h>
using namespace std;
// *******Brute **********
// int main(){
//     int n1;
//     cin>>n1;
//     int arr1[n1];
//     for(int i = 0 ; i < n1; i++){
//         cin>>arr1[i];
//     }
//     int n2;
//     cin>>n2;
//     int arr2[n2];
//     for(int i = 0 ; i < n2; i++){
//         cin>>arr2[i];
//     }
//     set<int> st;
//     for(int i = 0 ; i < n1; i++){
//         st.insert(arr1[i]);
//     }
//     for(int i = 0 ; i < n2; i++){
//         st.insert(arr2[i]);
//     }
//     for(auto it = st.begin(); it != st.end(); it++){
//         cout<<*it<<" ";
//     }
//     return 0;
// }
//  Time complexity ---> O(n1logn1 + n2logn2) + O(n1+n2)
// Space complexity ---> O(n1+n2)[solve the answer] + O(n1+n2)[return the answer]


// ********Optimal **********
int main(){
    int n1;
    cin>>n1;
    vector<int> arr(n1);
    for(int i = 0 ; i < n1; i++){
        cin>>arr[i];
    }
    int n2;
    cin>>n2;
    vector<int> arr2(n2);
    for(int i = 0 ; i < n2; i++){
        cin>>arr2[i];
    }
    vector<int> ans;
    int i = 0 , j = 0;
    while(i < n1 && j < n2){
        if(arr[i]< arr[j]){
            if(ans.size() == 0 || ans.back() != arr[i] ){
                ans.push_back(arr[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || ans.back() != arr[j] ){
                ans.push_back(arr[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(ans.size() == 0 || ans.back() != arr[i] ){
            ans.push_back(arr[i]);
        }
        i++;
    }
    while(j < n2){
        if(ans.size() == 0 || ans.back() != arr[j] ){
            ans.push_back(arr[j]);
        }
        j++;
    }
    for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}

// Time complexity --> O(n1+n2)
// Space complexity --> O(n1+n2)[return the ans only]

// int main()
// {
//     int n1;
//     cin >> n1;
//     int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         cin >> arr1[i];
//     }
//     int n2;
//     cin >> n2;
//     int arr2[n2];
//     for (int i = 0; i < n2; i++)
//     {
//         cin >> arr2[i];
//     }
//     int result[n1+n2];
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i< n1 && j < n2)
//     {
//         if(arr1[i] == arr2[j]){
//             if(k == 0 || result[k-1] != arr1[i]){
//                 result[k++] = arr1[i];
//             }
//             i++;
//             j++;
//         }
//         else if(arr1[i] < arr2[j]){
//             if(k == 0 || result[k-1] != arr1[i]){
//                 result[k++] = arr1[i];
//             }
//             i++;
//         }
//         else{
//             if(k == 0 || result[k-1] != arr2[j]){
//                 result[k++] = arr2[j];
//             }
//             j++;
//         }
//         while (i < n1)
//         {
//             if(k == 0 || result[k-1] != arr1[i]){
//                 result[k++] = arr1[i];
//             }
//             i++;
//         }
//         while (j < n2)
//         {
//             if(k == 0 || result[k-1] != arr2[j]){
//                 result[k++] = arr2[j];
//             }
//             j++;
//         }  
//     }
//     for(int i = 0 ; i < k; i++){
//         cout << result[i] << " ";
//     }  
// }