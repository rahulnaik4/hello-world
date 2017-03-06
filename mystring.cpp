#include <iostream>
#include <string>

using namespace std;

/*
	print string character by character.
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
