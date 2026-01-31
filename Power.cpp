#include<bits/stdc++.h>
using namespace std;

void pow(int x,int y,int &ans){
    if(y == 0) return;
    ans = x * pow(x,y-1);
}

int main(){
    int x = 4;
    int y = 3;
    int ans = 1;
    pow(x,y,ans);
    cout<<ans;
}