#include <iostream>

using namespace std;
class kisi{
	public:
		string ad;
		string soyad;
		kisi(string ad,string soyad):ad(ad),soyad(soyad){
			cout<<"kisi sinifinin yapici metodu calisti"<<endl;
		}
		
		void yazdir(){
			cout<<ad<<" "<<soyad<<endl;
		}
		
};
class ogrenci:public kisi{
	public:
	int ortalama;

	ogrenci(int ortalama,string ad,string soyad):kisi(ad,soyad),ortalama(ortalama){
		cout<<"oggrenci sinifinin yapici metodu calisti"<<endl;
		
	}
		
		void yazdir(){
			cout<<ortalama << " "<<ad<<" "<<soyad<<endl;
		}
	
	
};

int main(int argc, char** argv) {
	kisi k("ibrahim","berk");
	k.yazdir();
	
	ogrenci ogr(76,"ali","veli");
	ogr.yazdir();
	
	
	return 0;
}
