#include<iostream> 
#include<unordered_map>
#include<string>
using namespace std; 
int main()
{
    pair<int,int>p;
    p.first=1; 
    p.second=2; 
    cout<<p.first<<endl; 
    cout<<p.second<<endl;
    

    // pair can have different values
    
    pair<string,int>shoes; 
    shoes.first="Ram Kumar"; 
    shoes.second=10;

    cout<<shoes.first<<endl; 
    cout<<shoes.second<<endl;
    
    
    //unordered_map<string,int>m; 

    unordered_map<string,int> m; 
    // key - value pair 

    pair<string,int> p1; 
    p1.first="saksham"; 
    p1.second=76; 
    m.insert(p1); // we can insert only pair 

    pair<string,int> p2; 
    p2.first="angirash"; 
    p2.second=46; 
    m.insert(p2); // we can insert only pair 

    pair<string,int> p3; 
    p3.first="sharma"; 
    p3.second=56; 
    m.insert(p3); // we can insert only pair 

    // how we gonna print 
    for(auto ele:m)
    {
        cout<<ele.first<<" "<<ele.second<<" "<<endl;
    }


    //better way of insertion 

    m["raghav"]=76; 
    m["harsh"]=98;

    for(auto ele:m)
    {
        cout<<ele.first<<" "<<ele.second<<" "<<endl;
    }

    m.erase("raghav"); 
    //write only the key to remove 

}