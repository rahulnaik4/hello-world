#include <iostream>
#include <string>

using namespace std;

unsigned int findStringSz(string &str){
	return str.size();
}

int main(){
	string str("this is my string");	
	cout << findStringSz(str) << endl;
}
