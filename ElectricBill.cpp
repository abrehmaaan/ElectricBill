#include<iostream>
using namespace std;
class ElectricBill {
	double amountPaid;
public:
	ElectricBill(double amountPaid) {
		if (amountPaid > 0) {
			this->amountPaid = amountPaid;
		}
		else {
			this->amountPaid = 0;
		}
	}
	double getAmountPaid() {
		return amountPaid;
	}
	void setAmountPaid(double amountPaid) {
		if (amountPaid > 0) {
			this->amountPaid = amountPaid;
		}
		else {
			this->amountPaid = 0;
		}
	}
	double getVAT() {
		return amountPaid * 0.18;
	}
	double getEWURA() {
		return amountPaid * 0.01;
	} 
	double getREA() {
		return amountPaid * 0.03;
	}
	double getUnits() {
		double deductions = getVAT() + getEWURA() + getREA() + 5000;
		double amount = amountPaid - deductions;
		return amount / 295;
	}
};
int main() {
	double amountPaid;
	cout << "Enter the amount paid: ";
	cin >> amountPaid;
	ElectricBill ec(amountPaid);
	cout << "Amount Paid = " << ec.getAmountPaid() << endl << endl;
	cout << "VAT = " << ec.getVAT() << endl;
	cout << "EWURA = " << ec.getEWURA() << endl;
	cout << "REA = " << ec.getREA() << endl;
	cout << "Service Charges = 5000" << endl << endl;
	cout << "Units Given (Kilowatt hours) = " << ec.getUnits() << endl;
	return 0;
}