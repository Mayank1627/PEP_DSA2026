
#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int idx){

    if(idx == arr.size()-1) return true;

    if(arr[idx] > arr[idx+1]) return false;

    return isSorted(arr,idx+1);
}

int sum(vector<int> &arr, int idx){

    if(idx == arr.size()) return 0;
    return arr[idx] + sum(arr,idx+1);
}

int main(){
    vector<int> arr = {1,2,3,3,5};
    cout<<isSorted(arr,0)<<endl;
    cout<<sum(arr,0);

}

