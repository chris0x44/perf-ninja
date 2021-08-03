
#include <array>
#include <cstdint>

// Assume those constants never change
constexpr int N = 10000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

// FIXME: this data structure can be reduced in size
struct S {
  uint8_t i;
  uint8_t s : 7;
  bool b: 1;
  uint16_t l;
  float d;

  bool operator<(const S &s) { return this->i < s.i; }
};

void init(std::array<S, N> &arr);
void solution(std::array<S, N> &arr);
