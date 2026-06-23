class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int s =  newInterval[0];
        int e = newInterval[1];
        int i=0;
        vector<vector<int>>ans;
        int mini =INT_MAX;
        int maxi =INT_MIN;
        while (i<n && intervals[i][1]<s){
            ans.push_back(intervals[i]);
            i++;
        }
        while (i<n && intervals[i][0]<=e){
            s = min(intervals[i][0],s);
            e= max(intervals[i][1],e);
            i++;
            
        }
        ans.push_back({s,e});
        while   (i<n ){
            ans.push_back(intervals[i]);
            i++;
        }      
        return ans ;
    }
};