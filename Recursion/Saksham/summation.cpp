#include<iostream> 
using namespace std;
// int summation(int i,int sum)
// {
//     if(i <1)return sum; 
//     return summation(i-1,sum+=i); 
// } 

int summation(int n)
{
    if(n==0) return 0; 
    return n + summation(n-1); 
}

int main ()
{
    int n = 5 ; // cal the sum of first 5 numbers 
    cout<<summation(n); 

}