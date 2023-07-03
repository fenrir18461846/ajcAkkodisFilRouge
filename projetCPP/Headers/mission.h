#ifndef MISSION_H
#define MISSION_H

#include <iostream>
using namespace std;

#include <string>

class Mission
{
	public:
		Mission(int, int, int, int, float = 0.0f, float = 0.0f)
		~Mission();

                int GetNumMission() const { return numMission; };
                void SetNumMission(int val) { numMission = val; };

                int GetNumRover() const { return numRover; };
                void SetNumRover(int val) { numRover = val; };

                int GetTypeMission() const { return typeMission; };
                void SetTypeMission(int val) { typeMission = val; };

                int GetEtatMission() const { return etatMission; };
                void SetEtatMission(int val) { etatMission = val; };

                float Getx() const { return x; };
                void Setx(float val) { y = val; };

                float Gety() const { return x; };
                void Sety(float val) { y = val; };

	protected:

	private:
		int numMission;
		int numRover;
		int typeMission;
		int etatMission;
		float x;
		float y;
}
