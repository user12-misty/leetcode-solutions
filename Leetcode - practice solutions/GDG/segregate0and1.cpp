class  solution{
    public:
    void segregate0and1(vector<int> &arr){
        int i =  0, j = arr.size() -1;
        while(i<j){
            if arr(arr[i] == 0) i++;
            if(arr[j] == 1) j++;
            if(i>j) break;
            if(arr[i] == 1 && arr[j] == 0){
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }

}


// one pass 

