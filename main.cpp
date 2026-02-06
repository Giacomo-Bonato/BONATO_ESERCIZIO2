#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2};

    auto maggiore = std::find_if(v.begin(), v.end(), [](int i) {
    return i > 58;
    });
    std::cout << *maggiore << std::endl;

    v.erase(
    std::remove_if(v.begin(), v.end(), [](int i) {
        return i%2 == 1;
    }),
    v.end()
    );

    for (int i : v) {
        std::cout << i << " ";
    }


    return 0;
}