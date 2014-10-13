#include "dealer.h"
#include <windows.h>
Start::Start(){
	count = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){	
			switch(i){
			case 0:
				Start::card[i][j].cPicture = "¢¼";
				break;
			case 1:
				Start::card[i][j].cPicture = "¢¾";
				break;
			case 2:
				Start::card[i][j].cPicture = "¡ß";
				break;
			case 3:
				Start::card[i][j].cPicture = "¢À";
				break;
			}
			switch(j){
			case 0:
				Start::card[i][j].cNumber = "A";
				break;	
			case 1:
				Start::card[i][j].cNumber = "2";	
				break;
			case 2:
				Start::card[i][j].cNumber = "3";	
				break;
			case 3:
				Start::card[i][j].cNumber = "4";
				break;	
			case 4:
				Start::card[i][j].cNumber = "5";	
				break;
			case 5:
				Start::card[i][j].cNumber = "6";	
				break;
			case 6:
				Start::card[i][j].cNumber = "7";
				break;	
			case 7:
				Start::card[i][j].cNumber = "8";	
				break;
			case 8:
				Start::card[i][j].cNumber = "9";	
				break;
			case 9:
				Start::card[i][j].cNumber = "10";
				break;	
			case 10:
				Start::card[i][j].cNumber = "J";	
				break;
			case 11:
				Start::card[i][j].cNumber = "Q";	
				break;
			case 12:
				Start::card[i][j].cNumber = "K";	
				break;		
			}
		}
	}
}
Start::~Start(){}
Player::Player(){
	nP= nD = 2;
	money = 500;
}
Player::~Player(){}

void Player::image(Cards *card, int count){	
	int i = 0;
	switch(count){
	case 0:
		cout<<"¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤\n";
		cout<<"¦¢"<<card[i].cPicture<<"    ¦¢ ¦¢"<<card[i+1].cPicture<<"    ¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢  "<<card[i].cNumber<<space(card[i].cNumber)<<"¦¢ ¦¢  "<<card[i+1].cNumber<<space(card[i+1].cNumber)<<"¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢    "<<card[i].cPicture<<"¦¢ ¦¢    "<<card[i+1].cPicture<<"¦¢\n";
		cout<<"¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥\n";
		break;
	case 1:
		cout<<"¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤\n";
		cout<<"¦¢"<<card[i].cPicture<<"    ¦¢ ¦¢"<<card[i+1].cPicture<<"    ¦¢ ¦¢"<<card[i+2].cPicture<<"    ¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢  "<<card[i].cNumber<<space(card[i].cNumber)<<"¦¢ ¦¢  "<<card[i+1].cNumber<<space(card[i+1].cNumber)<<"¦¢ ¦¢  "<<
			card[i+2].cNumber<<space(card[i+2].cNumber)<<"¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢    "<<card[i].cPicture<<"¦¢ ¦¢    "<<card[i+1].cPicture<<"¦¢ ¦¢    "<<card[i+2].cPicture<<"¦¢\n";
		cout<<"¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥\n";
		break;
	case 2:
		cout<<"¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤\n";
		cout<<"¦¢"<<card[i].cPicture<<"    ¦¢ ¦¢"<<card[i+1].cPicture<<"    ¦¢ ¦¢"<<card[i+2].cPicture<<"    ¦¢ ¦¢"<<
			card[i+3].cPicture<<"    ¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢  "<<card[i].cNumber<<space(card[i].cNumber)<<"¦¢ ¦¢  "<<card[i+1].cNumber<<space(card[i+1].cNumber)<<"¦¢ ¦¢  "<<
			card[i+2].cNumber<<space(card[i+2].cNumber)<<"¦¢ ¦¢  "<<card[i+3].cNumber<<space(card[i+3].cNumber)<<"¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢    "<<card[i].cPicture<<"¦¢ ¦¢    "<<card[i+1].cPicture<<"¦¢ ¦¢    "<<card[i+2].cPicture<<"¦¢ ¦¢    "<<
			card[i+3].cPicture<<"¦¢\n";
		cout<<"¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥\n";
		break;
	case 3:
		cout<<"¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤\n";
		cout<<"¦¢"<<card[i].cPicture<<"    ¦¢ ¦¢"<<card[i+1].cPicture<<"    ¦¢ ¦¢"<<card[i+2].cPicture<<"    ¦¢ ¦¢"<<
			card[i+3].cPicture<<"    ¦¢ ¦¢"<<card[i+4].cPicture<<"    ¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢  "<<card[i].cNumber<<space(card[i].cNumber)<<"¦¢ ¦¢  "<<card[i+1].cNumber<<space(card[i+1].cNumber)<<"¦¢ ¦¢  "<<
			card[i+2].cNumber<<space(card[i+2].cNumber)<<"¦¢ ¦¢  "<<card[i+3].cNumber<<space(card[i+3].cNumber)<<
			"¦¢ ¦¢  "<<card[i+4].cNumber<<space(card[i+4].cNumber)<<"¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢ ¦¢      ¦¢\n";
		cout<<"¦¢    "<<card[i].cPicture<<"¦¢ ¦¢    "<<card[i+1].cPicture<<"¦¢ ¦¢    "<<card[i+2].cPicture<<"¦¢ ¦¢    "<<
			card[i+3].cPicture<<"¦¢ ¦¢    "<<card[i+4].cPicture<<"¦¢\n";
		cout<<"¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥\n";
		break;
	}
}
void Player::image(Cards card, int count){
	int i = 0;
	cout<<"Dealer's Hands\n";
	switch(count){
	case 6:		
		cout<<"¦£¦¡¦¡¦¡¦¤ ¦£¦¡¦¡¦¡¦¤\n";
		cout<<"¦¢"<<card.cPicture<<"    ¦¢ ¦¢$$$$$$¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢$$$$$$¦¢\n";
		cout<<"¦¢  "<<card.cNumber<<space(card.cNumber)<<"¦¢ ¦¢$$$$$$¦¢\n";
		cout<<"¦¢      ¦¢ ¦¢$$$$$$¦¢\n";
		cout<<"¦¢    "<<card.cPicture<<"¦¢ ¦¢$$$$$$¦¢\n";
		cout<<"¦¦¦¡¦¡¦¡¦¥ ¦¦¦¡¦¡¦¡¦¥\n";
		break;
	}
}
void Player::shuffle(){
	count = 0;
	for(int i = 0 ; i < 30;i++){
		Start::used[i].cNumber = " ";
		Start::used[i].cPicture = " ";
	}
	Player::deal();
}
string Player::space(string str){
	if(str == "10")
		return "  ";
	else
		return "   ";
}
void Player::deal(){
	
	/*
	for(int q = 0;q<30;q++){
		if(Start::used[q].cPicture != "" && Start::used[q].cPicture != " ")
			cout<<"used: "<<Start::used[q].cPicture;
	}
	*/

	PRNG prng((int)time(NULL));

	for(int i = 0;i < 2;){
		int shape = prng(0,3);
		int number = prng(0,13);
		if(!Csearch(Start::card[shape][number])){
			tempP[i] = Start::card[shape][number];
			i++;
		}
	}
	for(int i = 0;i < 2;){
		int shape = prng(0,3);
		int number = prng(0,13);
		if(!Csearch(Start::card[shape][number])){
			tempD[i] = Start::card[shape][number];
			i++;
		}
	}		
}

bool Player::Csearch(Cards card){
	for(int i = 0; i <= 30; i++){
		if(i == 30){
			Start::used[Start::count] = card;
			Start::count++;
			return false;
		}
		else if(card.cNumber == Start::used[i].cNumber && card.cPicture == Start::used[i].cPicture)
			return true;
	}
}

int Player::sum(Cards *card, int num){
	int aces = 0;
	int sums = 0;
	int acc = 0;
	PRNG prng((int)time(NULL));
	if(num == 6){
		while(sums<17){
			if(acc >= nD){
				//start****************additional card dealt
				while(1){
					int shape = prng(0,3);
					int number = prng(0,13);
					if(!Csearch(Start::card[shape][number])){
						tempD[nD] = Start::card[shape][number];
						break;
					}
				}
				nD++;
				//end****************additional card dealt
			}
			if(card[acc].cNumber == "2" ||card[acc].cNumber == "3" ||card[acc].cNumber == "4" ||card[acc].cNumber == "5" ||
				card[acc].cNumber == "6" ||card[acc].cNumber == "7" ||card[acc].cNumber == "8" ||card[acc].cNumber == "9" ||
				card[acc].cNumber == "10")
				if(sums+atoi(card[acc].cNumber.c_str()) > 21 && aces > 0){
					aces--;					
					sums += atoi(card[acc].cNumber.c_str());
					sums--;
				}
				else
					sums += atoi(card[acc].cNumber.c_str());
			else if(card[acc].cNumber == "J" ||card[acc].cNumber == "Q" ||card[acc].cNumber == "K"){
				if(sums+10 > 21 && aces > 0)
					aces--;
				else
					sums += 10;
			}
			else if(card[acc].cNumber == "A" && sums+11 > 21)
				sums++;
			else{
				sums += 11;
				aces++;
			}
			acc++;
		}
		Dinst = acc-2;
	}
	else{
		for(;acc <= num;acc++){
			if(card[acc].cNumber == "2" ||card[acc].cNumber == "3" ||card[acc].cNumber == "4" ||card[acc].cNumber == "5" ||
				card[acc].cNumber == "6" ||card[acc].cNumber == "7" ||card[acc].cNumber == "8" ||card[acc].cNumber == "9" ||
				card[acc].cNumber == "10")
				sums += atoi(card[acc].cNumber.c_str());
			else if(card[acc].cNumber == "J" ||card[acc].cNumber == "Q" ||card[acc].cNumber == "K")
				sums += 10;
			else{
				sums += 11;
				aces++;
			}
		}
		while(sums > 21 && aces != 0){
			sums -= 10;
			aces--;
		}
	}
	return sums;
}

void Player::init(){ //main function***********************************************
	char cinput;
	double bet;
	PRNG prng((int)time(NULL));
	sumP = sumD = instances = Dinst = 0;
	//*********************************bet starts
	system("cls");
	if(money < 20){
		cout<<"no money = GG\n";
		exit(1);
	}
	cout<<"                                                         current balance: $"<<money<<endl;
	while(1){
		cout<<"how much to bet? min = $20, max = $300: ";
		cin>>bet;
		if(bet < 20)
			cout<<"minimum bet is $20.\n";
		else if(bet > 300)
			cout<<"maximum bet is $300.\n";
		else if(money < bet)
			cout<<"insufficient money! try again.\n";
		else
			break;
	}
	//******************************************initiating...
	system("cls");
	cout<<"                                                         current balance: $"<<money<<endl;
	cout<<"                                                             current bet: $"<<bet<<endl;
	picks = 'z';
	image(tempD[0],6);
	image(tempP,0);	
	sumP=sum(tempP,1);
	if(sumP == 21){
		cout<<"Congratulations! Black Jack!\n";
		money += (double)bet*1.5;
		goto end;
	}
	//****************************************dealer's choice
	while(1){
		choice(instances);
		if(picks == 's'){//                                                                   <-stay
			system("cls");
			cout<<"                                                         current balance: $"<<money<<endl;
			cout<<"                                                             current bet: $"<<bet<<endl;
			image(tempD[0],6);
			image(tempP,instances);
			break;
		}
		else if(picks == 'd'){//                                                            <-double down
			if(money < bet*2){
				cout<<"insufficient money! unable to Double Down.\n";
				instances = 0;
			}
			else{
				instances++;
				//start****************additional card dealt for Double Down
				while(1){
					int shape = prng(0,3);
					int number = prng(0,13);
					cout<<"check point 1"<<endl;
					if(!Csearch(Start::card[shape][number])){
						tempP[nP] = Start::card[shape][number];
						break;
					}
					cout<<"check point 2"<<endl;
				}
				nP++;
				//****************
				bet = bet *2;
				goto check;
				break;
			}
		}
		else if(picks == 'h'){//                                                                        <-hit
				//start****************additional card dealt for Hit
				while(1){
					int shape = prng(0,3);
					int number = prng(0,13);
					cout<<"check point 1"<<endl;
					if(!Csearch(Start::card[shape][number])){
						tempP[nP] = Start::card[shape][number];
						break;
					}
					cout<<"check point 2"<<endl;
				}
				nP++;
				//end****************additional card dealt for Hit
				sumP = sum(tempP, instances+2);
				system("cls");
				cout<<"                                                         current balance: $"<<money<<endl;
				cout<<"                                                             current bet: $"<<bet<<endl;
					image(tempD[0],6);	
					image(tempP,++instances);
					cout<<"Player Total = "<<sumP<<endl;
				if(sumP > 21){
					cout<<"Player Busted!!!!\n";
					money -= bet;
					goto end;
					break;
				}
		}
	}
check:
	sumP = sum(tempP,instances+1);
	sumD = sum(tempD, 6); //6 = dealer case;
		for(int k = 0; k <= Dinst; k++){
			system("cls");
			cout<<"                                                         current balance: $"<<money<<endl;
			cout<<"                                                             current bet: $"<<bet<<endl;
			image(tempD,k);
			image(tempP,instances);
			Sleep(400);
		}
		cout<<"Dealer Total = "<<sumD<<endl;
		cout<<"Player Total = "<<sumP<<endl;
	//*****************************************Player Bust
	if(sumP > 21){
		cout<<"Player Busted!\n";
		money -= bet;
		goto end;
	}
	else {
		if(sumD > 21){
			cout<<"Dealer Busted!!\n";
			money += bet;
		}
		else if(sumD > sumP){
			money -= bet;cout<<"you lost\n";}
		else if(sumP > sumD){
			money += bet;cout<<"you won\n";}
		else
			cout<<"TIE\n";
		end:  //******************************************************** goto end:
		while(1){
			cout<<"continue?(Y, N) ";
			cin>>cinput;
			if(cinput == 'Y' || cinput == 'y'){
				break;
			}
			else if(cinput == 'N' || cinput == 'n'){
				exit(1);
				break;
			}
			else
				cout<<"illegal selection!\n"<<endl;
		}
	}
}

void Player::choice(int inst){
	char pick;
	if(inst == 0){
		while(1){
			cout<<"H to Hit, S to Stay, D to Double Down\nYour Choice: ";
			cin>>pick;
			if(pick == 'h' || pick == 'H'){
				picks = 'h';
				break;
			}
			else if(pick == 's' || pick == 'S'){
				picks = 's';
				break;
			}
			else if(pick == 'd' || pick == 'D'){
				picks = 'd';
				break;
			}		
			else 
				cout<<"illegal choice. Try again!"<<endl;
		}
	}
	else {
		while(1){			
			cout<<"H to Hit, S to Stay\nYour Choice: ";
			cin>>pick;
			if(pick == 'h' || pick == 'H'){
				picks = 'h';
				break;
			}
			else if(pick == 's' || pick == 'S'){
				picks = 's';
				break;
			}
			else 
				cout<<"illegal choice. Try again!"<<endl;
		}
	}
}