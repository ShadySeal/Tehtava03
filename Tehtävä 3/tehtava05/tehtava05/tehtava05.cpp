#include <iostream>
using namespace std;

void kaanna(int* t, int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = temp;
    }
}

void tulosta_taulukko(int* t, int n) {
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << "\n";
}

int main() {
    int koko;
    cout << "Anna taulukolle koko: ";
    cin >> koko;
    int* luotu_taulukko = new int[koko];

    cout << "Syötä " << koko << " kokonaislukua:\n";
    for (int i = 0; i < koko; ++i) {
        cin >> luotu_taulukko[i];
    }

    cout << "Alkuperäinen taulukko:\n";
    tulosta_taulukko(luotu_taulukko, koko);

    kaanna(luotu_taulukko, koko);

    cout << "Käännetty taulukko:\n";
    tulosta_taulukko(luotu_taulukko, koko);

    delete[] luotu_taulukko;

    return 0;
}
