int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool>m;
        int a;
        for(auto i:nums){
        if(m.find(i)==m.end()){
            m[i]=true;
        }
            else{
                a=i;
            }
    }
       return a;
    }  