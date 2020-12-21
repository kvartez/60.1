#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	ifstream file;
	ofstream out;
	file.open("liczby.txt");
	out.open("wynik.txt") ;
	int num=1,num2=0,num3=0,num4=0;
	while(file.good()){
		if(!file.eof()){
			num3=num2;
			file>> num2;
			if(num2<1000){
				num++;
				
				
			}
			
			
		}
		
	}
		out<<"liczby:"<<num<<endl;
		out<<"ostatnie:"<<num2<<","<<num3;
		
		
	out.close();
	file.close();
	return 0;
}
