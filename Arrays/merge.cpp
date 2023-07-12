#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int i=0, j=0, k=0;
        while(i<m&&j<n)
        {                
                
            if(nums1[j]==0||nums2[i]==0)
            {
                
            }
            if(nums2[j]>nums1[i])
            {
                nums3[k++]=nums1[j++];
            }
            else
            {
                nums3[k++]=nums2[i++];
            }
        }
        while(j<n)
        {
                nums3[k]=nums1[j];
                k++;
                j++;

        }
        while(i<m)
        {
                nums3[k]=nums2[i];
                i++;
                k++;

        }
    }
