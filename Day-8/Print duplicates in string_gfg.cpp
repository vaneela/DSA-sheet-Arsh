void printDuplicates(string str){
    unordered_map<char,int>mp;
    for(auto ch : str)
        mp[ch]++;
    for(auto ele : mp){
        if(ele.second > 1 )
            cout << ele.first << " count " << ele.second;
    }
}