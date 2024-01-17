#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    using namespace std;

    unsigned H, W, N, h, w;
    cin >> H >> W >> N >> h >> w;

    // count[i][j][x] = マス (i + 1, j + 1) に x が書き込まれているとき 1, そうでないとき 0
    vector count(H, vector(W, vector<unsigned>(N)));

    for (auto &&row : count) {
        for (auto &&grid : row) {
            unsigned long A;
            cin >> A;
            ++grid[A - 1];
        }
        // 番兵
        row.emplace_back(N);
    }
    // 番兵
    count.emplace_back(W + 1, vector<unsigned>(N));

    // 二次元累積和
    std::inclusive_scan(rbegin(count), rend(count), rbegin(count), [](auto &&i, auto &&j) {
        const auto vector_plus{[](auto &&i, auto &&j) {
            vector<unsigned> ret;
            transform(begin(i), end(i), begin(j), back_inserter(ret), plus<>{});
            return ret;
        }};
        std::inclusive_scan(rbegin(j), rend(j), rbegin(j), vector_plus);
        vector<vector<unsigned>> ret;
        transform(begin(i), end(i), begin(j), back_inserter(ret), vector_plus);
        return ret;
    });

    // board[i][j][x] = マス (i, j) より右下のマスに x が書き込まれている個数

    for (unsigned i{}; i + h <= H; ++i) {
        for (unsigned j{}; j + w <= W; ++j) {
            unsigned ans{};
            // 塗りつぶされていないマスに x と書いてある個数が 1 以上のとき、答えを 1 増やす
            for (unsigned x{}; x < N; ++x)
                ans += count[0][0][x] + count[i + h][j][x] + count[i][j + w][x] !=
                       count[i][j][x] + count[i + h][j + w][x];
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}
