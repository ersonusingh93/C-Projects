#include<iostream>
using namespace std;
int main()
{
    int i=1;
    // while(i<=100)
    // {
    //     if(i%2==0)
    //     {
    //          cout<<i;

    //     }
       
    //     i=i+1;
    // }
    // while(i<=100)
    // {
    //     if(i==50)
    //     {
    //          cout<<i;
    //          break;

    //     }
       
    //     i=i+1;
    // }
    //  while(i<=100)
    // {
        
    //     if(i==50)
    //     {
    //         cout<<i;
    //          continue;

    //     }
       
    //     i=i+1;
    // }

    //Factorial of number :
    int fact  = 1; 
    for(i=1;i<=5;i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of number is "<<fact;
    return 0;
}