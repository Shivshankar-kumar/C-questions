#include<iostream>
#include<vector>
using namespace std;

//wap to sort an element using selection sorting algorithm.
// input : 56 89 45 3 2 6
//output : 2 3 6 45 56 89

void selection_Sort(vector<int>&v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i)
        swap(v[i],v[min_idx]);
    }
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Element: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    selection_Sort(v);
    for(int i=0; i<n; i++)
    cout<<v[i]<<" ";
return 0;
}