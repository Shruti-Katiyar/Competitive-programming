//A. Beautiful Year
//https://codeforces.com/problemset/problem/271/A

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int y;
	cin>>y;
	while(true){//jab tak year nh mill jata
	y+=1; //increment year 1 by 1
	int a=y/1000; //give its 1st digit
	//we have to check all the digit of year so sari digit alag alag laini hoghi
	int b=y/100 %10; //divide by 100 bw now we have to check 2nd digit
	//
	int c=y/10 %10; //check 3rd digit
	int d=y%10;//4th digit
	
	//check all digit are disinct or not
	if((a!=b && a!=c && a!=d) and (b!=c && b!=d && c!=d)){
		cout<<y;
		break;
	 }
	
			
	}

	return 0;
}
