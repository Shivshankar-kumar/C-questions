#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter the row size: ";
    cin>>row;
    cout<<"enter the column size: ";
    cin>>column;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}