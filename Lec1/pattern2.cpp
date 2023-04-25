#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
        int j=1;

        while(j<=5)
        {
            cout<<j;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    return 0;
}