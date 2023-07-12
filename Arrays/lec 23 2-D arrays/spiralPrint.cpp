#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ans;
        int count=0;
        int total=row*col;

        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;

        while(count<total)
        {
            //starting row
            for(int index=startcol;endcol>=index && count<total;index++)
            {
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;

            //ending col
            for(int index=startrow;endrow>=index && count<total;index++)
            {
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;

            //ending row
            for(int index=endcol;index>=startcol && count<total;index--)
            {
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;
            
            //starting col
            for(int index=endrow;index>=startrow && count<total;index--)
            {
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }

        return ans;
    }
};
