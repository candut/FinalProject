#include <iostream> //merupakan input output stream header standar dari c++
#include <string> //file header yang berguna untuk memanipulasi string
#include <cstdlib> //kibrary yang berisi fungsi umum dimana berguna untuk melakukan pengelolaan memori, pembuatan angka acak, dll
#include <ctime> //header yang berisi fungsi makro dan tipe untuk memanipulasi waktu
using namespace std; //mendeklarasikan kepada compailer bahwa kita akan menggunakan semua fungsi class, yang terdapat pada memori namespace std

const string CHOICE = "ABCDEFGHIJKLMNPQRSTUVWXYZabcdefghijklmnpqrstuvwxyz123456789!@#$%^&*"; //mendefinisikan sebuah varibel yang tidak dapat dirubah karena sudah ditetapkan oleh user

char randchar( int len ) { return CHOICE[ rand() % len ]; } //tipe data untuk karakter tunggal berupa alpabet ataupun angka

int main(){ //mendeklarasikan awal pengeksekusian program yang akan di lakukan oleh compailer
	cout<<"\n\t<|=====|PROGRAM JARINGAN|=====|>\n\n"<<endl; //string yang akan dihasilkan
    char pilihan, q; //menentukan pilihan pada menu di case
    string username, password; //mendeklarasikan username dan password
    
	int p,w=0,d=0; //mendeklarasikan data berupa integer
 	srand(time(0));	//untuk melakukan pengacakan
 	
    cout << "=== Silahkan Login ===" << endl; //string yang akan dihasilkan
    cout << "Username: "; //string yang dihasilkan dan mengambil dari data yang sudah diinputkan pada data username
    cin >> username; //memanggil data dari username untuk masuk ke dalam string username (proses input)
    cout << "Password: "; //string yang dihasilkan dan mengambil dari data yang sudah diinputkan pada data password
    cin >> password; //memanggil data dari password untuk masuk kedalam string password (proses input)

    if (username == "admin"){ //data yang ada pada string username
        if (password == "final"){ //data yang ada pada sting password
            cout << "Selamat datang!" << endl; //string yang dihasilkan jika proses pencocokan benar
        } else { //jika proses salah
            cout << "Password salah, coba lagi!" << endl; //string yang akan dihasilkan
        }
    } else { //jika proses pencocokan salah
        cout << "Anda tidak terdaftar" << endl; //string yang dihasilkan saat proses salah
    }

goto menu; //perintah untuk kembali ke menu

pilihan: //mendeklarasikan inisialisasi pemanggilan dari switch ke pilihan
	
switch(pilihan){ //mendeklarasikan pilihan sebagai proses yang akan di jalankan
	case '1': //mengawali case 1
	        int a[4], i; //mendeklarasikan data du case 1 berupa integer
 
        cout<<"Masukkan IP address: "; //string yang dihasilkan
        for(i=0;i<4;i++) //mendeklarasikan i sebagai data yang akan dihasilkan pada proses case 1
                cin>>a[i]; //melakukan proses input dari i
 
        cout<<"\n IP Address:"<<a[0]; //string yang dihasilkan
        cout<<"."<<a[1]<<"."<<a[2]<<"."<<a[3]<<"\n"; //string yang akan dihasilkan dan diisi dengan IP
 
        cout<<"Ini Termasuk IP Address: "; //string yang dihasilkan
 
        if(a[0]>=0 && a[0]<=127) //range untuk IP class A berkisar dari 0 sampai atau kurang dari sama dengan 127
        cout << "Class A" << endl; //string yang akan dihasilkan
        if(a[0]>127 && a[0]<191) //range untuk IP class B berkisar dari 127 sampai atau kurang dari sama dengan 191
        cout << "Class B" << endl; //string yang akan dihasilkan
        if(a[0]>191 && a[0]<224) //range untuk IP class C berkisar dari 191 sampai atau kurang dari sama dengan 224
        cout << "Class C" << endl; //string yang akan dihasilkan
        if(a[0]>224 && a[0]<=239) //range untuk IP class D berkisar dari 224 sampai atau kurang dari sama dengan 239
        cout  <<"Class D" << endl; //string yang akan dihasilkan
        if(a[0]>239) //data yang dimasukkan melebihi 239 akan tergolong dalam kategori IP Class E
      	cout << "Class E" << endl; //string yang akan dihasilkan
      	
		cout << "Apakah anda Ingin lagi? [Y/N]"; //string yang akan dihasilkan
		cin >> q; //input dari q
	
		if(q == 'Y' || q == 'y') //proses persetujuan pengulangan program dan mendeklarasikan inisialisasi
		{
			goto menu; //perintah untuk kembali ke menu
		}else if ( q == 'N' || q == 'n'){ //proses penolakan dari pengulangan program
			goto finish; //menuju menu finish
		}
	 	cin.get(); //proses input dari get
	 	break; //proses untuk melakukan pelompatan perintah.
  
		
	case '2': //mengawali case 2
		const int PWLEN = 10; //variabel konstan dengan panjang sebanyak 10
   		srand( time( 0 ) ); //proses untuk melakukan pengacakan
   		string password = "", PW; //variabel string untuk password
  		int lenmax = CHOICE.size(); //mendeklarasikan panjang dari password sepanjang pwlen 

  		password += randchar( 25 ); //proses untuk melakukan random dari char yang sudah ada

   		for( int i = 2; i <= PWLEN; i++ ) password += randchar( lenmax ); //proses penggabungan dari masing-masing variabel dengan lenmax yang ditentukan

   		cout << "Random password is: " << password << '\n'; //string yang dihasilkan dan output password yang sudah teracak

  
		cout << "Apakah anda Ingin lagi? [Y/N]"; //string yang akan dihasilkan
		cin >> q; //input dari q
	
		if(q == 'Y' || q == 'y') //proses persetujuan pengulangan program dan mendeklarasikan inisialisasi
		{
			goto menu; //perintah untuk kembali ke menu
		}else if ( q == 'N' || q == 'n'){ //proses penolakan dari pengulangan program
			goto finish; //menuju menu finish
		}
	cin.get(); //proses input dari get
	break; //proses untuk melakukan pelompatan perintah.
}
	
menu: //variabel menu yang akan dipanggil pada program saat berjalan
	cout << "1. IP Class Checker" << endl; //string yang akan dihasilkan
	cout << "2. Random Password Generator" << endl; //string yang akan dihasilkan
	cout << "Masukkan Pilihan Anda :" << pilihan; //string yang akan dihasilkan dan pilihan untuk program yang akan dieksekusi
	cin >> pilihan; //input dari pilihan untuk dilakukan proses pada program
goto pilihan; //perintah untuk melakukan proses yang dipilih
	
finish: //perintah untuk mengakakhiri program
	cout << "selesai" << endl; //string yang akan dihasilkan
	return 0; //proses pada program terlah berhenti
	
}
