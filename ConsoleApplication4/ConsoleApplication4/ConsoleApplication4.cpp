// Interactive Fiction by Christian Mangione
//Inclusions
#include "stdafx.h"
#include "Rooms.h"
int main()
{
	//call username
	myName = GetTextFromUser("Hello, hello, hello, child. What is your name?\n");
	cout << "\nAnd your age?\n";
	myAge = GetNmbersFromUser();
	cout << "My game is simple. Find the Foyer in the house maze by entering the names of rooms connected to this one.\n Time to begin";
	//define room
	string room = "ENTRANCE HALL";
	do
	{
		if (room == "ENTRANCE HALL")
		{
			room = entranceRoom();
		}
		if (room == "DINING ROOM")
		{
			room = diningRoom();
		}
		if (room == "KITCHEN")
		{
			room = kitchenRoom();
		}
		if (room == "CRAWLSPACE")
		{
			room = crawlspaceRoom();
		}
	} while (room != "FOYER");
	foyerRoom();
	system("pause");
	return 0;
}

