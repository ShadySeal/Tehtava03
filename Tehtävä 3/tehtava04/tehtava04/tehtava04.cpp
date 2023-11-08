#include <iostream>
using namespace std;

void tulosta_arvot(int* t, int n) {
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << "\n";
}

int main() {
    int koko = 5;
    int* luotu_taulukko = new int[koko];

    cout << "Syötä " << koko << " kokonaislukua:\n";
    for (int i = 0; i < koko; ++i) {
        cin >> luotu_taulukko[i];
    }

    cout << "Talulukon arvot:\n";
    tulosta_arvot(luotu_taulukko, koko);

    return 0;
}
