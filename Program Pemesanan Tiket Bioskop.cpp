//Program Pemesanan Tiket Bioskop by Izzat Arroyyan

#include <iostream>

using namespace std;



int main () {

//Deklarasi Variabel
char pesan, kode, pesanulang;
int day, seat, prcday, prcseat, prctot, jumseat;


cout<<"----------------------------------------------------------"<<endl;
cout<<"\t\t"<<"  Cinema Izzat Arroyyan\n";
cout<<"----------------------------------------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<"-----------------------------Daftar Film----------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<"\t------------------------------------------------------\n";
cout<<"\t| Nomor  |         Nama Film        |   Kode Film    |\n";
cout<<"\t|----------------------------------------------------|\n";
cout<<"\t|   1    | Avengers : Infinity War  |       1        |\n";
cout<<"\t|   2    | Black Widow              |       2        |\n";
cout<<"\t|   3    | Ghostbuster Afterlife    |       3        |\n";
cout<<"\t|   4    | Fast and Furious 9       |       4        |\n";
cout<<"\t------------------------------------------------------\n";
cout<<endl;
cout<<endl;
cout<<"-----------------------------Harga Tiket----------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<"\t-------------------------------------------\n";
cout<<"\t| Tipe Kursi |   Weekdays   |   Weekend   |\n";
cout<<"\t|-----------------------------------------|\n";
cout<<"\t| Regular    | Rp35.000     | Rp45.000    |\n";
cout<<"\t| Premium    | Rp40.000     | Rp50.000    |\n";
cout<<"\t-------------------------------------------\n\n\n";

order:

cout<<"\tApakah anda ingin memesan tiket? (Tekan Y jika iya atau N jika tidak) : ";
cin>>pesan;

if (pesan == 'N' || pesan == 'n')
{
    cout<<"\n\n\tTerimakasih sudah mempercayai kami, Silahkan hubungi Customer Service jika ada kendala.";
}

else if (pesan == 'Y' || pesan == 'y')
{
    cout<<"\tMasukkan Kode Film yang ingin anda pesan :";
    cin>>kode;

    switch (kode)
    {
        case '1':
        {
            cout<<"\tAnda Memilih Film Avengers Infinity War\n\n";
            break;
        }
        case '2':
        {
            cout<<"\tAnda Memilih Film Black Widow\n\n";
            break;
        }
        case '3':
        {
            cout<<"\tAnda Memilih Film Ghostbuster Afterlife\n\n";
            break;
        }
        case '4':
        {
            cout<<"\tAnda Memilih Film Fast and Furious 9\n\n";
            break;
        }

    }
            cout<<"\t---------------------------------------\n\n";

            cout<<"\tSilahkan Pilih Hari dan Tipe Kursi\n\n";
            cout<<"\t|   Hari   |  Kode  |\n";
            cout<<"\t| Senin    |   1    |\n";
            cout<<"\t| Selasa   |   2    |\n";
            cout<<"\t| Rabu     |   3    |\n";
            cout<<"\t| Kamis    |   4    |\n";
            cout<<"\t| Jumat    |   5    |\n";
            cout<<"\t| Sabtu    |   6    |\n";
            cout<<"\t| Minggu   |   7    |\n\n\n";

            cout<<"\t|  Tipe Kursi  |  Kode  |\n";
            cout<<"\t| Regular      |  1     |\n";
            cout<<"\t| Premium      |  2     |\n\n";

            cout<<"\tMasukkan Kode Hari : ";
            cin>>day;

            cout<<"\n\tMasukkan Kode Kursi : ";
            cin>>seat;

            //Menentukan Harga Kursi yang akan dipesan
            if (day <=5 )
            {
                prcday = 35000;
            }
            else
            {
                prcday = 45000;
            }

            if (seat ==1 )
            {
                prcseat = 0;
            }
            else if (seat ==2 )
            {
                prcseat = 5000;
            }


            cout<<"\n\tMasukkan jumlah kursi yang ingin anda pesan :";
            cin>>jumseat;

            prctot = (prcday + prcseat)*jumseat;

            cout<<endl;
            cout<<endl;

            //Menampilkan hasil pemesanan tiket bioskop
            switch (kode)
            {
            case '1':
            {
            cout<<"\tFilm yang anda pesan \t\t: Avengers Infinity War\n";
            break;
            }
            case '2':
            {
            cout<<"\tFilm yang anda pesan \t\t: Black Widow\n";
            break;
            }
            case '3':
            {
            cout<<"\tFilm yang anda pesan \t\t: Ghostbuster Afterlife\n";
            break;
            }
            case '4':
            {
            cout<<"\tFilm yang anda pesan \t\t: Fast and Furious 9\n";
            break;
            }

            }

            if (seat ==1 )
            {
                cout<<"\tTipe kursi yang dipesan \t: Regular";
            }
            else if (seat ==2 )
            {
                cout<<"\tTipe kursi yang dipesan \t: Premium";
            }

            cout<<"\n\tJumlah kursi yang dipesan \t: "<<jumseat;
            cout<<"\n\tTotal Harga Tiket \t\t: Rp"<<prctot<<",-";
            cout<<"\n\n\tSilahkan Melakukan Pembayaran";

            cout<<"\n\n\tApakah anda ingin melakukan pemesanan lagi? (Tekan Y jika iya atau N jika tidak) ";
            cin>>pesanulang;

            if (pesanulang == 'N' || pesanulang == 'n')
            {
                cout<<"\n\tTerima Kasih Sudah Mempercayai Kami \n\tSilahkan hubungi customer service jika terdapat kendala ";
            }

            else if (pesanulang == 'Y' || pesanulang == 'y')
            {
                cout<<"\n\tSilahkan melakukan pemesanan ulang\n";
                goto order;
            }





}
return 0;
}
