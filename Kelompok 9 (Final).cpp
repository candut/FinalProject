#include <iostream> //merupakan input output stream header standar dari c++
#include <string> //file header yang berguna untuk memanipulasi string
#include <cstdlib> //kibrary yang berisi fungsi umum dimana berguna untuk melakukan pengelolaan memori, pembuatan angka acak, dll
#include <ctime> //header yang berisi fungsi makro dan tipe untuk memanipulasi waktu
using namespace std; //mendeklarasikan kepada compailer bahwa kita akan menggunakan semua fungsi class, yang terdapat pada memori namespace std

const string CHOICE = "ABCDEFGHIJKLMNPQRSTUVWXYZabcdefghijklmnpqrstuvwxyz123456789!@#$%^&*"; //mendefinisikan sebuah varibel yang tidak dapat dirubah karena sudah ditetapkan oleh user

char randchar( int len ) { return CHOICE[ rand() % len ]; } //tipe data untuk karakter tunggal berupa alpabet ataupun angka

int main(){ //mendeklarasikan awal pengeksekusian program yang akan di lakukan oleh compailer
	cout<<"\n\t<|=====|PROGRAM JARINGAN|=====|>\n\n"<<endl; //string yang akan dihasilkan
    char pilihan, q; // tipe data dan inisialisasi
    string username, password; // tipe data dan inisialisasi
    
	int p,w=0,d=0;
 	srand(time(0));	
 	
    cout << "=== Silahkan Login ===" << endl;
    cout << "Username: ";
    cin >> username; // inputan ke variable username
    cout << "Password: ";
    cin >> password; // inputan ke variable password
	
	//Kondisi Argument saat login
    if (username == "admin"){
        if (password == "final"){
            cout << "Selamat datang!" << endl;
        } else {
            cout << "Password salah, coba lagi!" << endl;
        }
    } else {
        cout << "Anda tidak terdaftar" << endl;
    }

goto menu; // Function dan inisialisasi

pilihan:
	
switch(pilihan){
	case '1':
	        int a[4], i;
 
        cout<<"Masukkan IP address: ";
        for(i=0;i<4;i++)
                cin>>a[i];
 
        cout<<"\n IP Address:"<<a[0];
        cout<<"."<<a[1]<<"."<<a[2]<<"."<<a[3]<<"\n";
 
        cout<<"Ini Termasuk IP Address: ";
 
        if(a[0]>=0 && a[0]<=127)
        cout << "Class A" << endl;
        if(a[0]>127 && a[0]<191)
        cout << "Class B" << endl;
        if(a[0]>191 && a[0]<224)
        cout << "Class C" << endl;
        if(a[0]>224 && a[0]<=239)
        cout  <<"Class D" << endl;
        if(a[0]>239)
      	cout << "Class E" << endl;
      	
      	
      	// Percabangan yang disesuaikan kondisi jika ingin mengulang atau tidak
		std::cout << "Apakah anda Ingin lagi? [Y/N]";
		std::cin >> q;   
	
		if(q == 'Y' || q == 'y')
		{
			goto menu;
		}else if ( q == 'N' || q == 'n'){
			goto finish;
		}
	 	cin.get();
	 	break;
  
		
	case '2':		
		const int PWLEN = 10;
   		srand( time( 0 ) );
   		string password = "", PW;
  		int lenmax = CHOICE.size();

  		password += randchar( 25 );

   		for( int i = 2; i <= PWLEN; i++ ) password += randchar( lenmax );

   		cout << "Random password is: " << password << '\n';

  		// Percabangan yang disesuaikan kondisi jika ingin mengulang atau tidak
		std::cout << "Apakah anda Ingin lagi? [Y/N]";
		std::cin >> q;   
	
		if(q == 'Y' || q == 'y')
		{
			goto menu;
		}else if ( q == 'N' || q == 'n'){
			goto finish;
		}
	cin.get();
	break;
}
	
menu:
	cout << "1. IP Class Checker" << endl;
	cout << "2. Random Password Generator" << endl;
	cout << "Masukkan Pilihan Anda :" << pilihan;
	cin >> pilihan; // Inputan akan diarahkan ke variable pilihan
goto pilihan;
	// Kondisi jika memilih tidak mengulangi lagi akan menghentikan program
finish:
	cout << "selesai" << endl;
	return 0;
	
}
