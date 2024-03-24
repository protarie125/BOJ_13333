#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll n;
vl X;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  X = vl(n);
  for (auto&& x : X) {
    cin >> x;
  }

  sort(X.begin(), X.end(), greater());

  for (auto k = n; 0 <= k; --k) {
    auto ok = true;
    for (auto i = 0; i < k; ++i) {
      if (X[i] < k) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << k;
      return 0;
    }
  }

  return 0;
}