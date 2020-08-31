#pragma once
#include "LightState.h"
#include "Light.h"

enum states {
	S_OFF, // 0
	S_LOW, // 1
	S_MED, // 2
	S_HIGH // 3
};

class LightOff : public LightState
{
public:
	void enter(Light* light) {}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();
	int getID(Light* light);

private:
	LightOff() {}
	LightOff(const LightOff& other);
	LightOff& operator=(const LightOff& other);
	int state_ID = S_OFF;
};

class LowIntensity : public LightState
{
public:
	void enter(Light* light) {}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();
	int getID(Light* light);

private:
	LowIntensity() {}
	LowIntensity(const LowIntensity& other);
	LowIntensity& operator=(const LowIntensity& other);
	int state_ID = S_LOW;
};

class MediumIntensity : public LightState
{
public:
	void enter(Light* light) {}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();
	int getID(Light* light);

private:
	MediumIntensity() {}
	MediumIntensity(const MediumIntensity& other);
	MediumIntensity& operator=(const MediumIntensity& other);
	int state_ID = S_MED;
};

class HighIntensity : public LightState
{
public:
	void enter(Light* light) {}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();
	int getID(Light* light);

private:
	HighIntensity() {}
	HighIntensity(const HighIntensity& other);
	HighIntensity& operator=(const HighIntensity& other);
	int state_ID = S_HIGH;
};