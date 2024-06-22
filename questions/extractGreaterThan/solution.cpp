#include <vector>

std::vector<int> extractGreaterThan(const std::vector<int> &data, int pivot) {
  std::vector<int> greaterElements;

  for(std::size_t i = 0; i < data.size(); i++) {
    if(data.at(i) > pivot) {
      greaterElements.push_back(data.at(i));
    }
  }

  return greaterElements;
}