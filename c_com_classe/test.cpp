#include <iostream>
using namespace std;

    void somaUm(int * vetor) {
        vetor[0] += 1;
        cout << "dentro da função " << vetor[0] << endl;
    }


int main(int argc, char const *argv[])
{
    int a[2];
    a[0] = 0;
    a[1] = 1;

    somaUm(a);
    cout << "fora da função " << a[0] << endl;
    return 0;
}