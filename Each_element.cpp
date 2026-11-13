#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n], visited[n] = {0};

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        cout << a[i] << " occurs " << count << " time(s)" << endl;
    }

    return 0;
}
