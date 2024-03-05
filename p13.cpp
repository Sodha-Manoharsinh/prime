#include<iostream>
using namespace std;

int main()
{
    // wap to print whether a number entered by user is a prime number or not.

    int n;
    bool isPrime = true;

    cout<<"Enter a number:- ";
    cin>>n;

    if(n==1) isPrime = false;

    for(int i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }

    isPrime? cout<<n<<" is Prime number."<<endl:cout<<n<<" is not Prime number."<<endl;

    return 0;
}
