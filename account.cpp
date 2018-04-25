#include <iostream>
#include <cstring>
using namespace std;
int number = 100;

class BankAccount{
	public:
		string name;
		string AcctNum;
		string PhoneNum;
		int balance;
		float rate;
	
		void deposit(int x){
			balance += x;
		}
		void withdraw(int y){
			balance -= y;
		}
		BankAccount(){
			string nm = "Anonymous";
			string ph = "555-555-5555";
			BankAccount(nm,ph);
		}
		BankAccount(string n, string p){
			rate = 5.0;
			name = n;
			PhoneNum = p;
			AcctNum = number++;
			balance = 0;
		}
		void print(){
			cout << "Account: " << AcctNum << endl;
			cout << "User: " << name << endl;
			cout << "Phone: " << PhoneNum << endl;
			cout << "Balance: " << balance << endl;
			cout << "Rate: " << rate << endl;
	}
};

// class Savings:public BankAccount{
		// int min_balance;
		// int withdraw_limit;
	// };
	
	
class Checking: public BankAccount {
	public:
		Checking():BankAccount(){
			overdraft_fee = 25;
		}
	private:
		int overdraft_fee;
};

class Savings: public BankAccount {
	public:
		Savings():BankAccount(){
			minimum_balance = 100;
			withdraw_limit = 100;
		}
		Savings(string n, string p):BankAccount(n,p){
			minimum_balance = 100;
			withdraw_limit = 100;
		}
		void withdraw(int y){
			if(y < withdraw_limit){
				// balance -= y;
				if(balance <minimum_balance){
					cout << "Warning: You are below your minimum balance." << endl;
				}
			} else {
				cout << "You are only allowed to withdraw " << withdraw_limit <<
					" from this account. Transaction terminated." << endl;
			}
		}
		
	private:
		int minimum_balance;
		int withdraw_limit;
};

class menu{
	public:
		//action();
		string doThis;
		//action();
		//toDo();
	
		menu(){
			toDo();
			action();
			}
			
	void toDo(){
		cin >> doThis;
	}
	
	void action(){
		if (doThis == "list") {
			cout <<"Create new account: new" <<endl;
			cout <<"View Account Balance: balance" <<endl;
			cout <<"Make a deposit: deposit" <<endl;
			cout <<"Make a withdraw: withdraw" <<endl;
			cout <<"Leave: leave" <<endl;
		}
		else if (doThis == "new") {
			string type;
			cout << "Should this be a checking or savings account?" << endl;
			cin >> type;
				if (type=="checking"){}
				else if (type=="savings"){}
			cout<< "What's the name on the account?" << endl;
		}
		else if (doThis == "balance") {
			//cout << "The balance for account " << ?? << " is $" << ?? << endl;
		}
		else if (doThis == "deposit") {
		
		}
		else if (doThis == "withdraw") {
		
		}
		else if (doThis == "leave") {
		
		}
		else {
		cout<< "Invalid command. Enter a valid option. Enter list to view commands" << endl;
		}
	}
	
};

int main(){
	cout << "Welcome to bank.\nWhat would you like to do today?" << endl;
	cout <<"Create new account: new" <<endl;
	cout <<"View Account Balance: balance" <<endl;
	cout <<"Make a deposit: deposit" <<endl;
	cout <<"Make a withdraw: withdraw" <<endl;
	cout <<"Leave: leave" <<endl;
	
	menu start;
	
	menu action;
	//action();
	
	return 0;
}
