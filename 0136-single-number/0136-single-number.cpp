class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
    // size of vector 
     int n =  nums.size();

    // using nested loop 
     for(int i=0; i<n; i++){

        int count = 0;
        for(int j=0; j<n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        // Here Checked condition 
        if(count == 1){
            return nums[i];
        }   
    }
    return -1;
    }
};