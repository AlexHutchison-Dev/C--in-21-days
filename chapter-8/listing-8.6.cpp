// Listing 8.6 Demonstrates creating and deleting Objects on the free store // 
//


#include <iostream> 

using namespace std;

class SimpleCat
{
	public:
		SimpleCat();
		~SimpleCat();
	private:
		int itsAge;

};

SimpleCat::SimpleCat(){
	cout << "Constructor Called!\n" << endl;
}

SimpleCat::~SimpleCat()
{
	cout << "Destructor Called!\n" << endl;
}

int main() {

	cout << endl;
	cout << "SimpleCat Ciri..." << endl;
	SimpleCat Ciri;
	cout << "SimpleCat *pRags = new SimpleCat..." << endl;
	SimpleCat * pRags = new SimpleCat;
	cout << "Delete pRags..." << endl;
	delete pRags;
	cout << "Exiting, watch Ciri go..." << endl;

	return 0;	
}
