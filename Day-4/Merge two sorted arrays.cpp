class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int e = n+m -1;
        int s1=  m-1;
        int s2= n-1;
        while(s1 > -1 && s2 > -1){
            if(a[s1] > b[s2])
                a[e--] = a[s1--];
            else
                a[e--] = b[s2--];
        }
        
        while(s1 > -1)
            a[e--] = a[s1--];
        while(s2 > -1)
            a[e--] = b[s2--];
        
    }
};