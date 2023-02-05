/*Q6 - Write a C++ program to swap two numbers with the help of a third variable. (Hard)
Sample Input : 2, 3
Sample Output : 3, 2*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<", "<<b;

    return 0;
}