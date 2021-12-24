class Solution {
public:
    
    void swap(int &x, int &y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    void sortColors(vector<int>& nums) {
        
        int n = sizeof(nums)/sizeof(nums[0]);
        int l = 0, h = n-1, m = 0;
        while (m <= h){
            if(nums[m] == 0){
                swap(nums[m], nums[l]);
                l++;
                m++;
                
            }else if(nums[m] == 1){
                m++;
            }
            else{
                swap(nums[m], nums[h]);
                h--;
            }
        }  
    }
};
