class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int mxarea=INT_MIN;
        while(i<j){
            
            mxarea=max(mxarea,(j-i)*min(h[i],h[j]));
            if(h[j]>h[i]) i++;
            else j--;
        }
        return mxarea;
    }
};
