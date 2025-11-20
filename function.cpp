#include <iostream>
using namespace std;

//function prototyping
void menu(); //untuk paparkan menu
void bulatan (); //untuk mengira luas bulatan
void segiempat();//untuk mengira luas segiempat

int main() {
    menu();
    return 0;
}

void menu()
{
    int pilihan;//menyimpan nilai pilihan pengguna. Either bulatan or segiempat
    char ulang;//menyimpan nilai ulangan program. Jika Y atau y, program akan diulang
    
    do
    {
        cout<<"====KALKULATOR LUAS POLIGON===="<<endl;
        cout<<"1. Kira Luas Bulatan"<<endl;
        cout<<"2. Kira Luas Segiempat"<<endl;
        cout<<endl<<"Pilihan anda: ";
        cin>>pilihan;
        
        //gunakan switch kerana nilai pilihan adalah "finite".
        switch (pilihan)
        {
            case 1: bulatan();break;
            case 2: segiempat();break;
            default: cout<<"Pilihan anda tiada";
        }
        cout<<"=============================================="<<endl;
        cout<<"Anda hendak terus guna kalkulator ini? (Y/N): ";
        cin>>ulang;
        cout<<endl;
    }while(ulang == 'Y'|| ulang == 'y'); //gelung do-while untuk mengulang program.
}

void bulatan()
{
    double jejari;
    
    cout<<"Masukkan nilai jejari (cm): ";
    cin>>jejari;
    
    cout<<"Luas bulatan ialah : "<<jejari*jejari*3.142<<" cm2"<<endl;
}

void segiempat()
{
    double panjang, lebar;
    
    cout<<"Masukkan nilai panjang (cm): ";
    cin>>panjang;
    cout<<"Masukkan nilai lebar (cm): ";
    cin>>lebar;
    
    cout<<"Luas segiempat ialah : "<<panjang*lebar<<" cm2"<<endl;
}
