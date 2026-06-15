class MyHashMap {

private:
   static const int BUCKETS = 10000;
    std::vector<std::list<std::pair<int, int>>> buckets;
public:
    MyHashMap() : buckets(BUCKETS){}
    int hash(int key){
        return key % BUCKETS;
    }
    
    void put(int key, int value) {
        int idx = hash(key);
        // add the value at the correct index.
        for(auto& p : buckets[idx]){
            if(p.first == key){
                // update the key:
                p.second = value;
                return;
            }
        }
        buckets[idx].push_back({key, value});
    }
    
    int get(int key) {
        int idx = hash(key);
        
        for(auto& p : buckets[idx]){
            if(p.first == key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int idx = hash(key);
        auto& bucket = buckets[idx];
        for(auto it = bucket.begin(); it != bucket.end(); ++it){
            if(it->first == key){
                bucket.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */