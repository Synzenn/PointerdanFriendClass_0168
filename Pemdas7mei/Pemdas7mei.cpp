#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << " No Induk = " << nim << endl;
	}
};

 int main()
 {
	 mahasiswa mhs{1}; //object mhs
	 mhs.showNim();	//member acces operator

	 mahasiswa& refMhs = mhs; //pointer references refMhs
	 refMhs.nim = 2; //member acces operator
	 mhs.showNim();

	 mahasiswa* pMhs = &mhs; //pointer Dereferences pMhs
	 pMhs->nim = 3; //Arrow Operator
	 pMhs->showNim();
	 return 0;
 }
