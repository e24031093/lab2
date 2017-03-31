#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include "a.h"
using namespace std;

int main(){
	float	s=0;	//s=1 win,s=0.5 draw,s=0 lose,
	player	a(0);	//score of a
	player	b(0);	//score of b
	float	k=0;	//k=32
	float	e=0;	//E of A
	float	a_init=0;
	float	b_init=0;

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
	inFile >> k >> a_init >> b_init;//get initial value
	a.setScore(a_init);
	b.setScore(b_init);
	outFile << a.getScore() << "\t" << b.getScore() << endl ;
	while(inFile >>	s) {
		e=1/(1+pow(10,((b.getScore()-a.getScore())/400)));
		cout << "e" << e << endl;
		a.setScore(a.getScore()+round(k*(s-e)));
		b.setScore(b.getScore()-round(k*(s-e)));
		outFile << a.getScore() << "\t" << b.getScore() << endl ;
	}
	return 0;
}
