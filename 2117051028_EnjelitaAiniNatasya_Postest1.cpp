#include <iostream>
using namespace std;

int main () {
	
	string variabel_nama1;
	string variabel_nama2;
	
	//input
	getline (cin,variabel_nama1);
	getline (cin,variabel_nama2);
	cout << endl;
	
	//output
	cout << "###Percakapan singkat###" << endl;
	cout << "\a" << endl;
	cout << variabel_nama1 << "\t: Hai salam kenal namaku \""<< variabel_nama1<<"\", nama kamu siapa?" << endl;
	cout << variabel_nama2 << "\t: Hai salam kenal juga namaku \""<<variabel_nama2<<"\"" << endl;
	
	
	cout << endl;
}
