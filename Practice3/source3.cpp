#include <iostream>
using namespace std; 

class Avion {
private:
	static int nrAvioane;
	const int idAvion;
	int pasageri;
	char* modelAvion;
	char* status;
public:
	//Constructor fara parametri:
	Avion() :idAvion(nrAvioane++) {
		this->pasageri = 0;

		this->modelAvion = new char[strlen("Necunoscut") + 1];
		strcpy_s(this->modelAvion, strlen("Necunoscut") + 1, "Necunoscut");

		this->status = new char[strlen("Necunoscut") + 1];
		strcpy_s(this->status, strlen("Necunoscut") + 1, "Necunsocut");
	};

	//Constructor cu parametri:
	Avion(int pasageri, const char* modelAvion, const char* status) :idAvion(nrAvioane++) {
		this->pasageri = pasageri;
		this->modelAvion = new char[strlen(modelAvion) + 1];
		strcpy_s(this->modelAvion, strlen(modelAvion) + 1, modelAvion);
		this->status = new char[strlen(status) + 1];
		strcpy_s(this->status, strlen(status) + 1, status);
	};

	//Destructor
	~Avion() {
		delete[]this->modelAvion;
		delete[]this->status;
	};

	//Getter: 
	int getPasageri() {
		return this->pasageri;
	}

	//Setter: 
	void setPasageri(int pasageri) {
		this->pasageri = pasageri;
	};
};

int Avion::nrAvioane = 0;

int main() {
	Avion avion1;
	Avion avion2(300, "Boeing", "Active");
	avion2.setPasageri(999);
	cout << avion2.getPasageri() << endl;

	return 0;
};