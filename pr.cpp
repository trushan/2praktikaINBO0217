#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>

using namespace std;

double a, x, y, t;


int main()
{
	//data input
	cout << "Enter a, x >> ";
	cin >> a >> x;
	cout << endl;
	
	//computation y
	if (a <= x){
		y = a + log(x+a);
	} else {
		y = sqrt(sin(a*x));
	}
	
	//computation t
	if (a > y){
		t = y/(a-x);
	} else if (a == y){
		t = t/(a-x) + (a+x)/y/y;
	} else {
		t = tan(a*x) + cos(x*a*y);
	}
	
	//data output
	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;
	
	return 0;
}