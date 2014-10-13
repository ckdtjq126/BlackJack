#include "dealer.h"

int main(void){
	Start *player = new Start;
	Player p1;
	int time = 0;
	while(1){
		if(time == 4){
			p1.shuffle();
			cout<<"shuffled!"<<endl;
			time = 0;
		}
		p1.deal(); //dealing cards.
		p1.init(); //displays initially dealt cards.
		time++;
	}	
	return 0;
}