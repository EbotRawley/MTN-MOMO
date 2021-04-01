#include<iostream>

using namespace std;

int main(){
	string dial, ref;
	int a, opt1, opt2, opt3, amount, pin_code, back;
	cout<<"Dial *126# "<<endl;
	cin >> dial;
	if(dial == "*126#"){
		mm:
		system("CLS");
		
		cout<<endl;
		
		cout<<"		Welcome to MTN MoMo"<<endl;
		cout<<"		1) Send Money"<<endl;
		cout<<"		2) Pay Bills/Services"<<endl;
		cout<<"		3) Buy Airtime/Bundles"<<endl;
		cout<<"		4) MoMoPay"<<endl;
		cout<<"		5) Bank Operations"<<endl;
		cout<<"		6) Loans"<<endl;
		cout<<"		7) My Account"<<endl;
		cout<<"		8) Help"<<endl;
		cout<<endl;
		cin >> opt1;
				switch (opt1){
					case 1:{
						system("CLS");
						cout<<endl;
						cout << 	"Send Money"<<endl;
						cout<<"		1) To MTN Number"<<endl;
						cout<<"		2) To other Networks"<<endl;
						cout<<"		3) To client with no account"<<endl;
						cout<<"		0) Back"<<endl;
						cin >> opt2;
						switch(opt2){
							case 0:{
							goto mm;
							break;
							}	
						cout<<endl;
							case 1:{
								system("CLS");
								cout<<endl;
								cout<<"		Enter phone number or enter 1 to select from Mobile Money favourite list"<<endl;
								cout<<endl;
								cin >> opt3;
								switch (opt3){
									case 1:{
										system("CLS");
										cout<<endl;
										cout<<endl;
										cout<<"		Your favorite list is empty you foul !!...";
										return 0;
										break;
									}
									default:{
										system("CLS");
										cout<<endl;
										cout<<"		Enter Amount :"<<endl;
										cin >> amount;
										system("CLS");
										cout<<endl;
										cout<<"		Enter Ref (Reason for transfer)"<<endl;
										cin >> ref;
										system("CLS");
										cout<<endl;
										cout<<"		Enter PIN code to confirm transfer of "<<amount<<" to ********** ("<<opt3<<"). Reference: "<<ref<<" Fee: 50FCFA."<<endl;
										cin >> pin_code;
										return 0;
										break;
									}
								}
																
								break;
							}
							case 2:{
								system("CLS");
								cout<<endl;
								cout<<"		To other Networks"<<endl;
								cout<<"		1) Cameroon"<<endl;
								cout<<"		2) Gabon"<<endl;
								cout<<"		3) Congo Braz"<<endl;
								break;
							}
							case 3:{
								system("CLS");
								cout<<endl;
								cout<<"		To client with no account"<<endl;
								cout<<"		1) Cameroon"<<endl;
								cout<<"		2) Gabon"<<endl;
								cout<<"		3) Congo Braz"<<endl;
								return 0;
								break;
							}
						}
						break;
					}
					case 2:{
						m2:
						system("CLS");
						cout<<endl;
						cout<<"		Pay Bills/Services"<<endl;
						cout<<"		1) ENEO"<<endl;
						cout<<"		2) School/Exam Fees"<<endl;
						cout<<"		3) TV"<<endl;
						cout<<"		4) MTN Bills"<<endl;
						cout<<"		5) Insurance"<<endl;
						cout<<"		6) Utility Bill"<<endl;
						cout<<"		7) Others"<<endl;
						cout<<"		8) Payment with coupon"<<endl;
						cout<<"		0) Back"<<endl;
						cin >> opt2;
						switch(opt2){
							case 0:{
								goto mm;
								break;
							}
							case 1:{
								system("CLS");
								cout<<endl;
								cout<<"		ENEO"<<endl;
								cout<<"		1) Postpaid ENEO bill"<<endl;
								cout<<"		2) Prepaid ENEO payment"<<endl;
								cout<<"		0) Back"<<endl;
								cin >> opt3;
								switch (opt3){
								case 0:{
									goto m2;
								}
								default:{
									cout<<"Invalid option !";
									return 0;
								}
								break;}
							}
							case 2:{
								system("CLS");
								cout<<endl;
								cout<<"		Connection problem or invalid MMI code."<<endl;
								break;
							}
							case 3:{
								system("CLS");
								cout<<endl;
								cout<<"		Select TV operator to pay"<<endl;
								cout<<"		1) CANAL+"<<endl;
								cout<<"		0) Back"<<endl;
								cin >> back;
								if(back == 0){
									goto m2;
								}
								else{
									cout<<"Invalid option !";
									return 0;
								}
								return 0;
								break;
							}
							case 4:{
								cout<<endl;
								system("CLS");
								cout<<"		1) Select from saved bills"<<endl;
								cout<<"		2) Enter contract number"<<endl;
								cout<<"		0) Back"<<endl;
								cin >> back;
								if(back == 0){
									goto m2;
								}
								else{
									cout<<"Invalid option !";
									return 0;
								}
								return 0;
								break;
							}
							default:{
								system("CLS");
								cout<<endl;
								cout<<"		Connection problem or invalid MMI code"<<endl;
								return 0;
								break;
							}
						}
						break;
					}
					case 3:{
						m3:
						system("CLS");
						cout<<endl;
						cout<<"		Buy MTN Products/Services"<<endl;
						cout<<"		1) MTN Airtime"<<endl;
						cout<<"		2) Internet Bundles"<<endl;
						cout<<"		3) International calls bundles"<<endl;
						cout<<"		4) SMS Bundles"<<endl;
						cout<<"		5) WhatsApp Bundles"<<endl;
						cout<<"		6) Roaming Bundles"<<endl;
						cout<<"		0) Back"<<endl;
						cout<<endl;
						cin >> opt2;
						switch (opt2){
							case 1:{
								system("CLS");
								cout<<endl;
								cout<<"		MTN Airtime"<<endl;
								cout<<"		1) For my number"<<endl;
								cout<<"		2) For another number"<<endl;
								cout<<"		3) From MTN MoMo Gift"<<endl;
								cout<<"		0) Back"<<endl;
								cin >> back;
								if(back == 0){
									goto m3;
								}
								else{
									cout<<"Invalid option !";
									return 0;
								}
								cin >> opt3;
								switch(opt3){
									case 1:{
										system("CLS");
										cout<<endl;
										cout<<"		Enter Amount :"<<endl;
										cout<<endl;
										cin >> amount;
										system("CLS");
										cout<<endl;
										cout<<"		Enter PIN code to Confirm airtime purchase of "<<amount<<" to your number 237**********"<<endl;
										cin>>pin_code;
										break;
									}
									default :{
										system("CLS");
										cout<<endl;
										cout<<"		Connection problem or invalid MMI code."<<endl;
										break;
									}
								}
								break;
							}
						}
						break;
					}
					case 4:{
						system("CLS");
						cout<<endl;
						cout<<"		MoMo Pay"<<endl;
						cout<<"		1) Pay MTN MoMo Merchant"<<endl;
						cout<<"		2) Pay Merchant from other operators"<<endl;
						cout<<"		0) Back"<<endl;
						cout<<endl;
						cin >> back;
						if(back == 0){
									goto mm;
								}
								else{
									cout<<"Invalid option !";
									return 0;
								}
						cin >> opt2;
						break;
					}
					case 5:{
						system("CLS");
						cout<<endl;
						cout<<"		Select your bank"<<endl;
						cout<<"		1) ATM Withdrawal"<<endl;
						cout<<"		2) Afriland BANK"<<endl;
						cout<<"		3) ECOBANK"<<endl;
						cout<<"		4) MICROFINANCES"<<endl;
						cout<<"		5) UBA"<<endl;
						cout<<"		6) CCA BANK"<<endl;
						cout<<"		0) Back"<<endl;
						cout<<endl;
						cin >> back;
						if(back == 0){
									goto mm;
								}
								else{
									cout<<"Invalid option !";
									return 0;
								}
						cin >> opt2;
						break;
					}
					case 6:{
						system("CLS");
						cout<<endl;
						cout<<endl;
						cout<<endl;
						cout<<"		MOMOKASH"<<endl;
						cout<<"		out of service"<<endl;
						cout<<"		Please try again later !"<<endl;
						return 0;
						break;
					}
					case 7:{
						m7:
						system("CLS");
						cout<<endl;
						cout<<"		My Account"<<endl;
						cout<<"		1) Balance/Last transaction"<<endl;
						cout<<"		2) Change PIN code"<<endl;
						cout<<"		3) PIN code Forgotten"<<endl;
						cout<<"		4) Manage Favourite"<<endl;
						cout<<"		5) Refferal Program"<<endl;
						cout<<"		6) Change language"<<endl;
						cout<<"		00 Next"<<endl;
						cin >>opt2;
						switch(opt2){
							case 00:{
								system("CLS");
								cout<<endl;
								cout<<"		7) Self PIN Reset"<<endl;
								cout<<"		0) Back";
								cout<<"		*Prev";
								cin >> back;
								if(back == 0){
									goto mm;
								}
								else if(back == '*'){
									cout<<"Invalid option !";
									return 0;
								}
								else{
									cout<<""; 
									return 0 ;
								}
								break;
							}
							case 1:{
								system("CLS");
								cout<<endl;
								cout<<"		Balance/Last transactions"<<endl;
								cout<<"		1) Check Account Balance"<<endl;
								cout<<"		2) Last Transactions"<<endl;
								cout<<"		0) Back"<<endl;
								cin >> opt3;
								switch(opt3){
									case 1:{
									system("CLS");
									cout<<endl;
									cout<<"	Enter PIN Code :"<<endl;
									cout<<endl;
									cin >> pin_code;
									break;
								}
									default :{
									cout<<"		Connection problem or invalid MMI code...."<<endl;
									break;
									}
								}
							}
							default :{
								system("CLS");
										cout<<endl;
										cout<<"		Connection problem or invalid MMI code."<<endl;
										return 0;
										break;
						}
					}
					case 8:{
						system("CLS");
						cout << endl;
						cout<<"		Help"<<endl;
						cout<<"		1) What is MTN MoMo ?"<<endl;
						cout<<"		2) How to send  money"<<endl;
						cout<<"		3) I sent money to the wrong number"<<endl;
						cout<<"		4) How to reset my PIN"<<endl;
						cout<<"		5) What are the MTN MoMo fees ?"<<endl;
						cout<<"		6) Contact MTN"<<endl;
						cout<<"		0) Back"<<endl;
						break;
					}
				}
		return 0;
	}
}
	else{
		cout<<"Invalid code...";
		return 0;
	}
	return 0;
}
