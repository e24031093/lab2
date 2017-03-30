#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
	float	s=0;	//s=1 win,s=0.5 draw,s=0 lose,
	float	a=0;	//score of a
	float	b=0;	//score of b
	float	k=0;	//k=32
	float	e=0;	//E of A
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ofstream outFile("file.out", ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
 	}
	inFile >> k >> a >> b;//get initial value
	cout << "k=" << k << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	outFile << a << "\t" << b << endl ;
	while(inFile >>	s) {
		e=1/(1+pow(10,((b-a)/400)));
		cout << "e" << e << endl;
		a=a+round(k*(s-e));
		b=b-round(k*(s-e));
		outFile << a << "\t" << b << endl ;
	}
	return 0;
}
