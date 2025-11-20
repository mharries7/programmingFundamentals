#include <iostream>
using namespace std;

int main() {
    //variable declaration
    int bilHari; //menyimpan nilai bilHari
    double JumlahSuhu = 0; //menyimpan nilai suhu yang dijumlahkan
    double suhu; //menyimpan nilai suhu yang dimasukkan pengguna
    double purataSuhu; //menyimpan nilai purata suhu yang dikira
    int i; //digunakan untuk kiraan gelung
    
    //user input
    cout<<"====Kalkulator Purata Suhu===="<<endl;
    cout<<"Anda mahu kira purata suhu untuk berapa hari? ";
    cin>>bilHari;
    
    for(i=0;i<bilHari;i++)
    {
        cout<<"Masukkan suhu hari "<<i+1<<" : ";
        cin>>suhu;
        JumlahSuhu += suhu;
    }
    
    
    //operation and output
    purataSuhu = JumlahSuhu/bilHari;
    
    cout<<endl<<"Purata suhu selama "<<bilHari<<" adalah : "<<purataSuhu<<" darjah celcius.";

    return 0;
}
