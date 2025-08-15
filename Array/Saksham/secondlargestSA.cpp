#include <iostream>
#include <vector>
using namespace std;


int secondLargestElement(vector<int>& nums) {
        int size = nums.size(); 
        int largest = nums [0]; 
        int second_largest=-1; 
        if(size<=1) return second_largest; 
        for (int i=1; i<size; i++)
        {
            if(nums[i]>largest){
                second_largest= largest;
                largest=nums[i];
            }
            else if (nums[i]<largest && nums[i]>second_largest) {
                second_largest = nums[i];
            }
        }
        
        return second_largest;
    }

int main() {
    vector<int> nums = {1, 2, 4, 5, 6, 10, 8}; 
    int second_largest = secondLargestElement(nums);
    cout << "Second largest element: " << second_largest << endl;
    return 0;
}    