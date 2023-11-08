#include <iostream>
using namespace std;

int koko;
int taulukko[100];

void lue_arvot() {
    cout << "Anna taulukolle koko: ";
    cin >> koko;

    cout << "Syötä " << koko << " kokonaislukua:\n";
    for (int i = 0; i < koko; ++i) {
        cin >> taulukko[i];
    }
}

void kaanna() {
    for (int i = 0; i < koko / 2; ++i) {
        int temp = taulukko[i];
        taulukko[i] = taulukko[koko - i - 1];
        taulukko[koko - i - 1] = temp;
    }
}

void tulosta_arvot() {
    cout << "Taulukon arvot:\n";
    for (int i = 0; i < koko; ++i) {
        cout << taulukko[i] << " ";
    }
    cout << "\n";
}

int main() {
    lue_arvot();

    cout << "Alkuperäinen taulukko:\n";
    tulosta_arvot();

    kaanna();

    cout << "Käännetty taulukko:\n";
    tulosta_arvot();

    return 0;
}
