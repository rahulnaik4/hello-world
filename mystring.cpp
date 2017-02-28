#include <iostream>
#include <string>

using namespace std;

unsigned int countSize(string &str){
	return str.size();	
}

/*
	print string character by character without space
*/
void printString(string &str){
	for(auto c: str){
		cout << c;
	}
	cout << endl;
}

int main(){
	string str("helloworld");
	printString(str);
	return 0;
}
