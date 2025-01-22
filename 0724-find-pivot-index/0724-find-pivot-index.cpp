class Solution {
public:
    int pivotIndex(vector<int>& numbers) {
    int totalSum = 0;
    for (int num : numbers) {
        totalSum += num;
    }

    int leftSum = 0;

    for (int i = 0; i < numbers.size(); i++) {
        int rightSum = totalSum - leftSum - numbers[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += numbers[i];
    }

    return -1;
}
};