#include<iostream>
#include<vector>
using namespace std;
void insertion_Sort(vector<int>&v){
    int n=v.size();
    for(int i=1; i<n; i++){
        int curr_ele=v[i];
        int j=i-1;
        while(j>=0 && v[j]>curr_ele){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=curr_ele;
    }
}
int main(){
    int n; cout<<"Enter the size: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Element :";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    insertion_Sort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}