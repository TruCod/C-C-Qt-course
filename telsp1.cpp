// spravo4nik

#include <iostream>
#include <fstream>
 
using namespace std;
string filename = "sp.txt";
int main()
{
	struct Sprav{
	string name;
	int tel;
	};
	Sprav x;
	int doit;
	cout << "Vvedite 4to hotite?" "\n"
	"1- dobavit dannie" "\n"
	"2- prosmotret spravo4nik" "\n"
	"3- poisk(ne rabotaet)" "\n"; 
	cin >> doit;
	if (doit==1){
	 cin >> x.name;
	 cin >> x.tel;
	 std::ofstream out("sp.txt", std::ios::app);
	 if (out.is_open())
	 {
 	    out << x.name << " " << x.tel << std::endl;
 	 }
 	 out.close();
 	 }
	 else{
	 if(doit==2){
	 const char *FName="sp.txt";
	 char ch=0;
 	 char x;
	 int i;
	 ifstream in1(FName);  
	 while (!in1.eof())
	   {
	 ch = in1.get();
	 cout << ch;	
	   }
	 in1.close();
	 cin.get();}
	 else{
	 cout << "bolshe ne 4e ne rabotaet =( ";}
	
	
	 }}
