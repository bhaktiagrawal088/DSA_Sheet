
#include<iostream>
#include<vector>
using namespace std;
int main() {
	// Write your code here
	// Write your code here
    int ch;
	cin>>ch;
    vector<double>a;
	switch(ch){
		case 1: 
			double r;
			cin>>r;
			a.push_back(r);
			cout<<3.14*r*r;
			break;

		case 2 :
				double l, b;
				cin>>l>>b; 
				a.push_back(l);
				a.push_back(b);
				cout<<l*b;
				break;
		default:
				return -1;
	}
}






