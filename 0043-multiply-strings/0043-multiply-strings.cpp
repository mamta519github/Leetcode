class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size(), n = num2.size();
        vector<int> pos(m + n);
        
        for(int i = m - 1; i >= 0; i--) {
            for(int j = n - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0'); 
                int p1 = i + j, p2 = i + j + 1;
                int sum = mul + pos[p2];

                pos[p1] += sum / 10;
                pos[p2] = sum % 10;
            }
        }
        
        int idx = 0;
        while(idx < pos.size() && pos[idx] == 0) idx++; 
        if(idx == pos.size()) return "0";
        
        string res;
        for(int i = idx; i < pos.size(); i++) res.push_back('0' + pos[i]);
        
        return res;
    }
};