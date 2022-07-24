class RandomizedSet {
public:
    set<int> s={};
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        int n = s.size();
        s.insert(val);
        if(n!=s.size())
            return true;
        return false;
    }
    
    bool remove(int val) {
        int n = s.size();
        s.erase(val);
        if(n!=s.size())
            return true;
        return false;
    }
    
    int getRandom() {
        int r = rand()%s.size();
        auto it = s.begin();
        for(int i=0;i<r;i++)
        {
            it++;
        }
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */


//-------------------------------- correct way---------------------------------------------

class RandomizedSet {
public:
    unordered_map<int,int> m;
    vector<int> v;
    int size;
    RandomizedSet() {
        size = 0;
    }
    
    bool insert(int val) {
        if(m.find(val) == m.end()){
            m[val] = size;
            v.push_back(val);
            size++;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(m.find(val) != m.end()){
            int ind = m[val];
            v[ind] = v[size-1];
            v.pop_back();
            m[v[ind]] = ind;
            m.erase(val);
            size--;
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int ans = rand()%size;
        return v[ans];
    }
};

