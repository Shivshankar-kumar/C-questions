#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Pyramid: ";
    cin>>size;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=(i+i)-1; j++){
            if(i==1||j==1||i==size||j==(i+i)-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}