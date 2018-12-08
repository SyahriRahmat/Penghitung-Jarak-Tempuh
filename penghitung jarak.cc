#include<iostream>
using namespace std;
int main (){
char ulang;

int v,s,t;
do {

cout<<"Masukkan Nilai s : ";
cin>>s;

cout<<"Masukkan Nilai t : ";
cin>>t;
v=s*t;
cout<<"Maka Nilai v adalah : "<<v<<endl;
//pengulangan
cout<<"Apakah anda ingin menghitung kembali ? ";
cin>>ulang;
}while(ulang=='Y'||ulang=='y');
cout<<"Senang Dapat Membantu"<<endl;
return 0;
}
