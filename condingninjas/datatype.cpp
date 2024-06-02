#include<iostream>
using namespace std;
int dataTypes(string type) {
	// Write your code here
	if(type=="Long"){
		return sizeof(long);
	}
	else if(type=="Integer"){
		return sizeof(int);
	}
	else if(type == "Float"){
		return sizeof(float);
	}
	else if(type == "Double"){
		return sizeof(double);
	}
	else if(type == "Character"){
		return sizeof(char);
	}
	else{
		return 0;
	}

}
int main(){
	string s;
	getline(cin,s);
	cout<<dataTypes(s);
	return 0;
}
