#include<iostream>
#include<vector>
using namespace std;
//wap to calculate sum of given integers of subset their sum.
//INPUT: 123
//Subset: [123,12,13,1,2,3, ,]  subset will make 2^n where n is the number of element.
//Output: [6, 3, 4, 1, 2, 3, 0] 

void subSet_Sum(int *arr, int idx,int sum,int n,vector<int> &result){
    //Base case 
    if(idx==n){ 
        result.push_back(sum);
    return;
    }
    //recursive funtion to pick every element-->
    subSet_Sum(arr,idx+1,sum+arr[idx],n,result);

    //will not pick any element in set bacause every element has two choice , they can pick or not
    subSet_Sum(arr,idx+1,sum,n,result);
}
int main(){
    int arr[]={1,2,3};
    vector<int>result;
    subSet_Sum(arr,0,0,3,result);
    for(int i:result){
        cout<<result[i]<<" ";
    }
return 0;
}