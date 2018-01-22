//Name : AIDIL SUFFIAN BIN ABU BAKAR
//STUDENT ID :A17DW2253

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char lowerToUpper[80];

	/*use string copy function here*/strcpy(lowerToUpper, "This is a check");

	for(int i=0;i<80;i++)
	{
		lowerToUpper[i] = toupper(lowerToUpper[i]);
	}

	cout<<lowerToUpper<<endl;
}
