#include <iostream>

using namespace std;

int main()

{
    int length = 120;
    int N, M;
    // input nilai
    cout << "Berapa banyak ekor bebek Pak Tatang: ";cin >> N;
    cout << "Berapa banyak teman Pak Tatang yang akan ia beri bebek: ";cin >> M;

    std::cout << std::string (length, '-') << '\n';

    // rumus pengoprasian pembagian dan perhitungan sisanya
    int a = N / M;
    int b = N % M;

    std::cout << std::string (length, '-') << '\n';

    // output hasil
    cout << "Maka setiap temannya akan menerima: " << a << endl;
    cout << "Jumlah sisa bebek Pak Tatang: " << b << endl;

    return 0;
}
