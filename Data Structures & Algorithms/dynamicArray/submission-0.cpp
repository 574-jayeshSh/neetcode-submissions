class DynamicArray {
public:
    vector<int> arr;

    DynamicArray(int capacity) {
        arr.reserve(capacity); // reserve space but keep size 0
    }

    int get(int i) {
        return arr[i]; // no bounds check
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (arr.size() == arr.capacity()) {
            if (arr.size() == 0)
                arr.reserve(1); // start with capacity 1
            else
                arr.reserve(arr.size() * 2); // double the capacity
        }
        arr.push_back(n);
    }

    int popback() {
        if (arr.empty()) return 0;
        int last = arr.back();
        arr.pop_back();
        return last;
    }

    void resize() {
        if (arr.size() == 0)
            arr.reserve(1);
        else
            arr.reserve(arr.size() * 2);
    }

    int getSize() {
        return arr.size();
    }

    int getCapacity() {
        return arr.capacity();
    }
};
