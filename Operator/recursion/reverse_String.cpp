#include<iostream>
#include<vector>
using namespace std;
 static string reverse(string str,int idx){
    //base case
    if(idx==str.size()){
        return "";
    }
    //recursive work
    string ans=reverse(str,idx+1);
   return ans+str[idx];
}
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    cout<<"Reverse String Is: "<<reverse(s,0);
    return 0;
}