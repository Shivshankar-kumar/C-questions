#include<iostream>
#include<vector>
using namespace std;

//Wap to sort of an Array Element using bubble sort.
//Input: 232 45 6 7
//Output: 6 7 45 232

void bubble_Sort(vector<int>&v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j]>v[j+1]){
                // int temp=v[j];
                // v[j]=v[j+1];
                // v[j+1]=temp;
                swap(v[j],v[j+1]);
            }
        }
}
}
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Element"<<"\n";
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    bubble_Sort(v);
     for(int i=0; i<n; i++){
         cout<<v[i]<<" ";
     }
     cout<<"\n";
    return 0;
}