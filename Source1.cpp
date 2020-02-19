#include <iostream>
#include <cstring>
#include <string>
#include <math.h>
using namespace std;



char ReverseStr(int * arr)
{	
	for (int i = 0; i < 4; i++)
	{
		for (int  j = 0; j < 4; j++)
		{
			cout << arr[i][j];

		}
		{
		
		
		}
	}
}

int main() 
{
	char str[50] = "synopsys QA Intern";
	cout << str << '\n';
	cout << "after reverse  ";
	ReverseStr(str);
	cout << str << endl;
	return 0;

}
