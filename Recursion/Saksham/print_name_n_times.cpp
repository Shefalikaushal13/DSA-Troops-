#include<iostream> 
using namespace std;  
void saymyName(int n)
{
    if(n==0) return; 
    cout<<"saksham"<<endl;
    saymyName(n-1);  

}
int main ()
{
    saymyName(5); 
}