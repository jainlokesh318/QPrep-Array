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
