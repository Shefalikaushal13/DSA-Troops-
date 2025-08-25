#include<iostream> 
#include<string>
#include<algorithm>
using namespace std; 

int main ()
{
    string str = "saksham"; 
    cout<<str.size(); 
    cout<<str.length(); 

    //push things : only characters 
    
    str.push_back(' '); 
    str.push_back('A');
    cout<<str;
    // str.push_back("Angirash");  // we can only push_back characters 
    // cout<<str;

    //pop_back works same 


    // + operator in strings : v v imp 

    string fname = "Saksham"; 
    string lname = "Angirash"; 

    string fullName = fname+" "+lname; 
    cout<<endl<<fullName<<endl; 
    cout<<endl<<fname+" "+lname<<endl; 
    // or you can modify within the string 

    //reverse : partially as well as fully 
    string anagram = "anagram"; 
    reverse(anagram.begin(),anagram.end()); 
    cout<<anagram<<endl; 

    char charstr[] = {'a','b','c','d','e'}; 
    cout<<sizeof(charstr)<<endl;

    char str2[5] = "abcd"; // size always greater by 1 
    // due to null string  
    cout<<str2<<endl; 




    // taking input in a string 
    // string mystring ; 
    // // give a input 
    // cin>>mystring; // in this way we can only take the input non space things 
    // cout<<"I took the input as : "<<mystring<<endl;
    // for line with space we use getline 
    // string mystring2; 
    // getline (cin,mystring2); 
    // cout<<"Now I can take input with space as "<<mystring2<<endl; 


    string add = "kohlwin"; 
    cout<<add.substr(1)<<endl; //ohlwin 

    cout<<add.substr(3)<<endl; //lwing // from index 3 
    
    cout<<add.substr(1,5)<<endl; //ohlwi // 



    // convert any integer or float to string 
    int x = 1234; 
    string s = to_string(x); 
    cout<<s; 

    string ramu  = "420";
    int y = stoi(ramu);
    cout<<y; 
    // stol for long , stoll for long long 








}