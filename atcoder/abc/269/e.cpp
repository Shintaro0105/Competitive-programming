#include <iostream>
using namespace std;

int send(int A, int B, int C, int D) {
  cout << "? " << A << " " << B << " " << C << " " << D << endl;
  cin >> A;
  return A;
}

int main() {
  int N;
  cin >> N;
  int U = 1, D = N + 1;
  while (U + 1 != D) {
    int M = (U + D) / 2;
    int c = send(U, M - 1, 1, N);
    (c == M - U ? U : D) = M;
  }
  int L = 1, R = N + 1;
  while (L + 1 != R) {
    int M = (L + R) / 2;
    int c = send(1, N, L, M - 1);
    (c == M - L ? L : R) = M;
  }
  cout << "! " << U << " " << L << endl;
}
