#include<iostream> 
#include<unordered_set>
using namespace std; 
int main ()
{
    unordered_set<int> s; 
    s.insert(1);
    s.insert(2); 
    s.insert(3);
    s.insert(4);  
    s.insert(5);

    // now how to find 
    int target = 4 ; 
    // existence 
    //s.find() -> it searches in the set , and if not found 
    // then it return the last element of the set
    if(s.find(target)!=s.end()) // target exists
    {
        cout<<"target exists"; 
    }
    target = 10; 
    if(s.find(target)==s.end())//target do not exist 
    {
        cout<<"target donot exists";
    }

    for(int ele : s)
    {
        cout<<ele<<" ";
    }
    // Set can only store unique elements, so if we try to insert a duplicate element, it will not be added.
    s.insert(3); // This will not change the set
    cout<<endl<<s.size();
    //set erase
    s.erase(2); // This will remove the element 2 from the set
    cout<<endl<<s.size();
}