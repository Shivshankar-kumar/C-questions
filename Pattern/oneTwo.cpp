#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the size :";
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int sum=i+j;
            if(sum%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    int num=0,n1;
    cout<<"Enter the rage : ";
    cin>>n1;
    for(int i=1; i<=n1; i++){
        for(int j=1; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}