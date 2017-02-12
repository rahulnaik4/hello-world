#include <iostream>
#include <string>

using namespace std;

/*
	This file prints a string character line by line
*/
int main(){
	string str("helloworld");
	for(auto c: str){
		cout << c << endl;
	}
	return 0;
}
