vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedint;
        if(intervals.size()==0)
            return mergedint;
        sort(intervals.begin(),intervals.end());
        vector<int>tmp=intervals[0];
        for(auto it:intervals){
            if(it[0]<=tmp[1]){
                tmp[1]=max(it[1],tmp[1]);
            }
            else{
                mergedint.push_back(tmp);
                tmp=it;
            }
        }
        mergedint.push_back(tmp);
        return mergedint;
    }