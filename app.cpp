#include <iostream>
using   namespace std;


void header(){
    cout<<"\t============================================================================"<<endl;   
    cout<<"\t||                                 PRODABO                                ||"<<endl;
    cout<<"\t||                        APLIKASI PEMESANAN ONLINE                       ||"<<endl;
    cout<<"\t||                           PRODUK DAERAH BOGOR                          ||"<<endl;
    cout<<"\t============================================================================"<<endl;
}
void enter(){
    cout<<endl;
}
int pembayaran(int user_bayar, int total){
    int kembalian;
    kembalian = user_bayar - total;

    return kembalian;
}
void head_nota(int id_nota){
    enter(); 
    cout<<"\t|                        PRODABO                         |"<<endl;
    cout<<"\t|                  PRODUK DAERAH BOGOR                   |"<<endl;
    cout<<"\t|                    SMK FAJAR UTAMA                     |"<<endl;
    cout<<"\t|                                                        |"<<endl;
    cout<<"\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    switch (id_nota)
    {
    case 0:
        id_nota += 71*5;
        break;
    case 1:
        id_nota *= 7*2*43;
        break;
    case 2:
        id_nota += 7*98;
        break;
    case 3:
        id_nota += 7*91;
        break;
    default:
        id_nota += 7*85;
        break;
    }
    cout<<"\t  Nota  :  110-"<<id_nota<<"                        Kasir  :  Deni "<<endl;
    cout<<"\t ________________________________________________________ "<<endl; 
    enter();
}
void struk_cash(int item, int total_sebelumnya, int diskon,int total, string metode, int user_bayar,int kembalian){
    cout<<"\t Total item       :    "<<item<<"                        Rp. "<<total_sebelumnya<<endl;
    enter();
    cout<<"\t Total diskon     :                             Rp. "<<diskon<<endl;
    enter();
    cout<<"\t Total pembayaran :                             Rp. "<<total<<endl;
    enter();
    cout<<"\t Metode pembayaran     "<<metode<<endl;
    enter();
    cout<<"\t Uang Tunai       :                             Rp. "<<user_bayar<<endl;
    enter();
    cout<<"\t Uang Kembalian   :                             Rp. "<<kembalian<<endl;
    enter();
    cout<<"\t ________________________________________________________ "<<endl;
    cout<<"\t Tgl              14-02-2023 "<<endl;
    cout<<"\t Kode transaksi   123401"<<endl;
    cout<<"\t ________________________________________________________ "<<endl;
    cout<<"\t                       HATUR NUHUN                        "<<endl;
    cout<<"\t ________________________________________________________ "<<endl;
    enter();
    enter();
    cout<<"\t          |||||||||||||||||||||||||||||||||||||           "<<endl;
    cout<<"\t          |||||||||||||||||||||||||||||||||||||           "<<endl;
    cout<<"\t                     prodabo.debo.com                     "<<endl;
}
void struk_via_atm(int item, int total_sebelumnya, int diskon,int total, string metode, int norek,string bank){
    cout<<"\t Total item       :    "<<item<<"                        Rp. "<<total_sebelumnya<<endl;
    enter();
    cout<<"\t Total diskon     :                             Rp. "<<diskon<<endl;
    enter();
    cout<<"\t Total pembayaran :                             Rp. "<<total<<endl;
    enter();
    cout<<"\t Metode pembayaran     "<<metode<<endl;
    enter();
    cout<<"\t Bank             :                          "<<bank<<endl;
    enter();
    cout<<"\t No rek Tagihan   :                          "<<norek<<endl;
    enter();
    cout<<"\t ________________________________________________________ "<<endl;
    cout<<"\t Tgl              14-02-2023 "<<endl;
    cout<<"\t Kode transaksi   123401"<<endl;
    cout<<"\t ________________________________________________________ "<<endl;
    cout<<"\t                       HATUR NUHUN                        "<<endl;
    cout<<"\t ________________________________________________________ "<<endl;
    enter();
    enter();
    cout<<"\t          |||||||||||||||||||||||||||||||||||||           "<<endl;
    cout<<"\t          |||||||||||||||||||||||||||||||||||||           "<<endl;
    cout<<"\t                     prodabo.debo.com                     "<<endl;
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
        " Batik Handayani Geulis                  ", " Batik Mago                              ", " Carlin Berlian Fatih                    ", " Cyqee Batik                             ", " Kin N Ken                               ", " Sanggar Tumaritis                       ", " Bambo Tronic khas Bogor                 ", " Kujang                                  ", " Wayang Golek                            ", " Wayang Bambu khas Bogor                ", " Lesung Keramik                         ", " Tas Daun Pandan khas Bogor             ", " Ecodeo khas Bogor                      ", " Kaos Unchal khas Bogor                 ", " Topeng Jigprak khas bogor              "
    };
    int harga_souvenir[] = {
        90000, 85000, 95000, 70000, 80000, 95000, 90000, 92000, 98000, 98000, 85000, 70000, 90000, 90000, 84000
    };
    int jml_arr_souvenir = sizeof(souvenir)/sizeof(*souvenir);

    // 
    int isi = 0;
    string voucer,kode;
    string jawab_quiz;

    // variable pemilihan
    int pilih_menu, pilih_makanan_minuman, pilih_barang, pilih_metode;
    // Ketentuan dari pembelanjaan 
    int total = 0, max = 8, pus = -1, user_bayar,diskon,kembalian;
    string produk_di_beli[max];
    int harga[max];
    char pilih, kembali_kemenu, tambah;
    string penuh,metode;

// =======================================        ========================================== 
    cout<<"\t============================================================================"<<endl;   
    cout<<"\t||              LOGIN TERLEBIH DAHULU UNTUK MEMULAI APLIKASI              ||"<<endl;
    cout<<"\t============================================================================"<<endl;
    cout<<"\tMasukan Nama Anda  : ";
    cin.getline (user, 30);
    cout<<"\t........................"<<endl;
    cout<<"\tMasukan Email Anda : ";
    cin.getline (email, 20);
    cout<<"\t........................"<<endl;
    

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
        cout<<"\t   Hallo   "<<user<<"  selamat Berkunjung di Aplikasi PRODABO               "<<endl;
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
        cout<<"\t|     | [ 01 ] | Produk Makanan/Minuman Khas Bogor & Unggulan Bogor |      |"<<endl;
        cout<<"\t|     | [ 02 ] | Produk Kerajinan Unik Khas Bogor & Unggulan Bogor  |      |"<<endl;
        cout<<"\t|     | [ 03 ] | Debo >.<  bagi bagi vocher                         |      |"<<endl;
        cout<<"\t|     |________|____________________________________________________|      |"<<endl;
        cout<<"\t|__________________________________________________________________________|"<<endl;
        enter();
            
        pilih_menu :
        cout<<"\t! PILIH [ 01 ]-[ 03 ] ?   :   "; cin>> pilih_menu;
        if(pilih_menu != 01 && pilih_menu != 02 && pilih_menu != 03){
            goto pilih_menu;
        }
        enter();
        system("CLS");
        enter();

        do{
                          
            kembali_ke_pemilihan:;
            string pesan_tambah = "\t!  Mau menambahkan pesanan [ Y ] / [ T ]?  :   ";
            if(pilih_menu == 01) {   // Menu makanan 
                header();
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
                    cout<<"\t! PILIH [ 1 ]-[ 26 ] ?    :   "; cin>> pilih_makanan_minuman;
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
                            harga[pus] = harga_minuman[0];
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
                header();
                cout<<"\t __________________________________________________________________________ "<<endl;
                cout<<"\t|                                                                          |"<<endl;
                cout<<"\t|   ____________________________________________________________________   |"<<endl;
                cout<<"\t|  |  Beragam Souvenir Khas Bogor & Unggulan Bogor   |       Harga      |  |"<<endl;
                cout<<"\t|  |                                                 |     per porsi    |  |"<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
                for (int i = 0; i < jml_arr_souvenir ; i++)
                {    
                cout<<"\t|  |   "<<i+1<<". "<<souvenir[i]<<"  |     Rp "<<harga_souvenir[i]<<"     |  |"<<endl;  
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;  
                }
                cout<<"\t|  |   16.  Kembali                                  |                  |  |"<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
                cout<<"\t|__________________________________________________________________________|"<<endl;
                if(pus == max - 1){
                    enter();
                    cout<<"\tKeranjang penuh !!!"<<endl;
                    pesan_tambah = "\tKeranjang anda sudah penuh , ketik 'OKE' untuk bayar :  ";
                } else {
                    pus++;
                    cout<<"\t! PILIH [ 1 ]-[ 16 ] ?    :   "; cin>> pilih_barang;
                    enter();

                    cout<<"\t __________________________________________________________________________"<<endl;
                    cout<<"\t|                                                                          |"<<endl;
                    cout<<"\t|  NOTE :                                                                  |"<<endl;
                    switch (pilih_barang){
                        case 1 :
                            produk_di_beli[pus] = souvenir[0];
                            harga[pus] = harga_souvenir[0];
                            cout<<"\t|  pesanan Batik Handayani Geulis anda berhasil di tambahkan               |"<<endl;
                            break;
                            
                        case 2 :
                            produk_di_beli[pus] = souvenir[1];
                            harga[pus] = harga_souvenir[1];
                            cout<<"\t|  pesanan Batik Mago anda berhasil di tambahkan                           |"<<endl;
                            break;
                            
                        case 3 :
                            produk_di_beli[pus] = souvenir[2];
                            harga[pus] = harga_souvenir[2];
                            cout<<"\t|  pesanan Carlin Berlian Fatih anda berhasil di tambahkan                 |"<<endl;
                            break;  
                            
                        case 4 :
                            produk_di_beli[pus] = souvenir[3];
                            harga[pus] = harga_souvenir[3];
                            cout<<"\t|  pesanan Cyqee Batik anda berhasil di tambahkan                          |"<<endl;
                            break;
                            
                        case 5 :
                            produk_di_beli[pus] = souvenir[4];
                            harga[pus] = harga_souvenir[4];
                            cout<<"\t|  pesanan Kin N Ken anda berhasil di tambahkan                            |"<<endl;
                            break;
                        
                        case 6 :
                            produk_di_beli[pus] = souvenir[5];
                            harga[pus] = harga_souvenir[5];
                            cout<<"\t|  pesanan Sanggar Tumaritis anda berhasil di tambahkan                    |"<<endl;
                            break;
                            
                        case 7 :
                            produk_di_beli[pus] = souvenir[6];
                            harga[pus] = harga_souvenir[6];
                            cout<<"\t|  pesanan Bambo Trunic Khas Bogor anda berhasil di tambahkan              |"<<endl;
                            break;
                            
                        case 8 :
                            produk_di_beli[pus] = souvenir[7];
                            harga[pus] = harga_souvenir[7];
                            cout<<"\t|  pesanan Kujang Bogor anda berhasil di tambahkan                         |"<<endl;
                            break;
                            
                        case 9 :
                            produk_di_beli[pus] = souvenir[8];
                            harga[pus] = harga_souvenir[8];
                            cout<<"\t|  pesanan Wayang Golek Khas Bogor anda berhasil di tambahkan              |"<<endl;
                            break;
                            
                        case 10 :
                            produk_di_beli[pus] = souvenir[9];
                            harga[pus] = harga_souvenir[9];
                            cout<<"\t|  pesanan Wayang Bambu Khas Bogor anda berhasil di tambahkan              |"<<endl;
                            break;
                            
                        case 11 :
                            produk_di_beli[pus] = souvenir[10];
                            harga[pus] = harga_souvenir[10];
                            cout<<"\t|  pesanan Lesung Keramik anda berhasil di tambahkan                       |"<<endl;
                            break;
                            
                        case 12 :
                            produk_di_beli[pus] = souvenir[11];
                            harga[pus] = harga_souvenir[11];
                            cout<<"\t|  pesanan Tas Daun Pandan Khas Bogor anda berhasil di tambahkan           |"<<endl;
                            break;
                            
                        case 13 :
                            produk_di_beli[pus] = souvenir[12];
                            harga[pus] = harga_souvenir[12];
                            cout<<"\t|  pesanan Ekodeo Khas Bogor anda berhasil di tambahkan                    |"<<endl;
                            break;
                            
                        case 14 :
                            produk_di_beli[pus] = souvenir[13];
                            harga[pus] = harga_souvenir[13];
                            cout<<"\t|  pesanan Kaos Unchal Khas Bogor anda berhasil di tambahkan               |"<<endl;
                            break;
                        case 15 :
                            produk_di_beli[pus] = souvenir[14];
                            harga[pus] = harga_souvenir[14];
                            cout<<"\t|  pesanan Topeng Jigprak Khas Bogor anda berhasil di tambahkan            |"<<endl;
                            break;
                            
                        case 16 :
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
            } else if(pilih_menu == 03){
                cout<<"\t ___________________________________________________________________________"<<endl;
                cout<<"\t ***************************************************************************"<<endl;
                cout<<"\t                                                                            "<<endl;
                cout<<"\t HAI SOBAT DEBO !!"<<endl;
                cout<<"\t -----------------"<<endl;
                cout<<"\t Gimana kamu sudah mencoba beberapa produk unggulan daerah kami, ayo pesan  "<<endl;
                cout<<"\t sekarang juga , debo yakin kamu pasti suka.                                "<<endl;
                cout<<"\t Ngomong-ngomong bentar lagi bulan puasa hehe ..                            "<<endl;
                cout<<"\t Oke deh debo bagi-bagi vocher gratis buat custemer debo                    "<<endl;
                cout<<"\t Voche ini bisa kamu pake buat diskon pembayaran lumayankan..               "<<endl;
                cout<<"\t etss tapi ada syaratnya kamu harus jawab dulu quizz.. hehe gampang kok     "<<endl;
                enter();
                cout<<"\t Ada beberapa soal yang akan menjadi tantangan kamu buat mendapatkan     "<<endl;
                cout<<"\t vocher .. kamu siap ? (siap)/(tidak) " ; cin>> jawab_quiz;
                cout<<"\t __________________________________________________________________________ "<<endl;
                if(jawab_quiz == "siap" || jawab_quiz == "SIAP"){
                    isi++;
                    switch (isi)
                    {
                    case 1:
                        cout<<"\t|      _____________________________________________________________       |"<<endl;
                        cout<<"\t|     |   QD                                                        |      |"<<endl;
                        cout<<"\t|     |      Kota Bogor adalah suatu pusaka dari Kerajaan           |      |"<<endl;
                        cout<<"\t|     |      Pajajaran, hal ini dilukiskan dengan bentuk..  ??      |      |"<<endl;
                        cout<<"\t|     |_____________________________________________________________|      |"<<endl;
                        cout<<"\t|      jawaban anda  ?.. ";cin>> jawab_quiz;
                        if(jawab_quiz == "kujang" || jawab_quiz == "Kujang"){
                            
                            voucer = "X5D701";
                            cout<<"\t|      _____________________________________________________________       |"<<endl;
                            cout<<"\t|      SELAMAT Jawaban kamu benar                                          |"<<endl; 
                            cout<<"\t|      kamu berhak mendapatkan hadiah voucer                               |"<<endl; 
                            cout<<"\t|      Kode vocher  | "<<voucer<<" |                                             |"<<endl; 
                            cout<<"\t|      _____________________________________________________________       |"<<endl; 
                        } else{
                            goto quiz_salah;
                        }
                        break;
                    
                    default:
                        cout<<"\t|      _____________________________________________________________       |"<<endl;
                        cout<<"\t|     |   Maaf Quizz dari debo sudah habis ..                       |      |"<<endl;
                        cout<<"\t|     |   Sampai jumpa kembali                                      |      |"<<endl;
                        cout<<"\t|     |_____________________________________________________________|      |"<<endl;
                        break;
                    }
                    
                }else if(jawab_quiz == "tidak"){
                    quiz_salah:
                    cout<<"\t|      _____________________________________________________________       |"<<endl;
                    cout<<"\t|     |   Baik sobat Debo kamu disa mampir di lain waktu            |      |"<<endl;
                    cout<<"\t|     |   Sampai jumpa kembali                                      |      |"<<endl;
                }
                harus_ke_menu:
                enter();
                cout<<"\t!  Kembali ke menu !! [ya] : "; cin>> jawab_quiz;
                if(jawab_quiz == "ya" || jawab_quiz == "YA"){
                    goto kembali_ke_pemilihan_menu;
                } else{
                    goto harus_ke_menu;
                }
                
                
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
                    string spasi ="";
                    if(produk_di_beli[i].length() == 40){
                        spasi += " ";
                    }
                    cout<<"\t|  "<<i+1<<". "<<produk_di_beli[i]<<spasi<<"                            |"<<endl;
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
            string spasi ="";
            if(produk_di_beli[i].length() == 40){
                spasi += " ";
            }
            cout<<"\t|  |   "<<i+1<<". "<<produk_di_beli[i]<<spasi<<"  |     Rp "<<harga[i]<<"     |  |"<<endl;  
            cout<<"\t|  |_________________________________________________|__________________|  |"<<endl;
            total += harga[i];  
        }
        int total_sebelumnya = total;
        string dinding = "     |  |"; 
        if(total > 100000){
            dinding = "    |  |"; // ketika total > dari 100000 maka dinding nya tambah spasi
        }
        cout<<"\t|  |                                                 |                  |  |"<<endl;
        cout<<"\t|  |                     TOTAL                       |     Rp "<<total<<dinding<<endl;
        cout<<"\t|  |_________________________________________________|__________________|  |"<<endl; 
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|   ! CONFIRMASI PEMBAYARAN                                                |"<<endl;
        cout<<"\t                                                                            "<<endl;
        cout<<"\t!   [Y = ya] / [T = tidak]"<<endl;
        cout<<"\t!   PUNYA VOCHER DISCON ? "; cin>> pilih;
        enter();
        if(toupper(pilih) == 'Y'){
            masukan_vocher:
            cout<<"\t|   Masukan voucher discon kamu : ";cin>> kode;
            if(kode == voucer){
                cout<<"\t|   Berhasil..                                                             |"<<endl;
                if (total <= 10000){
                    diskon = 5000;
                    total -= diskon;
                }else if(total <= 20000){
                    diskon = 10000;
                    total -= diskon;
                }else if(total <= 50000){
                    diskon = 20000;
                    total -= diskon;
                }else if(total <= 100000){
                    diskon = 40000;
                    total -= diskon;
                }else if(total > 100000){
                    diskon = 70000;
                    total -= diskon;
                }
                cout<<"\t|   ____________________________________________________________________   |"<<endl;
                cout<<"\t|  |                                                 |                  |  |"<<endl;
                cout<<"\t|  |                     TOTAL                       |     Rp "<<total<<dinding<<endl;
                cout<<"\t|  |_________________________________________________|__________________|  |"<<endl; 
            } else{
                cout<<"\t|   GAGAL..                                                                |"<<endl;
                cout<<"\t|   Kode vocher salah !!                                                   |"<<endl;
                cout<<"\t                                                                            "<<endl;
                cout<<"\t!   [Y = ya] / [T = tidak]"<<endl;
                cout<<"\t!   NYOBA LAGI ? "; cin>> pilih;
                if(toupper(pilih) == 'Y'){
                    goto masukan_vocher;
                } else{
                    diskon = 0;
                }

            }
        } else if(toupper(pilih) == 'T'){
            diskon = 0;
        }
        cout<<"\t                                                                            "<<endl;
        cout<<"\t|                                                                          |"<<endl;
        cout<<"\t|   PILIH METODE PEMBAYARAN                                                |"<<endl;
        cout<<"\t|   ________________________                                               |"<<endl;
        cout<<"\t|  |   1. CASH              |                                              |"<<endl;
        cout<<"\t|  |   2. KARTU ATM         |                                              |"<<endl;
        cout<<"\t|  |________________________|                                              |"<<endl;
        pilih_metode:
        cout<<"\t|  PILIH [1] - [2] ? : ";  cin>> pilih_metode;
        enter();
        pembayaran:
        int id_nota;
        if(pilih_metode == 1){
            metode = "CASH";
            cout<<"\t|  Masukan Uang cash untuk membayar  :  Rp. ";
            cin>>user_bayar;
            if(user_bayar < total){
                cout<<"\t|  Uang anda kurang Pembayaran di tolak !!                                 |"<<endl;
                goto pembayaran;
            } else {
                
                kembalian = pembayaran(user_bayar, total);

            }
            system("cls");
            
            head_nota(pus);
            for (int i = 0; i <= pus; i++){    
                string spasi ="";
                if(produk_di_beli[i].length() == 40){
                    spasi += " ";
                }
                cout<<"\t"<<produk_di_beli[i]<<spasi<<"        Rp "<<harga[i]<<"  "<<endl;  
                enter(); 
            }
            cout<<"\t ________________________________________________________ "<<endl;
            enter();
            struk_cash(pus+1,total_sebelumnya,diskon,total,metode,user_bayar,kembalian);


        }else if(pilih_metode == 2){
            metode = "KARTU ATM";
            string bank;
            cout<<"\t|  VIA BANK   ?                                                            |"<<endl;
            cout<<"\t|   ________________________                                               |"<<endl;
            cout<<"\t|  |   1. BANK BRI          |                                              |"<<endl;
            cout<<"\t|  |   2. BANK BCA          |                                              |"<<endl;
            cout<<"\t|  |   3. BANK BNI          |                                              |"<<endl;
            cout<<"\t|  |________________________|                                              |"<<endl;
            cout<<"\t|  PILIH [1] - [3] ? : ";  cin>> pilih_metode;
            switch (pilih_metode)
            {
            case 1:
                bank = "BRI";
                break;
            case 2:
                bank = "BCA";
                break;
            case 3:
                bank = "BNI";
                break;
            
            default:
                break;
            }
            cout<<"\t|  Masukan no rekening anda : ";
            cin>>user_bayar;
            system("cls");

            head_nota(pus);
            for (int i = 0; i <= pus; i++){    
                string spasi ="";
                if(produk_di_beli[i].length() == 40){
                    spasi += " ";
                }
                cout<<"\t"<<produk_di_beli[i]<<spasi<<"        Rp "<<harga[i]<<"  "<<endl;  
                enter(); 
            }
            cout<<"\t ________________________________________________________ "<<endl;
            enter();
            struk_via_atm(pus+1,total_sebelumnya,diskon,total,metode,user_bayar,bank);

            
            
        } else{
            goto pilih_metode;
        }
        
        enter();    
        enter();    
        enter();    
        enter();    
        enter();    
        enter();    
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


