#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    // *****brute ******
    // vector<int> ans;
    // int vis[n2] = {0};
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         if(arr1[i] == arr2[j] && vis[j] == 0){
    //             ans.push_back(arr1[i]);
    //             vis[j] = 1;
    //             break;
    //         }
    //         if(arr2[j] > arr1[i]) break;
    //     }
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // *** optimal approach ***
    vector<int> ans;
    int i = 0 ;
    int j = 0;
    while(i<n1 && j<n2){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}