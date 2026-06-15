// what is a hashSET?
class MyHashSet {
private:
    
        static const int BUCKET = 10000;
        std::vector<std::list<int>> buckets;

        int hash(int key) const {
            return key % BUCKET;
        }
    
public:
MyHashSet() : buckets(BUCKET) {}
    void add(int key) {
        int idx = hash(key);
        for(int x : buckets[idx]){
            if(x == key) return; // this prevents duplicates in the hashset.
        }
        buckets[idx].push_back(key); // this adds to the back of the list.
    }
    
    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key);
    }
    
    bool contains(int key) {
        int idx = hash(key);
        for(int x : buckets[idx]){
            if(x == key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */