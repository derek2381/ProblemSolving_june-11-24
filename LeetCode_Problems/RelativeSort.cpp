// problem link
// https://leetcode.com/problems/relative-sort-array/description/


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        map<int, int> mp;

        for(int i : arr1){
            mp[i]++;
        }


        vector<int> res,extra;

        for(int i : arr2){
            if(mp.find(i) != mp.end()){
                for(int j = 0;j < mp[i];j++){
                    res.push_back(i);
                }
                mp.erase(i);
            }
        }

        for(auto i : mp){
            for(int j = 0;j < i.second;j++){
                res.push_back(i.first);
            }
        }
        // cout << extra.size() << endl;

        return res;

    }
};
