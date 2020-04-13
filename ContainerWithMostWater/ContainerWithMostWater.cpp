#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class ContainerWithMostWater {
  public:
    int maxArea(vector<int>& height) {
        int answer = 0;
        // Your implementation goes here
        // CRIO_SOLUTION_START_MODULE_CONTAINER_WITH_MOST_WATER
        int n = height.size();
        int left = 0, right = n - 1;
        int minimum =
            (height[left] < height[right] ? height[left] : height[right]);
        answer = minimum * (right - left);
        while (left < right) {
            if (height[left] < height[right]) {
                left++;
                minimum = (height[left] < height[right] ? height[left]
                                                        : height[right]);
                answer = (answer > minimum * (right - left)
                              ? answer
                              : minimum * (right - left));
            } else {
                right--;
                minimum = (height[left] < height[right] ? height[left]
                                                        : height[right]);
                answer = (answer > minimum * (right - left)
                              ? answer
                              : minimum * (right - left));
            }
        }
        // CRIO_SOLUTION_END_MODULE_CONTAINER_WITH_MOST_WATER
        return answer;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> height;
    ReadMatrix<int>().OneDMatrix(n, height);
    int result = ContainerWithMostWater().maxArea(height);
    cout << result;
    return 0;
}
