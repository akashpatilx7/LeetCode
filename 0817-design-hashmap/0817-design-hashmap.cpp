class MyHashMap {
public:
    // Time Complexity : O(1) & Space Complexity : O(1000001)

    vector<int>map;

    MyHashMap() {
        // the map will get resized as soon as the MyHashMap function is called
        map.resize(1000001,-1);    
    }
    
    void put(int key, int value) {
        map[key]=value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */