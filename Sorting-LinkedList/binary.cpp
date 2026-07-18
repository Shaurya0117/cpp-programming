#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n - 1;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;

            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return -1;
    }
};

int main() {
    solution obj;
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 8;

    cout << obj.search(arr, target);
    return 0;
}