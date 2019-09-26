#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    double rp,hasil;
    cout <<"===================no 1================================="<<endl;
    cout << "MASUKAN JUMLAH UANG RUPIAH : rp  ";
   cin >> rp;
   hasil=rp/14500;
   cout << "KONVERSI JUMLAH UANG DOLAR : $ " << hasil << endl;

   cout <<"===================no 2==================================" << endl;
   double bb,tb,bmi;
   cout << " MENENTUKAN BERAT BADAN" << endl;
   cout << "berat badan : ";
   cin >> bb;
   cout << "tinggi badan :";
   cin >> tb;
   bmi=bb/tb*tb;
   if (bmi <=18.5 ){
    cout << " UNDERWIGHT " << endl;
        }else if (bmi >=22.9){
        cout << "OVERWIGHT" << endl;

   }else {
       cout << "BERAT BADAN IDEAL" << endl;
       }
cout << "======================no 3=================================" << endl;
string nama,jk,kelas;
int indo,inggris,mtk,prod;
int total,rata2,predikat;

cout << "NAMA :";
cin >> nama;
cout << "KELAS :";
cin >> kelas;
cout << "JK :";
cin >> jk;
cout << "B.Indonesia :";
cin >> indo;
cout << "B.Inggris :";
cin >> inggris;
cout << "Matematika :";
cin >> mtk;
cout << "Produktif :";
cin >> prod;

 total= indo+inggris+mtk+prod;
 cout << "total =" << total <<endl;

 rata2= total/4;
 cout << "rata2= " <<rata2<<endl;
 if (rata2>=75)
    cout << "lulus" <<endl;
 else
    cout << "tidak lulus" << endl;

  if (rata2 >= 90)
	{
		cout << "Peredikat A" << endl;
	}
	else if (rata2 >=80)
	{
		cout << "Predikat B" << endl;
	}
	else if (rata2 >=70)
	{
		cout << "Predikat C" << endl;
	}
	else if (rata2 >=60)
	{
		cout << "Predikat D" << endl;
	}
	else if (rata2 <= 60)
	{
		cout << "PrediKat E" << endl;
	}
	else
	{
		cout << "Tidak Diketahui" << endl;
   	}
      cout << "===================no 4=============================" << endl;

   string plat;
	long kode,jam,total1,j1,j2,bayar,kembalian;
	cout<<"                       APLIKASI PARKIR                             "<<endl;
	cout<<"___________________________________________________________________"<<endl;
	cout<<"DAFTAR TARIF                                                       "<<endl;
	cout<<"___________________________________________________________________"<<endl;
	cout<<"KODE KENDARAAN     JENIS             JAM PERTAMA     JAM BERIKUTNYA"<<endl;
	cout<<"      1            MOTOR             3000            1000          "<<endl;
	cout<<"      2            MOBIL				5000            3000          "<<endl;
	cout<<"___________________________________________________________________"<<endl;
	cout<<"MASUKKAN PLAT KENDARAAN :";
	cin>>plat;
	cout<<endl;
	cout<<"MASUKKAN KODE KENDARAAN :";
	cin>>kode;
	if(kode==1){
	  cout<<"JENIS              : MOTOR"<<endl;
	  cout<<"JAM PERTAMA        : 3000 "<<endl;
	  cout<<"JAM BERIKUTNYA     : 1000 "<<endl;
	  j1=3000, j2=1000;
	}else if(kode==2){
	  cout<<"JENIS              : MOBIL"<<endl;
	  cout<<"JAM PERTAMA        : 5000  "<<endl;
	  cout<<"JAM BERIKUTNYA     : 3000  "<<endl;
	  j1=5000, j2=3000;
	}else {
		cout<<"KODE KENDARAAN TIDAK VALID"<<endl;
	}
	cout<<"___________________________________________________________________"<<endl;
	cout<<"LAMA PARKIR (JAM) :";
	cin>>jam;
	cout<<endl;
	if(kode==1){
	if(jam>=24){
		total1=(j1+(j2*(jam-1)))+25000;}}
	else if(jam<=24){
		total1=(j1+(j2*(jam-1)));}
	if(kode==2){
	if(jam>=24){
		total1=(j1+(j2*(jam-1)))+50000;}}
	else if(jam<24)
		{total1=j1+(j2*(jam-1));}
	cout<<"___________________________________________________________________"<<endl;

	cout<<"TOTAL     :"<<total1<<endl;
	cout<<"BAYAR     :";
	cin>>bayar, cout<<endl, kembalian=bayar-total1;
	cout<<"KEMBALIAN :"<<kembalian<<endl;
	cout<<"TERIMAKASIH :)"<<endl;
	cout << "==========================no 5==================================="<<endl;

cout << "                                       *                                                     "<<endl;
	cout << "                                      * *                                                    "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                    *** ***                                                  "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                ******* *******                                              "<<endl;
	cout << "                               ******** ********                                             "<<endl;
	cout << "                             ********** *********                                            "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                    *** ***                                                  "<<endl;
	cout << "                                     *   *                                                   "<<endl;
	cout << "                                      * *                                                    "<<endl;
	cout << "                                       *                                                     "<<endl;

cout << "=======================================no 6=========================="<<endl;
cout << "Looping Hasil Penjumlahan" <<endl;
	double a,b,c,output;
	cout << "Masukkan angka :";
	cin >> a;
	cout << "Masukkan angka :";
	cin >> b;
	cout << "Masukkan angka:";
	cin >> c;
	cout << "output :" << a+b+c;

cout << "=======================================no 7=========================="<<endl;
int tahun;
			cout<<"Menentukan Tahun Kabisat"<<endl;
			cout<<"Masukan Tahun :";
			cin>> tahun;
			if (tahun<1582){
				cout<<"Not within the gregorian calender period";}
			else if (4!=0){
				cout<<"Common Year";}
			else if (100!=0){
				cout<<"Leap Year";}
			else if (400!=0){
				cout<<"Common Year";}
			else
				cout<<"Leap Year";
			cout<<endl;
cout << "=======================================no 8=========================="<<endl;
	for (int z = 1; z <= 256; z = z + z){
		cout << z << endl;
	}


cout << "=======================================no 9=========================="<<endl;
	int g;
	cout << "masukan angka bulan = ";
	cin >> g;
	if (g == 1){
	cout << "Konversi Bulan      = januari"<<endl;
	}
	else if (g == 2 ){
	cout << "Konversi Bulan      = februari"<<endl;
	}
	else if (g == 3 ){
	cout << "Konversi Bulan = maret"<<endl;
	}
	else if (g == 4 ){
		cout << "Konversi Bulan = april"<<endl;
	}
	else if (g == 5 ){
		cout << "Konversi Bulan = mei"<<endl;
	}
	else if (g == 6 ){
		cout << "Konversi Bulan = juni"<<endl;
	}
	else if (g == 7 ){
		cout << "Konversi Bulan = juli"<<endl;
	}
	else if (g == 8 ){
		cout << "Konversi Bulan = agustus"<<endl;
	}
	else if (g == 9){
		cout << "Konversi Bulan = september"<<endl;
	}
	else if (g == 10){
		cout << "Konversi Bulan = oktober"<<endl;
	}
	else if (g == 11){
		cout << "Konversi Bulan = november"<<endl;
	}
	else if (g == 12){
		cout << "Konversi Bulan = desember"<<endl;
	}

cout << "=======================================no 10========================="<<endl;
	int jb,gaji,pajak,ga,gaji2;
	cout<<"Masukan berapa jam bekerja = ";
	cin>>jb;
	cout<<"Masukan berapa gaji yang di inginkan = ";
	cin>>gaji;
	cout<<"Total awal gaji Budi = "<<gaji<<endl;
	pajak=gaji*5/100;
	ga=gaji-pajak;
	cout<<"5% PAJAK"<<endl;
	cout<<"Total gaji Budi setelah dikurangi pajak = "<<ga<<endl;
	cout<<"50% DI TABUNG"<<endl;
	gaji2=ga/2;
	cout<<"Gaji Budi setelah di tabung = "<<gaji2;
	cout<<endl;


   _getch();
    return 0;
    }

