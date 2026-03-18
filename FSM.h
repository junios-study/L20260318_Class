#pragma once

//#include "State.h"
//#include "Transition.h"

class UState;
class UTransition;


class UFSM
{
public:
	UFSM();
	~UFSM();

	UState* States;
	UTransition* Transitions;

};

