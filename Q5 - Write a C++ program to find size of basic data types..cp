/*Q5 - Write a C++ program to find size of basic data types. (Medium)
Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
to accomplish this. Give it a try to know the data types in depth)
Sample Output :
Size of fundamental data types :
The sizeof(char) : 1 bytes
The sizeof(short) : 2 bytes
The sizeof(int) : 4 bytes
The sizeof(long): 4 bytes
The sizeof(long long) : 8 bytes
The sizeof(float) : 4 bytes
The sizeof(double) : 8 bytes
The sizeof(long double) : 12 bytes
The sizeof(bool) : 1 bytes*/
#include <iostream>

using namespace std;

int
main ()
{
    int a1 = sizeof(char);
    int a2 = sizeof(short);
    int a3 = sizeof(int);
    int a4 = sizeof(long);
    int a5 = sizeof(long long);
    int a6 = sizeof(float);
    int a7 = sizeof(double) ;
    int a8 = sizeof(long double); 
    int a9 = sizeof(bool); 
    cout<<"The sizeof(char) : "<<a1<<endl<<"The sizeof(short) : "<<a2<<endl<<"The sizeof(int) : "<<a3<<endl<<"The sizeof(long) : "<<a4<<endl<<"The sizeof(long long) : "<<a5<<endl<<"The sizeof(float) : "<<a6<<endl<<"The sizeof(double) : "<<a7<<endl<<"The sizeof(long double) : "<<a8<<endl<<"The sizeof(bool) : "<<a9;
    return 0;
}
