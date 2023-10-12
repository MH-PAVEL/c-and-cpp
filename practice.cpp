#include<iostream>
#include <iomanip> // for using setprecision
using namespace std;

double get_average(double a[], int n) {
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += a[i];
  }
  return sum / n;
}
int main() {
  int n; cin >> n;
  double a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cout << fixed << setprecision(6) << get_average(a, n) << '\n';
  return 0;
}
