#include <iostream>
using   namespace std;


void header(){
    cout<<"\t============================================================================"<<endl;   
    cout<<"\t||                                 PRODABO                                ||"<<endl;
    cout<<"\t||                        APLIKASI PEMESANAN ONLINE                       ||"<<endl;
    cout<<"\t||                           PRODUK DAERAH BOGOR                          ||"<<endl;
    cout<<"\t============================================================================"<<endl;
}
void titik_garis(){
    cout<<"\t........................"<<endl;
}
void enter(){
    cout<<endl;
}

int pembayaran(int user_bayar, int total){
    int kembalian;
    kembalian = user_bayar - total;
    cout<<"\t|  Kembalian  :  "<< kembalian <<endl;

    return kembalian;
}
void struk_pembelian(string produk){
    cout<<"\t ============================================================ "<<endl;   
    cout<<"\t||                          PRODABO                         ||"<<endl;
    cout<<"\t||                     PRODUK DAERAH BOGOR                  ||"<<endl;
    cout<<"\t||                JL. LEUWIMALANG NO.95 KEC. KOPO           ||"<<endl;
    cout<<"\t||                       SMK FAJAR UTAMA                    ||"<<endl;
    cout<<endl;
    cout<<"\t ============================================================ "<<endl;
    cout<<"\t||  Nota  :  (110) "<<rand()*1322<<"    Kasir  :  Deni                       "<<endl;
    cout<<"\t ============================================================ "<<endl;
    cout<<"\t|| "<<produk<<endl;
    
    
}



int main() {

// =======================================    Pendeklarasian Variable     ==========================================
    char user[30], email[20];

    // tipe data Array berupa string , yang berisi Nama produk makanan 
    string makanan[] = {
        " Bolu Lapis Sangkuriang                  ", " Lapis Bunder Talas Cokelat              ", " Lapis Bunder Talas Keju                 ", " Lapis Bunder Kreasi Cokelat & Blueberry ", " Cup Cake Talas Keju                     ", " Cup Cake Cokelat                        ", " Miss Pumpkin                            ", " Jojorong Bogor                          ", " Ketimus Bogor                           ", " Misro Bogor                            ", " Combro Bogor                           ", " Kacang Bogor Istana                    ", " Bika Bogor Talubi                      ", " Dodongkal                              ", " Asinan Bogor                           "
    };
    // variable integer berisi jumlah index dari  array makanan
    int jml_arr_makanan = sizeof(makanan)/sizeof(*makanan);
    
    // tipe data array berupa intiger , yang berisi harga dari produk makanan
    int harga_makanan[] = 
    {
        20000, 24000, 25000, 20000, 20000, 18000, 14000, 12000, 20000, 20000, 15000, 15000, 10000, 20000, 20000     
    };

    // tipe data Array string, yang berisi Nama produk minuman
    string minuman[] = {
        " Bajigur                                 ", " Bir Kotjok                              ", " Bandrek                                 ", " Cendol                                  ", " Es Goyobod                              ", " Es Doger                                ", " Es oyen                                 ", " Es Sekoteng                             ", " Es Cincau Hijau                         ", " Es Pala                                 "
    };
    // tipe  data array berupa integer , yang berisi harga dari produk minuman
    int harga_minuman[] = {
        10000, 12000, 13000, 10000, 10000, 10000, 14000, 18000, 11000, 10000
    };
     // variable integer berisi jumlah index dari  array makanan
    int jml_arr_minuman = sizeof(minuman)/sizeof(*minuman);
   
    // tipe data array berupa string , yang berisi nama dari produck kerajinan
    string souvenir[] = {
        "Batik Handayani Geulis       ", "Batik Mago                   ", "Carlin Berlian Fatih         ", "Cyqee Batik                  ", "Kin N Ken                    ", "Sanggar Tumaritis            ", "Bambo Tronic khas Bogor      ", "Kujang                       ", "Wayang Golek                 ", "Wayang Bambu khas Bogor      ", "Lesung Keramik               ", "Tas Daun Pandan khas Bogor   ", "Ecodeo khas Bogor            ", "Kaos Unchal khas Bogor       ", "Topeng Jigprak khas bogor    "
    };
    int harga_souvenir[] = {
        120000, 100000, 110000, 100000, 90000, 150000, 130000, 150000, 190000, 200000, 140000, 100000, 120000, 100000, 125000
    };
    int jml_arr_souvenir = sizeof(souvenir)/sizeof(*souvenir);

    // variable pemilihan
    int pilih_menu, pilih_makanan_minuman, pilih_barang, pilih_metode;
    // Ketentuan dari pembelanjaan 
    int total = 0, max = 6, pus = -1, user_bayar;
    string produk_di_beli[max];
    int harga[max];
    char  kembali_kemenu, tambah;
    string penuh;
// =======================================        ========================================== 
    cout<<"\t============================================================================"<<endl;   
    cout<<"\t||              LOGIN TERLEBIH DAHULU UNTUK MEMULAI APLIKASI              ||"<<endl;
    cout<<"\t||                                                                        ||"<<endl;
    cout<<"\t============================================================================"<<endl;
    cout<<"\tMasukan Nama Anda  : ";
    cin.getline (user, 30);
    titik_garis();
    cout<<"\tMasukan Email Anda : ";
    cin.getline (email, 20);
    titik_garis();
    

    enter();
    
    do{ //perulangan do while guna tujuan untuk mengulang ketika pengguna telah mencapai akhir dari program
        //
        kembali_ke_pemilihan_menu:
        system("CLS");
        cout<<"\t============================================================================"<<endl;   
        cout<<"\t||                                 PRODABO                                ||"<<endl;
        cout<<"\t||                        APLIKASI PEMESANAN ONLINE                       ||"<<endl;
        cout<<"\t||                           PRODUK DAERAH BOGOR                          ||"<<endl;
        cout<<"\t============================================================================"<<endl;
        enter();
        cout<<"\t __________________________________________________________________________ "<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t   Hallo   "<<user<<"  selamat Berkunjung di Aplikasi PRODABO                 "<<endl;
        cout<<"\t|  PRODABO   merupakan  aplikasi   pemesanan  online  yang  menyediakan    |"<<endl;
        cout<<"\t|  beberapa   produk  khas  Bogor & unggulan  Bogor,  disini  anda  akan   |"<<endl;
        cout<<"\t|  mendapatkan   makanan  dan  minuman  serta  kerajinan  berupa           |"<<endl;
        cout<<"\t|  souvenir  hinnga  aksesoris  Khas Bogor.                                |"<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|  Dan Kami Sangat Siap Melayani Anda...                                   |"<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|  # PILIHAN PRODUK KHAS BOGOR & UNGGULAN BOGOR YANG WAJIB DIKUNJUNGI      |"<<endl;
        cout<<"\t|      _____________________________________________________________       |"<<endl;
        cout<<"\t|     |_  NO  _|__________________   MENU   ________________________|      |"<<endl;
        cout<<"\t|     | [ 01 ] |Produk Makanan/Minuman Khas Bogor & Unggulan Bogor  |      |"<<endl;
        cout<<"\t|     | [ 02 ] |Produk Kerajinan Unik Khas Bogor & Unggulan Bogor   |      |"<<endl;
        cout<<"\t|     |________|____________________________________________________|      |"<<endl;
        cout<<"\t|__________________________________________________________________________|"<<endl;
        enter();
            
        pilih_menu :
        cout<<"\t! PILIH [ 01 ]-[ 02 ] ?   :   "; cin>> pilih_menu;
        if(pilih_menu != 01 && pilih_menu != 02){
            goto pilih_menu;
        }
        enter();
        system("CLS");
        enter();

        do{
                          
             kembali_ke_pemilihan:;
             string pesan_tambah = "\t!  Mau menambahkan pesanan [ Y ] / [ T ]?  :   ";
            if(pilih_menu == 01) {   // Menu makanan 
                cout<<"\t __________________________________________________________________________ "<<endl;
                cout<<"\t|                                                                          |"<<endl;
                cout<<"\t|   ____________________________________________________________________   |"<<endl;
                cout<<"\t|  |       Makanan Khas Bogor & Unggulan Bogor       |       Harga      |  |"<<endl;
                cout<<"\t|  |                                                 |     per porsi    |  |"<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
                for (int i = 0; i < jml_arr_makanan ; i++)
                {    
                cout<<"\t|  |   "<<i+1<<". "<<makanan[i]<<"  |     Rp "<<harga_makanan[i]<<"     |  |"<<endl;  
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;  
                }
                cout<<"\t|   ____________________________________________________________________   |"<<endl;
                cout<<"\t|  |       Minuman Khas Bogor & Unggulan Bogor       |       Harga      |  |"<<endl;
                cout<<"\t|  |                                                 |     per porsi    |  |"<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
                for (int i = 0; i < jml_arr_minuman ; i++)
                {    
                cout<<"\t|  |   "<<i+16<<". "<<minuman[i]<<" |     Rp "<<harga_minuman[i]<<"     |  |"<<endl;  
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;  
                }
                cout<<"\t|  |   26.  Kembali                                  |                  |  |"<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
                cout<<"\t|__________________________________________________________________________|"<<endl;
                enter();
                cout<<"\t! PESAN MAKANAN / MINUMAN SESUAI NOMOR  "<<endl;
                
                if(pus == max - 1){
                    enter();
                    cout<<"\tKeranjang penuh !!!"<<endl;
                    pesan_tambah = "\tKeranjang anda sudah penuh , ketik 'OKE' untuk bayar :  ";
                } else {
                    pus++;
                    cout<<"\t! PILIH [ 1 ]-[ 16 ] ?    :   "; cin>> pilih_makanan_minuman;
                    enter();

                    cout<<"\t __________________________________________________________________________"<<endl;
                    cout<<"\t|                                                                          |"<<endl;
                    cout<<"\t|  NOTE :                                                                  |"<<endl;
                    switch (pilih_makanan_minuman){
                        case 1 :
                            produk_di_beli[pus] = makanan[0];
                            harga[pus] = harga_makanan[0];
                            cout<<"\t|  pesanan Bolu Lapis Sangkuriang anda berhasil di tambahkan               |"<<endl;
                            break;
                            
                        case 2 :
                            produk_di_beli[pus] = makanan[1];
                            harga[pus] = harga_makanan[1];
                            cout<<"\t|  pesanan Lapis Bunder Talas Cokelat anda berhasil di tambahkan           |"<<endl;
                            break;
                            
                        case 3 :
                            produk_di_beli[pus] = makanan[2];
                            harga[pus] = harga_makanan[2];
                            cout<<"\t|  pesanan Lapis Bunder Talas Keju anda berhasil di tambahkan              |"<<endl;
                            break;  
                            
                        case 4 :
                            produk_di_beli[pus] = makanan[3];
                            harga[pus] = harga_makanan[3];
                            cout<<"\t|  pesanan Lapis Bunder Kreasi Cokelat & Blueberry anda berhasil           |"<<endl;
                            cout<<"\t|  di tambahkan                                                            |"<<endl;
                            break;
                            
                        case 5 :
                            produk_di_beli[pus] = makanan[4];
                            harga[pus] = harga_makanan[4];
                            cout<<"\t|  pesanan Cup Cake Talas Keju anda berhasil di tambahkan                  |"<<endl;
                            break;
                        
                        case 6 :
                            produk_di_beli[pus] = makanan[5];
                            harga[pus] = harga_makanan[5];
                            cout<<"\t|  pesanan Cup Cake Cokelat anda berhasil di tambahkan                     |"<<endl;
                            break;
                            
                        case 7 :
                            produk_di_beli[pus] = makanan[6];
                            harga[pus] = harga_makanan[6];
                            cout<<"\t|  pesanan Miss Pumpkin anda berhasil di tambahkan                         |"<<endl;
                            break;
                            
                        case 8 :
                            produk_di_beli[pus] = makanan[7];
                            harga[pus] = harga_makanan[7];
                            cout<<"\t|  pesanan Jojorong Bogor anda berhasil di tambahkan                       |"<<endl;
                            break;
                            
                        case 9 :
                            produk_di_beli[pus] = makanan[8];
                            harga[pus] = harga_makanan[8];
                            cout<<"\t|  pesanan Ketimus Bogor anda berhasil di tambahkan                        |"<<endl;
                            break;
                            
                        case 10 :
                            produk_di_beli[pus] = makanan[9];
                            harga[pus] = harga_makanan[9];
                            cout<<"\t|  pesanan Combro Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                            
                        case 11 :
                            produk_di_beli[pus] = makanan[10];
                            harga[pus] = harga_makanan[10];
                            cout<<"\t|  pesanan Misro Bogor anda berhasil di tambahkan                          |"<<endl;
                            break;
                            
                        case 12 :
                            produk_di_beli[pus] = makanan[11];
                            harga[pus] = harga_makanan[11];
                            cout<<"\t|  pesanan Kacang Bogor Istana anda berhasil di tambahkan                  |"<<endl;
                            break;
                            
                        case 13 :
                            produk_di_beli[pus] = makanan[12];
                            harga[pus] = harga_makanan[12];
                            cout<<"\t|  pesanan Bika Bogor Talubi anda berhasil di tambahkan                    |"<<endl;
                            break;
                            
                        case 14 :
                            produk_di_beli[pus] = makanan[13];
                            harga[pus] = harga_makanan[13];
                            cout<<"\t|  pesanan Dongkal anda berhasil di tambahkan                              |"<<endl;
                            break;
                        case 15 :
                            produk_di_beli[pus] = makanan[14];
                            harga[pus] = harga_makanan[14];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                            // ==== kondisi ketika pilih minuman
                        case 16 :
                            produk_di_beli[pus] = minuman[0];
                            harga[pus] = harga_makanan[0];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 17 :
                            produk_di_beli[pus] = minuman[1];
                            harga[pus] = harga_minuman[1];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 18 :
                            produk_di_beli[pus] = minuman[2];
                            harga[pus] = harga_minuman[2];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 19 :
                            produk_di_beli[pus] = minuman[3];
                            harga[pus] = harga_minuman[3];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 20 :
                            produk_di_beli[pus] = minuman[4];
                            harga[pus] = harga_minuman[4];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 21 :
                            produk_di_beli[pus] = minuman[5];
                            harga[pus] = harga_minuman[5];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 22 :
                            produk_di_beli[pus] = minuman[6];
                            harga[pus] = harga_minuman[6];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 23 :
                            produk_di_beli[pus] = minuman[7];
                            harga[pus] = harga_minuman[7];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 24 :
                            produk_di_beli[pus] = minuman[8];
                            harga[pus] = harga_minuman[8];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        case 25 :
                            produk_di_beli[pus] = minuman[9];
                            harga[pus] = harga_minuman[9];
                            cout<<"\t|  pesanan Asinan Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                        
                        case 26 :
                            pus--;
                            goto kembali_ke_pemilihan_menu;
                            break;
                        
                        default:
                            pus--;
                            cout<<"\t|  Nomor yang anda masukan tidak ada !                                     |"<<endl;
                            goto tambah;
                            break;
                        }
                            
                            
                    }


            } else if(pilih_menu == 02){
                cout<<"\t __________________________________________________________________________ "<<endl;
                cout<<"\t|                                                                          |"<<endl;
                cout<<"\t|   ____________________________________________________________________   |"<<endl;
                cout<<"\t|  |  Beragam Souvenir Khas Bogor & Unggulan Bogor   |       Harga      |  |"<<endl;
                cout<<"\t|  |                                                 |     per porsi    |  |"<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
            }
                
            // 
            
            cout<<"\t|  ......................................................................  |"<<endl;
            cout<<"\t|  PESANAN SAAT INI   :                                                    |"<<endl;
            for(int i = 0; i <= pus; i++){      
                if(produk_di_beli[i] == " "){
                  
                    produk_di_beli[i+1];
                    i-=-1;
                    pus++;
                    
                } else{
                    cout<<"\t|  "<<i+1<<". "<<produk_di_beli[i]<<"                            |"<<endl;
                }
                
            }
            enter();
                
            tambah :;
            cout<<"\t!  [Y = ya] / [T = tidak]"<<endl;
            oke:
            cout<<pesan_tambah; 
            if(pesan_tambah == "\tKeranjang anda sudah penuh , ketik 'OKE' untuk bayar :  "){
                cin>> penuh;
                if((penuh == "OKE") || (penuh == "oke")){
                    break;
                } else{
                    goto oke;
                }
               
            } else {
                cin>> tambah;
            }
            
            if(toupper(tambah) == 'T'){
                break;
            }
            if(toupper(tambah) != 'Y'){
                goto tambah;
            }
            sudah :;
                
        } while(toupper(tambah) == 'Y' );

        enter();
        system("cls");
        header();
        enter();
        cout<<"\t __________________________________________________________________________ "<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|  Pesanan Anda :                                                          |"<<endl;
        cout<<"\t|   ____________________________________________________________________   |"<<endl;
        cout<<"\t|  |                    Pesanan                      |      Harga       |  |"<<endl;
        cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
        for (int i = 0; i <= pus; i++)
        {    
            cout<<"\t|  |   "<<i+1<<". "<<produk_di_beli[i]<<"  |     Rp "<<harga[i]<<"     |  |"<<endl;  
            cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
            total += harga[i];  
        }
        cout<<"\t|  |                                                 |                  |  |"<<endl;
        cout<<"\t|  |                     TOTAL                       |     Rp "<<total<<"     |  |"<<endl;
        cout<<"\t|  |_________________________________________________|__________________|  |"<<endl; 
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|  ! CONFIRMASI PEMBAYARAN                                                 |"<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|   PILIH METODE PEMBAYARAN                                                |"<<endl;
        cout<<"\t|   ________________________                                               |"<<endl;
        cout<<"\t|  |   1. CAS               |                                              |"<<endl;
        cout<<"\t|  |   2. KARTU ATM         |                                              |"<<endl;
        cout<<"\t|  |________________________|                                              |"<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|  PILIH [1] - [2] ? : ";  cin>> pilih_metode;

        pembayaran:
        if(pilih_metode == 1){
            cout<<"\t|  Masukan Uang cas untuk membayar  :  ";
            cin>>user_bayar;
            if(user_bayar < total){
                cout<<"\t|  Uang anda kurang Pembayaran di tolak !!                                 |"<<endl;
                goto pembayaran;
            } else {
                pembayaran(user_bayar, total);
            }
        }
        
            

        

        
        



        ulang :
        cout<<"\t!  [Y = ya] / [T = tidak]"<<endl;
        cout<<"\t!  Kembali ke menu [ Y ] / [ T ] ? :   "; cin>>kembali_kemenu;
       
        if(toupper(kembali_kemenu) == 'T'){
            break;
        }
        if(toupper(kembali_kemenu) != 'Y'){
            goto ulang;
        }
        if(toupper(kembali_kemenu) == 'Y'){
            for(int i = 0; i<=pus; i++){
                pus = -1;
                produk_di_beli[i] = " ";
                harga[i] = 0;
                total = 0;
            }
        }
    }while (toupper(kembali_kemenu) == 'Y');
    

    
    
    
//  Ucapan selamat datang kepada user
//  Tampilkan menu menu yang ada di aplikasi
//  menunya antara lain => lihat produck, penjelasan mengenai prokabo, dan lainkali



    return 0;
}


