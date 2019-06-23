#include <iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
	static const char alphnum[]="0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
	int strLen=sizeof(alphnum)-1; 
	char GenRand()
{
return alphnum[rand()%strLen];	
}

int main(){
	cout<<"\n\t<|=====|PROGRAM JARINGAN|=====|>\n\n"<<endl;
    char pilihan, q;
    string username, password;
    
	int p,w=0,d=0;
 	srand(time(0));	
 	
    cout << "=== Silahkan Login ===" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "admin"){
        if (password == "final"){
            cout << "Selamat datang!" << endl;
        } else {
            cout << "Password salah, coba lagi!" << endl;
        }
    } else {
        cout << "Anda tidak terdaftar" << endl;
    }

goto menu;

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
		cout<<"Masukkan Panjang Password yang dibutuhkan: ";
  		cin>>p;
  		cout<<p<<endl;
 		cout<<"Password Anda Adalah: ";
 		cin>>p;
 		
  		P:
  		char C;
 		string D;
 		
  		for(int z=0; z < p; z++) 
   		{ 
    	C=GenRand();
     	D+=C;
     	if(isdigit(C))
     	{
         p++;
     	}
    	if(C=='!' || C=='@' || C=='$' || C=='%' ||  C=='^' || C=='&'|| C=='*'|| C=='#')
    	{
        	d++;
    		}
   	}
   	if(p>2 && (d==0 || w==0))
   {
      goto P; 
   }
   cout<<D; 
  
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
	cin >> pilihan;
goto pilihan;
	
finish:
	cout << "selesai" << endl;
	return 0;
	
}
