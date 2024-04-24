/*#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of triangle: ";
    cin>>size;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of triangle: ";
    cin>>size;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=(i+i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}