#include <iostream>
#include "mission.h"

using namespace std;

Mission::Mission(int nm, int nr, int tm, int em, float vx, float vx
	:numMission(nm), numRover(nr), typeMission(tm), etatMission(em), x(vx), y(vy)
{

}

Mission::~Mission()
{
	cout << endl << "Destruction Mission " ;
}
