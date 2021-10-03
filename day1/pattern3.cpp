#include<iostream>
using namespace std;

int main()
{
	int i, j, k, rows;
	
	cin >> rows;
	
	for ( i = rows; i >= 1; i--)  
	{
		for ( j = 0; j <= rows-i;j++) 
		{
      		cout << " ";   	
		}
			
		for(k = 0; k != (2 * i - 1); k++)
		{
			cout <<"*";
			
		}
		cout << "\n";
	}

 	return 0;
}