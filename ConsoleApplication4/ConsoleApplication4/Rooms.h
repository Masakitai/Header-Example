#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string GetTextFromUser(string inquiry);
int GetNmbersFromUser();
string entranceRoom();
void foyerRoom();
string diningRoom();
string kitchenRoom();
string crawlspaceRoom();
int myAge;
string myName;
string room;
//username function
string GetTextFromUser(string inquiry)
{
	//greet player
	cout << inquiry << "\n";
	//obtain name
	string theName;
	getline(cin, theName);
	//return the name for use in other functions
	return theName;
}
string entranceRoom()
{
	string room = "ENTRANCE HALL";
	cout << "\n\n\n You are in the " << room << ". Connected rooms are the DINING ROOM, CRAWLSPACE, and KITCHEN. \n Please make a selection:\n";
	string nextRoom = "";
	do
	{
		getline(cin, nextRoom);
		transform(nextRoom.begin(), nextRoom.end(), nextRoom.begin(), ::toupper);
	} while (nextRoom != "DINING ROOM" && nextRoom != "KITCHEN" && nextRoom != "CRAWLSPACE");
	room = nextRoom;
	return room;
}
string diningRoom()
{
	string room = "DINING ROOM";
	cout << "\n\n\n You are in the " << room << ". Connected rooms are the KITCHEN, ENTRANCE HALL, and FOYER. \n Please make a selection:\n";
	string nextRoom = "";
	do
	{
		getline(cin, nextRoom);
		transform(nextRoom.begin(), nextRoom.end(), nextRoom.begin(), ::toupper);
	} while (nextRoom != "KITCHEN" && nextRoom != "ENTRANCE HALL" && nextRoom != "FOYER");
	room = nextRoom;
	return room;
}
string crawlspaceRoom()
{
	string room = "CRAWLSPACE";
	cout << "\n\n\n You are in the " << room << ". Connected rooms are the ENTRANCE HALL and FOYER. \n Please make a selection:\n";
	string nextRoom = "";
	do
	{
		getline(cin, nextRoom);
		transform(nextRoom.begin(), nextRoom.end(), nextRoom.begin(), ::toupper);
	} while (nextRoom != "ENTRANCE HALL" && nextRoom != "FOYER");
	room = nextRoom;
	return room;
}
string kitchenRoom()
{
	string room = "ENTRANCE HALL";
	cout << "\n\n\n You are in the " << room << ". Connected rooms are the DINING ROOM and FOYER. \n Please make a selection:\n";
	string nextRoom = "";
	do
	{
		getline(cin, nextRoom);
		transform(nextRoom.begin(), nextRoom.end(), nextRoom.begin(), ::toupper);
	} while (nextRoom != "DINING ROOM" && nextRoom != "FOYER");
	room = nextRoom;
	return room;
}
void foyerRoom()
{
	cout << "\n\n\nYou have won my game child; however next time it will not be so easy.\n Don't think I will ever give in to some child named " << myName << " of only " << myAge << " years of age!\n";
	return;
}
int GetNmbersFromUser()
{
	int theAge;
	cin >> theAge;
	return theAge;
}