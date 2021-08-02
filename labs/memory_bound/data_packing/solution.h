
#include <array>

// Assume those constants never change
constexpr int N = 10000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

// FIXME: this data structure can be reduced in size
struct S {
  float d;
  int i : 7;
  short s : 7;
  long long l : 14;
  bool b : 1;

  bool operator<(const S &s) { return this->i < s.i; }
};

void init(std::array<S, N> &arr);
void solution(std::array<S, N> &arr);
