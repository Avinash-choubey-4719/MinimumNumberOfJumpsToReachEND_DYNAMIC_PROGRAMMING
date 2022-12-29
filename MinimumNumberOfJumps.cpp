#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
    return a<b?a:b;
}

int minJumps(int arr[], int n, int pos){
    if(n == 0 || pos == n - 1){
        return 0;
    }

    if(pos >= n){
        return -1;
    }

    int ans = INT16_MAX;
    for(int k = 1;k<=arr[pos];k++){
        int temp = minJumps(arr, n, pos + k);
        if(temp != -1)
            ans = min(ans, 1 + temp);
    }
    return ans;
}

int main(){
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos = 0;

    int result = minJumps(arr, n, pos);
    cout<<result<<endl;
    
    return 0;
}