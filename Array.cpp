#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[3];
    for(int i = 0;i < 3;i++)
    {
    cout<<"Masukan Array ke-" << i << endl;
    cin>>array[i];
    }
    cout<< endl;
    
    for(int i= 0;i < 3;i++)
    {
    cout<<array[i]<<endl;
    }
}
