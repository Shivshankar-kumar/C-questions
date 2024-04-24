/*#include<iostream>
int main(){
    int size;
    std:: cout<<"Enter the size of Triangle: ";
    std:: cin>>size;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=i; j++){
            if(i==1||j==1||i==size||i==j){
                std:: cout<<"*";
            }
            else{
             std::   cout<<" ";
            }
        }
        std:: cout<<"\n";
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of triangle: ";
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