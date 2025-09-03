#include<iostream>
using namespace std; 

void print_N(int i,int n)
{
    if(i>n) return ; 
    cout<<i<<" "; 
    print_N(i+1,n);

}
void printNtoOne(int i,int n)
{
    if(i>n) return ; 
    printNtoOne(i+1,n);
    cout<<i<<" "; 

}
int main ()
{
    print_N(1,10);
    cout<<endl;
    printNtoOne(1,10); 

}