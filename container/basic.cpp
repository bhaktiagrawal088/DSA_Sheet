#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair <int , int > p = {1,2};
    // cout<<p.first<<" "<<p.second<<endl;
    // pair <int , pair<int, int > > p1 = {1, {3, 4}};
    // cout<<p1.first<<p1.second.first<<p1.second.second<<endl;
    // pair <int , int > arr[] = {{1,2},{3,4},{5,7}};
    // cout<<arr[1].second<<endl;
    
    
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    
    // vector <pair<int, int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(4,5);
    
    // vector<int> ve(5,100);
    // vector<int> vs(5);
    // vector<int> v1(5, 20);
    
    // vector <int> v2(v1);
    
    // vector<int>::iterator it = ve.begin();
    // it++;
    // cout<<*(it)<<" ";
    // it += 2;
    // cout<<*(it)<<" "<<endl;
    
    // for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it = ve.begin(); it != ve.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it : v2){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    
    // vector<int> vv = {1,2,3,4,5};
    // for(auto it : vv){
    //   cout<<it<<" " ;
    // }
    // cout<<endl;
    // vv.erase(vv.begin()+2, vv.begin()+4);
    // for(auto it: vv){
    //     cout<<it<<" ";
    // }cout<<endl;
    // vv.insert(vv.begin(), 300);
    // vv.insert(vv.begin()+1, 2, 20);
    // vector<int> copy = { 40, 50};
    // vv.insert(vv.begin(), copy.begin(), copy.end());
    // vv.pop_back();
    // for(auto it : vv){
    //     cout<<it<<" ";
    // }cout<<endl;
    // cout<<vv.size()<<endl;
    // cout<<vv.empty()<<endl;
    // vv.clear();
    // cout<<vv.empty();
    // cout<<endl<<endl;
    
    
    // list<int> ls;
    // ls.push_back(2);
    // ls.emplace_back(3);
    // ls.push_front(5);
    // ls.emplace_front();
    // for(auto it: ls){
    //     cout<<it<<" ";
    // }
    // cout<<endl<<endl;
    
    // deque<int> dq;
    
    // dq.push_back(1);
    // dq.emplace_back(2);
    // dq.push_front(3);
    // dq.emplace_front(4);
    
    // int d = dq.back();
    // cout<<d<<" ";
    
    // for(auto it: dq){
    //     cout<<it<<" ";
    // }cout<<endl<<endl;
    
    
    // //stack
    
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(3);
    // st.emplace(5);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.empty()<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }cout<<endl;
    // cout<<st.empty();
    // cout<<endl<<endl<<endl;
    
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.emplace(5);
    // q.back() += 5;
    // cout<<q.back()<<endl;
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    
    
    
    // cout<<endl;
    
    
    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(8);
    // pq.push(6);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    // cout<<endl<<endl;
    
    // set<int> st;
    // st.insert(1);
    // st.insert(2);
    // st.emplace(2);
    // st.insert(4);
    // st.insert(3);
    // st.insert(5);
    // // st.erase(3);
    // cout<<st.count(7)<<endl;
    // for(auto it : st){
    //     cout<< it<<" ";
    // }cout<<endl;
    // auto it1 = st.find(2);
    // auto it2 = st.find(4);
    // st.erase(it1, it2);
    // for(auto it : st){
    //     cout<< it<<" ";
    // }
    
    multiset<int> ms;
    ms.insert(4);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);
    cout<<ms.count(3)<<endl;
    ms.insert(1);
    ms.erase(ms.find(3));
    
    for(auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl<<endl;
    
    unordered_set<int> qs;
    qs.insert(3);
    qs.insert(5);
    qs.insert(2);
    qs.insert(2);
    qs.insert(1);
    for(auto it: qs){
        cout<<it<<" ";
    }cout<<endl<<endl;
    
    // Map Container
    
    map<int, int> mp;
    mp[1] = 2;
    mp.emplace(3,1);
    mp.insert({2,4});
    for(auto it : mp){
        cout<<it.first<<"->"<<it.second<<",";
    }cout<<endl;
    cout<<mp[1]<<endl;
    cout<<mp[4]<<endl;
    auto it = mp.find(3);
    cout<<it->second<<endl;
    
    
    
 
    return 0;
}