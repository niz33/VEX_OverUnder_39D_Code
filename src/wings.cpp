#include "main.h"

bool Wings::state=false;
bool Wings::state2=false;

void Wings::toggle1(State s=State::Toggle){
	switch(s){
		case State::Toggle:
			state=!state;
			break;
		case State::On:
			state=true;
			break;
		case State::Off:
			state=false;
			break;
	}
	wingsPneumatic1.set_value(state);
}
void Wings::toggle2(State s=State::Toggle){
	switch(s){
		case State::Toggle:
			state2=!state2;
			break;
		case State::On:
			state2=true;
			break;
		case State::Off:
			state2=false;
			break;
	}
	wingsPneumatic2.set_value(state2);
}