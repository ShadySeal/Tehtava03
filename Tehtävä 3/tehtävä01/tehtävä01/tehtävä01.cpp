#include <iostream>
using namespace std;

int* taulukko(int n) {
    int* taulukko = new int[n];

    return taulukko;
}


int main()
{
    int koko = 10;
    int* luotu_taulukko = taulukko(koko);
}