#include <iostream>
using namespace std;
class Mahasiswa
{
public:
    void input();
    void proses();
    void output();

private:
    int nim[4], *penunjuk;
    string nama[4], *penunjuk2;
} m;
void Mahasiswa::input()
{
    nim[0] = 2100018495;
    nim[1] = 2100018496;
    nim[2] = 2100018497;
    nim[3] = 2100018498;
    nim[4] = 2100018499;
    nama[0] = "PASCAL";
    nama[1] = "PUTRA";
    nama[2] = "DHANDY";
    nama[3] = "ATTIYA";
    nama[4] = "HANNY";
}
void Mahasiswa::proses()
{
    penunjuk = &nim[0];
    penunjuk2 = &nama[0];
}
void Mahasiswa::output()
{
    cout << "Nilai " << *penunjuk << " ada di alamat memori " << penunjuk << endl;
    cout << "\nNilai " << *(penunjuk + 1) << " ada di alamat memori " << penunjuk + 1 << endl;
    cout << "\nNilai " << *(penunjuk + 2) << " ada di alamat memori " << penunjuk + 2 << endl;
    cout << "\nNilai " << *(penunjuk + 2) << " ada di alamat memori " << penunjuk + 2 << endl;
    cout << "\nNilai " << *(penunjuk + 2) << " ada di alamat memori " << penunjuk + 2 << endl;

    cout << "Nilai " << *penunjuk2 << " ada di alamat memori " << penunjuk2 << endl;
    cout << "\nNilai " << *(penunjuk2 + 1) << " ada di alamat memori " << penunjuk2 + 1 << endl;
    cout << "\nNilai " << *(penunjuk2 + 2) << " ada di alamat memori " << penunjuk2 + 2 << endl;
    cout << "\nNilai " << *(penunjuk2 + 2) << " ada di alamat memori " << penunjuk2 + 2 << endl;
    cout << "\nNilai " << *(penunjuk2 + 2) << " ada di alamat memori " << penunjuk2 + 2 << endl;
}
int main()
{
    m.input();
    m.proses();
    m.output();
}