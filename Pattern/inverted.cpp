#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            cout<<" ";
        }
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}