#include<iostream>
#include<vector>
using namespace std;

//WAP to find Subsequences(Subset) of given String
//INput: abc
//[abc,ab,ac,bc,a,b,c, ]

static void find_SubSequences(string &str, int idx,string add, vector<string>&list){
    //Base Case
    if(idx==str.size()){
        list.push_back(add);
        return;
    }
    //All string has two choice they can add, and they can not add
    // for add recursive function
    find_SubSequences(str,idx+1,add+str[idx],list);

    // element do not want to add,, recursive function
    find_SubSequences(str,idx+1,add,list);
}
int main(){
    vector<string>res;
    string str="abc";
    find_SubSequences(str,0,"",res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<",";
    }
    return 0;
}