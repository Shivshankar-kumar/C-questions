#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"enter the length of pattern: ";
    cin>>length;
    for(int i=1; i<=length; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(length-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=length; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(length-i); j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}