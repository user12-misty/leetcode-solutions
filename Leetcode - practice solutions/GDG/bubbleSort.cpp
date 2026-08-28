#include<iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    for(int j=1; j<=n;j++){
    for(int i=0;i<n-1;i++){
        if(arr[i]> arr[i+1])
        swap(arr[i], arr[i+1]);
        }
    }
}