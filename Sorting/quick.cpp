#include<bits/stdc++.h>
using namespace std;
int par(vector<int> & arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j ){
        while(arr[i] <= pivot && i<= high){
            i++;
        }
        while(arr[j] > pivot && j >= low){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high){
    if( low < high){
        int partition = par(arr,low, high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }
}
vector<int> quick_sort(vector<int> &arr, int n){
    qs(arr, 0, n-1);
    return arr;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr, n );
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}