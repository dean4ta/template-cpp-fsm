#include "ConcreteLightStates.h"

#include <iostream>

/*
 * State: Light off
 */
void LightOff::toggle(Light* light)
{
	// Off -> Low
	light->setState(LowIntensity::getInstance());
}
LightState& LightOff::getInstance()
{
	static LightOff singleton;
	return singleton;
}
int LightOff::getID(Light* light)
{
	return state_ID;
}

/*
 * State: Light Low Intensity
 */
void LowIntensity::toggle(Light* light)
{
	// Low -> Medium
	light->setState(MediumIntensity::getInstance());
}
LightState& LowIntensity::getInstance()
{
	static LowIntensity singleton;
	return singleton;
}
int LowIntensity::getID(Light* light)
{
	return state_ID;
}

/*
 * State: Light Medium Intensity
 */
void MediumIntensity::toggle(Light* light)
{
	// Medium -> High
	light->setState(HighIntensity::getInstance());
}
LightState& MediumIntensity::getInstance()
{
	static MediumIntensity singleton;
	return singleton;
}
int MediumIntensity::getID(Light* light)
{
	return state_ID;
}

/*
 * State: Light High Intensity
 */
void HighIntensity::toggle(Light* light)
{
	// High -> Off
	light->setState(LightOff::getInstance());
}
LightState& HighIntensity::getInstance()
{
	static HighIntensity singleton;
	return singleton;
}
int HighIntensity::getID(Light* light)
{
	return state_ID;
}