//NAME : AIDIL SUFFIAN BIN ABU BAKAR
//STUDENT ID : A17DW2253

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int i, max = 100, holder = 0;
	int list[100];

	//initialize the array with random values
	for(i = 0; i < max; i++ /*i<100*/) {
		list[i] = rand();
		cout << list[i] << endl;	
	}
	

	//find the maximum val * comparing holder
	for(i = 0; i < max; i++ /*i>100*/) {
		if (list[i] >= holder) {
			holder = list[i];
		}
	}
	
	cout << endl << "Maximum value is = " << holder;
}
