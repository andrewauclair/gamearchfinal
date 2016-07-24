/*
	Author:			Erin Trzcinski and Andrew Auclair
	Class:			EGP 310 01
	Assignment:		Final Project: Dance with the Devil	
	Date Assigned:	2011 03 30
	Due Date:		2011 04 27 at 1:00PM

	Description:	To create a create a game using the architecture 
					we've learned in class

	Certification of Authenticity:
		We certify that this assignment is entirely our own work. 
		Save for the art, music, sound effects, A* pathfinding, etc.
*/

#ifndef MAPMANAGER_H
#define MAPMANAGER_H

#include "Map.h"
#include "EventListener.h"
#include <vector>
using namespace std;

class MapManager : public EventListener
{
public:
	MapManager();
	~MapManager();

	void init();

	void setCurrentMap(int mapNum);

	void drawMapForeground();
	void drawMapBackground();

	void update();
	virtual void handleEvent(Event* theEvent);

	Map* getCurrentMap();
	Map* getMap(int map);

	void reset();

private:
	vector<Map*> mMaps;

	int mCurrentMap;
};

#endif