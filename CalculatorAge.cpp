#include<iostream>

using namespace std;

int main()
{
    const int tahun_sekarang = 2021;
    int tahun_lahir, hasil;

    cout<<"Menghitung Umur"<<endl;
    cout<<"Masukan tahun kelahiranmu : ";
    cin>>tahun_lahir;

    hasil = tahun_sekarang - tahun_lahir;

    cout<<"Umurmu sekarang adalah = "<<hasil<<" Tahun"<<endl;

    return 0;
}
