#include<iostream>


using namespace std;

class Bank{
private:
	int account_number;
	int balance;
public:
	void deposit(int amount){
		balance+=amount;
	}
	void withdraw(int amount){
		balance-=amount;
	}
	int show_balance(){
		return balance;
	}
	int show_account(){
		return account_number;
	}
	Bank(int acc, int bal):account_number(acc), balance(bal) {}
};


int main(){
	Bank P1 = Bank(457458, 5000);
	P1.deposit(500);
	P1.withdraw(1000);
	cout<<"your account_no:"<<P1.show_account()<<endl;
	cout<<"balance amount:"<<P1.show_balance()<<endl;
}
