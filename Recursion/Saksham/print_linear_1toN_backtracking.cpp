#include<iostream> 
using namespace std; 

void printN(int i, int n)
{
    // use i-1 // backtracking 
    if(i==0) return; 
    
    
    // function call 
    printN(i-1,n); 

    // print 
    cout<<i<<" ";

}
void printNtoOne(int i, int n)
{
    // use i-1 // backtracking 
    if(i==0) return; 
    
    // print 
    cout<<i<<" ";


    // function call 
    printNtoOne(i-1,n); 

    

}
int main ()
{
    int n = 5; 
    printN(n,n); 
    cout<<endl;
    printNtoOne(n,n);

}