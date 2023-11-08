#include <iostream>
using namespace std;

void lue_arvot(int* t, int n) {
    cout << "Syötä " << n << " kokonaislukua:\n";
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }
}

int main()
{
    int koko = 5;
    int* luotu_taulukko = new int[koko];

    lue_arvot(luotu_taulukko, koko);

    cout << "Syötit seuraavat arvot taulukkoon:\n";
    for (int i = 0; i < koko; ++i) {
        cout << luotu_taulukko[i] << " ";
    }

    return 0;
}