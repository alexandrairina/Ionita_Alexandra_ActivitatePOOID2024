#include <iostream>
using namespace std;

class Tren {
private:
	static int nrTrenuri;
	const int idTren;
	int nrVagoane;
	int nrPasageri;
	char* tipTren;
public:
	//Constructor fara parametri:
	Tren() :idTren(nrTrenuri++) {
		this->nrVagoane = 3;
		this->nrPasageri = 0;

		this->tipTren = new char[strlen("Necunoscut") + 1];
		strcpy_s(this->tipTren, strlen("Necunoscut") + 1, "Necunoscut");
	};

	//Constructor cu parametri:
	Tren(int nrVagoane, int nrPasageri, const char* tipTren) :idTren(nrTrenuri++) {
		this->nrVagoane = nrVagoane;
		this->nrPasageri = nrPasageri;
		this->tipTren = new char[strlen(tipTren) + 1];
		strcpy_s(this->tipTren, strlen(tipTren) + 1, tipTren);
	};

	//Destructor:
	~Tren() {
		delete[]this->tipTren;
	}

	//Getter:
	int geNrVagoane() {
		return this->nrVagoane;
	};

	//Setter:
	void setNrVagoane(int nrVagoane) {
		this->nrVagoane = nrVagoane;

	};

	//Getter:
	int getNrPasageri() {
		return this->nrPasageri;
	};

	//Setter: 
	void setNrPasageri(int nrPasageri) {
		this->nrPasageri = nrPasageri;
	};
};

int Tren::nrTrenuri = 0;

int main() {
	Tren tren1;
	Tren tren2(6, 170, "Electric");
	tren2.setNrVagoane(12);
	tren2.setNrPasageri(310);
	cout << tren2.geNrVagoane() << endl;
	cout << tren2.getNrPasageri() << endl;

	return 0;
};