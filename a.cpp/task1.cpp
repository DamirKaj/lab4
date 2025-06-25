#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(10);
     cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    sort(a.begin(), a.end());
    auto min = min_element(a.begin(), a.end()); //min которая стоит после auto переменная.Тип можно его назвать как угодно.
    cout << "Minimum element: " << *min << endl;
    auto max = max_element(a.begin(), a.end()); //max toze
    cout << "Maximum element: " << *max << endl;

}