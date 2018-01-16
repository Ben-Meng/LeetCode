class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        vector<int> seatNumber(row.size());
        for(int i =0;i<row.size();i++)
            seatNumber[row[i]]=i;
        int ans = 0;
        for(int i = 0;i<row.size();i+=2){
            int partner= row[i]&1? row[i]-1: row[i]+1;
            int next = row[i+1];
            if (next == partner)
                continue;
            swap(row[i+1],row[seatNumber[partner]]);
            swap(seatNumber[next],seatNumber[partner]);
            ++ans;
        }
        return ans;
    }
};
