#pragma once
#include <vector>

std::vector<int> increaseElements(const std::vector<int>& vec, int n) {
    std::vector<int> result = vec;
    for (int& element : result) {
        element += n;
    }
    return result;
}
