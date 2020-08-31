#pragma once
#include "LightState.h"

// Forward declaration to resolve circular dependency/include
class LightState;

class Light
{
public:
	Light();
	inline LightState* getCurrentState() const { return currentState; }
	int getCurrentStateID();
	// In here, we'll delegate the state transition to the currentState
	void toggle();
	// This will get called by the current state
	void setState(LightState& newState);

private:
	// LightState here is now a class, not the enum that we saw earlier
	LightState* currentState;
};