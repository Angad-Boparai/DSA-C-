#include <iostream>
using namespace std;


void reverse(string str){

	string abc="";
	int size=str.length();
	
	for(int i=size-1;i>=0;i--){
	
		abc=abc+str[i];
	
	}
	cout<<abc;
}

int main(){
	
	string input="ABcD";
	reverse(input);
}
