#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
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
            
            //storing starting col
            for(int index=startrow;index<endrow;index++)
            {
                ans[startrow][index]=matrix[endrow-index][startcol];
                
            }
            
            //starting col
           for(int index=endrow;index>startrow;index--)
            {
                matrix[index][startcol]=matrix[endrow][index];
                matrix.assign(matrix[index][startcol],matrix[endrow][index]);
                count++;
            }
            startcol++;
            
            //ending row
            for(int index=startcol;index<endcol;index++)
            {
                matrix[endrow][index]=matrix[endcol-index][endcol];
                count++;
            }
            endrow--;

            //end col
           for(int index=endcol;index>startcol;index--)
            {
                matrix[index][endcol]=matrix[startrow][index];
                count++;
            }
            endcol--;           



            //start row
           for(int index=startrow;index<endrow;index++)
            {
                matrix[startrow][index]=ans[startrow][endrow-index];
                count++;
            }
            startrow++;
        }

    }
}    