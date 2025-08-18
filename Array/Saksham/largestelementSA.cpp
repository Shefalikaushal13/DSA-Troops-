#include <iostream>
#include <vector>
using namespace std;
int largestElement(vector<int>& nums) {
    int largest = nums[0]; 
    int size = nums.size(); 
    for(int i = 1; i < size; i++) { // start from 1
        if(nums[i] > largest) 
            largest = nums[i]; 
    }
    return largest;
}

int main() {
    vector<int> nums = {1, 2, 4, 5, 6, 10, 8}; 
    int largest = largestElement(nums); 
    cout << "Largest element: " << largest << endl;
    return 0;
}