#include <iostream>
using namespace std;

int input, withdraw, adding, balance=1000, donate;
int year, yearPrize;
int rateUs[3];

void showOrders() {
	//show orders
	cout << "\t1. Put your money on the card\n";
	cout << "\t2. Withdraw money from the card\n";
	cout << "\t3. Donate our bank for helping to disabled people\n";
	cout << "\t4. Rate us\n";
	cout << "\t5. Show balance of the card\n";
	cout << "\t6. Exit\n\n";
}

void declaringYear() {
    //declare year
    cout << "Firstly can you enter that how many years do you use\"OOLYVI BANK\": ";
	cin >> year;

	if (year > 20) {
        cout << "You will get 200$ prize for choosing us, thanks!\n";
        yearPrize = 200;
        balance += yearPrize;
	} else if (year < 20 && year >= 10) {
	    cout << "You will get 100$ prize for choosing us, thanks!\n";
        yearPrize = 100;
        balance += yearPrize;
	} else {
	    cout << "You will get 50$ prize for choosing us, thanks!\n";
	    yearPrize = 50;
	    balance += yearPrize;
	}

}

void rateBank() {
    cout << "Rate security system of \"RAHIMLI BANK\" (0-5): ";
    cin >> rateUs[0];
    cout << "Rate our stuff(0-5): ";
    cin >> rateUs[1];
    cout << "Rate our customer recommendation(0-5): ";
    cin >> rateUs[2];
}

int main() {
	cout << endl;
	cout << "Welcome to OOLYVI Bank" << endl;
	cout << "Now you have " << balance << "$ on your card." << endl << endl;

	declaringYear();

	while (balance > 0) {
		showOrders();
		cout << "Enter the number which you want to order: ";
		cin >> input;
		cout << endl;

		//put money
		if (input == 1) {
			cout << "How much money do you want to put on the card: " << " $";
			cin >> adding;
			balance += adding;
		}
		//withdraw money
		else if (input == 2) {
			cout << "How much money do you want to withdraw from the card: " << " $";
			cin >> withdraw;
			balance -= withdraw;
		}
		//if someone wants extra money
		else if (withdraw > balance) {
            cout << "You don't have enough money on your card! Please try again\n";
            break;
		}
		//donate bank
		else if (input == 3) {
			cout << "How much money do you want to donate for disabled people? : $";
            cin >> donate;
            cout << "Thanks for donation, you are a GREAT person :)\n\n";
            balance -= donate;
		}
		//rate us
		else if (input == 4) {
            rateBank();
            cout << endl;
		}
		//show balance
		else if (input == 5){
            cout << "You have " << balance << " $ on your card...\n";
		}
		//exit
        else if (input == 6) {
            cout << "Be patient, we are exiting from your account\n";
            break;
        }
		else {
            cout << "Please enter ordered number again...";
		}
	}



}






