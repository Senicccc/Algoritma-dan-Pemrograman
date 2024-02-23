#include <iostream>

using namespace std;

int main()
{
    int firstValue = 10;
    int secondValue = 8;
    int temp;
    //hanya penambahan garis supaya rapi
    int length = 120;

    cout << "[Pertukaran Dua Variabel]" << endl;
    cout<< "Variabel Pertama: " <<firstValue<<endl;
    cout<< "Variabel Kedua: "<< secondValue<<endl;

    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    std::cout << std::string(length, '-') << '\n';
    cout << "[Hasil Pertukaran]" << endl;
    cout << "Variabel Pertama: " << firstValue << endl;
    cout << "Variabel Kedua: " << secondValue << endl;



    return 0;
}
