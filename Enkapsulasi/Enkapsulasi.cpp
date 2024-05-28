#include <iostream>
using namespace std;

class remoteLampu
{
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value)
	{
		saklarNo[i] = value;
	}
	string getsaklarNo(int i)
	{
		return saklarNo[i];
	}
};
int main()
{
	remoteLampu lampuRumah;

	lampuRumah.setSaklarNo(0, "Lampu teras rumah");
	lampuRumah.setSaklarNo(1, "lampu ruang tamu");
	lampuRumah.setSaklarNo(2, "Lampu kamar tidur");
	lampuRumah.setSaklarNo(3, "Lampu Dapur");

	cout << lampuRumah.getsaklarNo(0) << endl;
	cout << lampuRumah.getsaklarNo(1) << endl;
	cout << lampuRumah.getsaklarNo(2) << endl;
	cout << lampuRumah.getsaklarNo(3) << endl;
	
	return 0;

}