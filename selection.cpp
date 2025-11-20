#include <iostream>
using namespace std;

int main() {
    //variable declaration
    int pizza; //menyimpan pilihan pizza pengguna. Digunakan untuk menentukan harga pizza yang perlu dibayar.
    int hargaPizza = 0; //menyimpan harga pizza yang dipesan pengguna. Perlu diberi nilai awalan supaya ianya tidak mengandungi nilai "sampah" semasa dipanggil.
    char cheese; //menyimpan pilihan pengguna sama ada mahu menambah cheese atau tidak.
    string jenisPizza = "blank"; //menyimpan pilihan pizza pengguna. Digunakan untuk paparan jenis pizza yang dipilih pengguna.
    
    //user input
    cout<<"===========GERAI PIZZA==========="<<endl<<endl;
    cout<<"KOD         MENU           HARGA"<<endl;
    cout<<" 1. Pizza Hawaiian Chicken RM20"<<endl;
    cout<<" 2. Pizza BBQ Chicken      RM25"<<endl;
    cout<<" 3. Pizza Chicken Supreme  RM25"<<endl;
    cout<<" 4. Pizza Beef Pepperoni   RM20"<<endl;
    cout<<" 5. Pizza Seafood Deluxe   RM20"<<endl<<endl;
    cout<<"Masukkan kod pilihan anda: ";
    cin>>pizza;
    
    //operation and output
    if (pizza == 1)
    {
        hargaPizza = 20;
        jenisPizza = "Hawaiian Chicken";
    }
    else if (pizza == 2)
    {
        hargaPizza = 25;
        jenisPizza = "BBQ Chicken";
    }
    else if (pizza == 3)
    {
        hargaPizza = 25;
        jenisPizza = "Chicken Supreme";
    }
    else if (pizza == 4)
    {
        hargaPizza = 20;
        jenisPizza = "Beef Pepperoni";
    }
    else if (pizza == 5)
    {
        hargaPizza = 20;
        jenisPizza = "Seafood Deluxe";
    }
    else //perlu dibuat supaya apabila pengguna tersalah pilihan, ianya tidak akan error
    {
        hargaPizza = 0;
    }
    
    cout<<"Adakah anda mahu tambah cheese? (Y/N): ";
    cin>>cheese;
    
    if (cheese == 'Y'|| cheese == 'y')
    {
        hargaPizza+=5; // arahan ini bermaksud (hargaPizza = hargaPizza+5;)
    }
    //tak perlu buat else kerana hanya pilihan Y akan menambah harga pizza tersebut.
    
    cout<<endl<<"====RESIT PIZZA===="<<endl;
    cout<<"Pilihan Pizza: "<<jenisPizza<<endl;
    cout<<"Tambahan Cheese: "<<cheese<<endl;
    cout<<"Harga Pizza: RM "<<hargaPizza<<endl;
    cout<<endl<<"Terima Kasih kerana membeli pizza kami!";

    return 0;
}
