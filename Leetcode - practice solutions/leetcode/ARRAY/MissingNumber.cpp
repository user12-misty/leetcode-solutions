class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
vector<bool> flag(n+1, false);
for(int i=0;i<n;i++){
    flag[nums[i]]=true;
}
for (int i=0; i<=n;i++){
    if(flag[i]==false) return i;
}
return 5363576; //TC = 0(n)
    }
    
//method 2
// for(int  i=0;i<=n;i++){
//     bool flag=false;
//     for(int ele : nums){
//         if(ele ==i){
//             flag= true;
//             break;
//         }
//     }
//     if(flag == false) return i;
// }
// return 35235;
//     }
};