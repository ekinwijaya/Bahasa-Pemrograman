#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main()
{
	int unsorted[100];  
	
    
	for(int i = 0; i < 100; i++)
      
	unsorted[i] = rand() % 100 + 1;
	    
	cout << "Angka Random dari 1 - 100: " << endl;
	
    for(int i = 0; i < 100; i++) 
	
    cout << unsorted[i] << " ";

    cout << "\n";
	
    int sorted[100];
	
    
	for(int i = 0; i < 100; i++)
    {
      int hi = -1;
      int hiIndex = -1;
      for(int j = 0; j < 100; j++)
      {
        if(unsorted[j] > hi)
        {
          hi = unsorted[j];
          hiIndex = j;
        }
      }
      sorted[i] = hi;
      unsorted[hiIndex] = -1;
    }

	cout << "\n\nDescending: " << endl;
 
    for(int i = 0; i < 100; i++) 
	
	cout << sorted[i] << " ";
	
	cout << "\n";


cout << "\n\nAscedning: " << endl;
int sorted_reverse[100];

	for (int i = 0; i < 100; i++)
{
	sorted_reverse[i] = sorted[100 - 1 - i];
}

// print descending array 
for (int i = 0; i < 100; i++)
{
	if (i < 100 - 1)
	{
		cout << sorted_reverse[i] << " ";
	}
	
		else 
		{
			cout << sorted_reverse[i];
		}
}

cin.ignore();

	return 0;

}
