class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        string str="";
        if (strs.empty()){ 
            return "";}
        
        for(int i=0; i<n; i++){
            char st= strs[0][i]; 
            for(int j=0; j<strs.size(); j++){
                if(strs[j][i] != st){
                  return str;
                    break;
                }
             

            }
             str+=st;

        }
        return str;
    }
};


//2 q
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m = nums1.size(), n=nums2.size();
       vector<double> ans(m+n);
       int i=0, j=0,k=0;
       while(i<m && j<n){
       if(nums1[i]<nums2[j]){
        ans[k]=nums1[i];
        i++;
        k++;
       }
       else{
        ans[k] = nums2[j];
        j++;
        k++;
       }
       }
       while(i<m){
       ans[k]=nums1[i];
        i++;
        k++;
       }
       while(j<n){
       ans[k] = nums2[j];
        j++;
        k++;
       }
       int q =ans.size();
       double ans1=0.0;
       if(q%2 == 0){
        int pos = q/2;
        ans1 = double(ans[pos] + ans[pos-1])/2;
       }
       else {
        int pos = q/2;
        ans1= double(ans[pos]);
       }
       return ans1;
    }
};
