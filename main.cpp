#include <iostream>
#include <vector>


using namespace std;

int searchInsert(vector<int> &A, int target) {
    // write your code here
    if (A.empty()) return 0;

    int begin = 0, end = A.size();
    while (begin + 1 < end) {
        int mid = begin + (end - begin)/2;
        if (A[mid] == target) {
            return mid;
        } else if (A[mid] > target) {
            end = mid;
        } else {
            begin = mid;
        }
    }

    if(target <= A[begin]) {
        return 0;
    }

    return end;

}

int main() {
    cout << "Hello, World!" << endl;

    vector<int> A={1,3,5,6};
    int targe=1;

    int index = searchInsert(A, targe);
    cout<<index;

    return 0;
}