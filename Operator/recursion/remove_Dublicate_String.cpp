#include<iostream>
using namespace std;

//WAP to remove occurances from given String
//INPUT: abcadaag
//OUTPUT: bcdg

string remove_Dublicate(string str,int idx,char ch){
    // Base Case
    if(idx==str.size()) return "";
    //Recursive function
    string ans=remove_Dublicate(str,idx+1,ch);
    char curChar=str[idx];
    //Self Work
    if(str[idx]!=ch){
        return curChar+ans;
    }else{
        return ans;
    }
}
int main(){
    string str;
    char ch;
    cout<<"Enter the String: ";
    cin>>str;
    cout<<"Enter the character to remove : ";
    cin>>ch;
    cout<<"After removing Ocurrances: "<<remove_Dublicate(str,0,ch);
    return 0;
}