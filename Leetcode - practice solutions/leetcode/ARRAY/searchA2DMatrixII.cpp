class solution{ // leet 240
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
int m= arr.size(), n=arr.size();
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j] == target) return true;
    }
}
return false;

    }
};
