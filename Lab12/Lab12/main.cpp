#include <iostream>
#include <stdarg.h>
#include <time.h>

#define RANDOM_RANGE 4
#define SOME_NUMBER (rand() % RANDOM_RANGE + 1)

using namespace std;

void isDividedOnQ(int n, ...);

void main(){
	srand(time(NULL));
	
	cout << "Lab12" << endl;
	
	isDividedOnQ(7, SOME_NUMBER, SOME_NUMBER, SOME_NUMBER,
		SOME_NUMBER, SOME_NUMBER, SOME_NUMBER, SOME_NUMBER);
}

void isDividedOnQ(int n, ...){
	va_list vl;
	va_start(vl, n);
	int q = va_arg(vl, int);

	cout << "Can be divided on " << q << ": " << endl;

	for (int i = 1; i < n; i++){
		int val = va_arg(vl, int);
		cout << val;
		if (val % q == 0)
			cout << "(%"  << q << " = 0) ";
		else
			cout << " ";
	}

	cout << endl;
	va_end(vl);
}
