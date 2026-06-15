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
        for (int x : buckets[idx]) {
            if (x == key) return;
        }
        buckets[idx].push_back(key);
    }

    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key);
    }

    bool contains(int key) {
        int idx = hash(key);
        for (int x : buckets[idx]) {
            if (x == key) return true;
        }
        return false;
    }
};