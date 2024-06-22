int countGreaterThan(const std::vector<int>& data, int pivot = 10) {
  int count = 0;

  for(std::size_t i = 0; i < data.size(); i++) {
    if(data.at(i) > pivot) {
      count++;
    }
  }

  return count;
}