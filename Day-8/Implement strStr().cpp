class Solution {
public:
    int strStr(string hy, string nd) {
        int ans = -1;
        if(hy.size() < nd.size())
            return ans;
        int s = 0;
        int n = hy.size() - nd.size();
        for(int i = 0;i <= n;i++){
            if(hy[i] == nd[0]){
                for(int j = i; j< (nd.size()+i); j++){
                    if(hy[j] == nd[s])
                        ++s;
                    else{
                        s = 0;
                        break;
                    }
                    
                }
                if(s != 0)
                    return i;
            }
        }
        return ans;
    }
};