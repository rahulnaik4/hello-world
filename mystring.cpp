#include <iostream>
#include <string>

using namespace std;

int main(){
	string str("helloworld");
	for(auto c: str){
		cout << c << endl;
	}
	return 0;
}
