//  ______    _     _     _             
//  |  ___|  | |   | |   | |            
//  | |_ __ _| |__ | |__ | | __ _ _   _ 
//  |  _/ _` | '_ \| '_ \| |/ _` | | | |
//  | || (_| | | | | |_) | | (_| | |_| |
//  \_| \__,_|_| |_|_.__/|_|\__,_|\__, |
//                                 __/ |
//                                |___/
#include <iostream>
#include <string>
#include <time.h>
#include "player.h"
#include "Events.h"
#include <windows.h>
#include <thread>
#include <chrono>


using namespace std;

void main()
{
		string playerName;
		Player stats;
		//test(1, 150);

		//ColorPicker(42);
		DelayTextWithSkip(20, "     ,d8888b        d8b       d8b       d8b                     ");
		DelayTextWithSkip(20, "     88P'           ?88       ?88       88P                     ");
		DelayTextWithSkip(20, "  d888888P           88b       88b     d88                      ");
		DelayTextWithSkip(20, "    ?88'  d888b8b    888888b   888888b 888   d888b8b  ?88   d8P ");
		DelayTextWithSkip(20, "    88P  d8P' ?88    88P `?8b  88P `?8b 88  d8P' ?88  d88   88  ");
		DelayTextWithSkip(20, "   d88   88b  ,88b  d88   88P d88,  d88 88b 88b  ,88b ?8(  d88  ");
		DelayTextWithSkip(10, "  d88'   `?88P'`88bd88'   88bd88'`?88P'  88b`?88P'`88b`?88P'?8b ");
		DelayTextWithSkip(10, "                                                            )88 ");
		DelayTextWithSkip(10, "                                                          ,d8P  ");
		DelayTextWithSkip(10, "                                                       `?888P'  "); 
    
		ColorPicker(8);
		DelayTextWithSkip(20, "Welcome to Fahblay");
		cout << " " << endl;
		DelayTextWithSkip(50, "This is a text based adventure of good and...");
		ColorPicker(4);
		cout << " " << endl;
		DelayTextWithSkip(400, "EVIL");
		ColorPicker(8);
		cout << " " << endl;
		DelayTextWithSkip(20, "What is your name?");
		cin >> playerName;
		cout << "" << endl;
		DelayTextWithSkip(20, "We can't all have ringers I suppose.");
		cout << playerName;

		DelayTextWithSkip(20, ", you will have to make decisions.");
		cout << "" << endl;
		Sleep(3000);
		DelayTextWithSkip(20, "Your choices WILL determine your FATE.");
		
		cout << "" << endl;
		Sleep(3000);
		DelayTextWithSkip(20, "Here is your first one");
		
		cout << "" << endl;
		Sleep(3000);
		DelayTextWithSkip(20, "You wake up in a house.");
		
		
		Sleep(1000);
		
		DelayTextWithSkip(20, "As your eyes open you start to scan the room.");
		Sleep(1000);
		
		DelayTextWithSkip(20, "You see an old man in the corner on a stool. ");
		Sleep(1000);
		cout << "" << endl;
		cout << "" << endl;
		DelayTextWithSkip(200, "Watching...");
		
		Sleep(2000);
		cout << "" << endl;
		cout << "" << endl;
		DelayTextWithSkip(800, "Waiting...");
	
		Sleep(2000);
		cout << "" << endl;
		cout << "" << endl;
		ColorPicker(8);
		


		//good track events
		// EVENT [number] GUIDE
		//			0-99          Questions
		//          100-199       Good Track dialogue
		//          200-299       Evil Track dialogue


	Event events[500];

	//    ___    ___   _     
	//   / _ \  / _ \ ( )___ 
	//  | | | || | | ||// __|
	//  | |_| || |_| |  \__ \
	//   \___/  \___/   |___/
	//			0-99          Questions


	events[0] = { 100 , 100,"The old man asks: Would you like coffee or tea? ", "Coffee", "Tea",  0 };
	events[1] = { 101 , 200,"The old man asks: Does this hat make me look fat?", "It's a great hat!", "You're a fat old fuck.",  0 };
	events[2] = { 201 , 108,"The cat seems to want you to follow him, will you?", "no", "yes",  0 };
	events[3] = { 201 , 4,  "Hello! I'm so sorry to ask this... Can you help our village?", "no", "yes",  0 };
	events[4] = { 5 , 5,    "A group of bandits came and burned half of our village.", "", "",  1 };
	events[5] = { 6 , 6 ,   "They destoryed the water tower.", "", "",  1};
	events[6] = { 7 , 7,    "We just need to secure this rain collection tarp!", "", "",  1 };
	events[7] = { 8 , 8,    "You assist in raising the tarp. The village is grateful!", "", "",  1 };
	events[8] = { 111 , 9,  "They give you gold. They give you a warm meal. Good times.", "", "",  0 };

	// === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office 
	events[9]  = {10,125, "Would you like a drink?", "What do you have?", "None for me, thanks!", 0};
	events[10] = { 126 , 127 , "15 year or 18 year?", "Well the 18 sounds great!", "I'd rather have the 15.",0};
	events[11] = {133 , 12 , "Do you think you could help us out?", "Do you mean the village a 7ish hours norht of here?", "I really can't.", 0};
	events[12] = {0 , 1 , "Do you think you could go help?", "", "", 0 };
	// === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office === Mob Bosses Office 
	events[13] = {0 , 1 , "Hows'about joining up? We always need fresh meat.", "", "", 0 };
	events[14] = {0 , 1 , "", "", "", 0 };
	events[15] = { 0 , 1 , "", "", "", 0 };
	events[16] = { 0 , 1 , "", "", "", 0 };
	events[17] = { 0 , 1 , "", "", "", 0 };
	events[18] = { 0 , 1 , "", "", "", 0 };
	events[19] = { 0 , 1 , "", "", "", 0 };
	events[20] = { 0 , 1 , "", "", "", 0 };
	//    __   ___    ___   _     
	//   /_ | / _ \  / _ \ ( )    
	//    | || | | || | | ||/ ___ 
	//    | || | | || | | |  / __|
	//    | || |_| || |_| |  \__ \
	//    |_| \___/  \___/   |___/
//          100-199       Good Track dialogue                      

	
	events[100] = {101 , 101, "Great Choice! The old man gets your drink.", "", "",  1 };
	events[101] = {102 , 102, "The old man nods as you walk out the door.", "", "",  1 };
	events[102] = {103 , 103, "You walk down a dusty path. It is warm. Summer is coming.", "Neat.", "Hot.",  1 };
	events[103] = {104 , 104, "You come across a cat in the road.", "Aww!", "Eww.",  1 };
	events[104] = {105 , 105, "The cat looks at you square in the eyes.", "AWWWWH KITTY CATTTTTTT!!!", "Disgusting creature.",  1 };
	events[105] = {106 , 2,   "Meow.", "Go away cat.", "You wanna come with me bud?",  0 };
	events[106] = {107 , 2,   "Meooow.", "Fuck off cat.", "Fine! I'll find you an owner.",  0 };
	events[107] = {201 , 108, "MEOOOWWW.", "AHHHHH! Do you like it when I scream at you? No? Get the fuck away.", "Awww I really can't resist any more!",  0 };
	events[108] = {109 , 109, "You and your cat continue down the road. He hops up on to your shoulder.", "", "",  1 };
	events[109] = {110 , 110, "You walk. For hours. Come upon a village. ", "", "",  1 };
	events[110] = {3 , 3,     "A viillager comes running out of the village towards you.", "...", "",  1 };
	events[111] = {112 , 112, "You continue towards the town. It's massive. Magnificient.", "...", "",  1 };
	events[112] = {113 , 113, "You walk throught the main gate. The town is alive.", "...", "",  1 };
	events[113] = {114 , 114, "A woman slouches in your path of travel. She has a sign.", "...", "",  1 };
	events[114] = {115 , 115, "It reads: One gold. One smile. Endless gratitude.", "...", "",  1 };
	events[115] = {116 , 208, "Do you give her a coin.", "Yes.", "No.",  0 };
	events[116] = {117 , 117, "A beautiful woman notices your good deed.", "...", "",  1 };
	events[117] = {118 , 118, "She approaches.", "...", "",  1 };
	events[118] = {119 , 119, "I saw how you helped that woman.", "", "",  1 };
	events[119] = {120 , 120, "I'm the aide to the mayor.", "", "",  1 };
	events[120] = {121 , 121, "I think the mayor would love to meet someone like you.", "", "",  1 };
	events[121] = {122 , 122, "She leads you to the Mayor's Office.", "", "",  1 };

	// === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office 
	// Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office === Mayor's Office ===

	events[122] = {123 , 123 , "You enter a dimly lit room.", "", "",  1 };
	events[123] = {124 , 124 , "Haze creates shafts of light through the blinds.", "", "",  1 };
	events[124] = {9 , 9 , "A man stands at the window. A glass of scotch in one hand.", "", "",  1 };
	events[125] = {128 , 128 , "The drink isnt for everyone!", "", "",  1 };
	events[126] = {128 , 128 , "Ah. 18 year. Good taste!", "", "",  1 };
	events[127] = {128 , 128 , "A fiscal man I see!", "", "",  1 };
	events[128] = {129 , 129 , "Now, Ti here tells me...", "", "",  1 };
	events[129] = {130 , 130 , "...that you helped one of our citizens.", "", "",  1 };
	events[130] = {131 , 131 , "Now, I realize thos is out of the blue...", "", "",  1 };
	events[131] = {132 , 132 , "... but I really need some help.", "", "",  1 };
	events[132] = {11 , 11 , "A village to the north of us has a water issue.", "", "",  1 };
	events[133] = {134 , 12 , "Yes in fact!", "I already stopped by!", "I passed by! I should have helped!",  1 };
	events[134] = {135 , 135 , "You are amazing! Here's a bit of gold for your trouble!", "", "",  1 };
	events[135] = {136 , 136 , "More gold! They offer a place for the night. You rest.", "", "",  1 };
	events[136] = {137 , 137 , "You decide to stay in town... For now.", "", "",   1};
	events[137] = {138 , 138 , "You have a room ath the inn closest to the mayors office!", "", "",  1 };
	events[138] = {139 , 139 , "A note on the bed reads:", "", "",  1 };
	events[139] = {140 , 140 , "Courtesy of the mayor! <3 Ti", "", "",  1 };
	events[140] = {101 , 101 , "", "", "",  1 };
	events[141] = {101 , 101 , "", "", "",  1 };
	events[142] = {101 , 101 , "", "", "",  1 };
	events[143] = {101 , 101 , "", "", "",  1 };
	events[144] = {101 , 101 , "", "", "",  1 };
	events[145] = {101 , 101 , "", "", "",  1 };
	events[146] = {101 , 101 , "", "", "",  1 };
	events[147] = {101 , 101 , "", "", "",  1 };
	events[148] = {101 , 101 , "", "", "",  1 };
	events[149] = {101 , 101 , "", "", "",  1 };
	events[150] = {101 , 101 , "", "", "",  1 };
	//    ___    ___    ___   _     
	//   |__ \  / _ \  / _ \ ( )    
	//      ) || | | || | | ||/ ___ 
	//     / / | | | || | | |  / __|
	//    / /_ | |_| || |_| |  \__ \0
	//   |____| \___/  \___/   |___/
//          200-299       Evil Track dialogue


	events[200] = {101 , 101, "Fuck you too!", "", "",  1 };
	events[201] = {202 , 202, "You move on. No burdens in your wake. time to head to town.", "", "",  1 };
	events[202] = {203 , 203, "Town becomes closer with every passing hour.", "", "",  1 };
	events[203] = {204 , 204, "You approach the town. It's dirty. It's in shambles.", "", "",  1 };
	events[204] = {205 , 205, "You walk through the main gate. The town is massive.", "", "",  1 };
	events[205] = {206 , 206, "A woman slouches in your path of travel. You trip over her.", "", "",  1 };
	events[206] = {207 , 207, "You stand up and dust off. She lies there. Hurting.", "", "",  1 };
	events[207] = {116 , 208, "Will you help her?", "Yes.", "No.",  0 };
	events[208] = {209 , 209, "A shady figure eyes you from around a market stall.", "", "",  1 };
	events[209] = {210 , 210 , "He saw what you did.", "", "",  1 };
	events[210] = {211 , 211 , "He approaches.", "", "", 1  };
	events[211] = {212 , 212 , "The way you treated that old bag. My boss likes it. Come with me.", "", "", 1 };
	events[212] = {213 , 213 , "You are led through alleys. Tunnels. Sewers.", "", "",  1 };
	events[213] = {214 , 214 , "The sights and smells are less than desirable. You start to find a charm in it.", "", "",  1 };
	events[214] = {215 , 215 , "You come to a door at the end of an almost endless corridor.", "", "",  1 };
	events[215] = {2 , 2 , "A small viewport opens.", "", "",  1 };
	events[216] = {2 , 2 , "A gruff voice requests a password.", "", "",  1 };
	events[217] = {2 , 2 , "The man with you says: dank memes melt steel beams.", "", "",  1 };
	events[218] = {2 , 2 , "The door opens.", "", "",  1 };
	events[219] = {2 , 2 , "A single window is above and behind the bosses head.", "", "",  1 };
	events[220] = {2 , 2 , "A shaft of red light casts an evil halo on the boss.", "", "",  1 };
	events[221] = {2 , 2 , "My name. Is Chet.", "", "",  1 };
	events[222] = {2 , 2 , "My associate here saw what you did to that poor old woman.", "", "",  1 };
	events[223] = {13 , 13 , "You'd be a perfect addition to our little organization.", "", "",  1 };
	events[224] = {2 , 2 , "", "", "",  1 };
	events[225] = {2 , 2 , "", "", "",  1 };
	events[226] = {2 , 2 , "", "", "",  1 };
	events[227] = {2 , 2 , "", "", "",  1 };
	events[228] = {2 , 2 , "", "", "",  1 };
	events[229] = {2 , 2 , "", "", "",  1 };
	events[230] = {2 , 2 , "", "", "",  1 };
	events[231] = {2 , 2 , "", "", "",  1 };


	//    ____    ___    ___   _     
	//   |___ \  / _ \  / _ \ ( )    
	//     __) || | | || | | ||/ ___ 
	//    |__ < | | | || | | |  / __|
	//    ___) || |_| || |_| |  \__ \
	//   |____/  \___/  \___/   |___/



	events[300] = {0 , 1 , "question", "no", "yes", 0};
                            


	//    _  _     ___    ___   _     
	//   | || |   / _ \  / _ \ ( )    
	//   | || |_ | | | || | | ||/ ___ 
	//   |__   _|| | | || | | |  / __|
	//      | |  | |_| || |_| |  \__ \
	//      |_|   \___/  \___/   |___/
	          


	int idx = 0;
	while (idx >= 0)
	{
		idx = doEvent(events[idx]);
	}




//	cout << "The old man nods as you walk out the door." << endl;
//	Sleep(1000);
//	cout << "You walk down a dusty path. It is warm. Summer is coming." << endl;
//	Sleep(1000);
//	cout << "You come across a cat in the road." << endl;
//	Sleep(1000);
//	cout << "The cat looks at you square in the eyes." << endl;
//	Sleep(3000);
//	cout << "Meow." << endl;
//	Sleep(2000);
//	cout << "Meow." << endl;
//	Sleep(1000);
//	cout << "Meow." << endl;
//	Sleep(1000);
//	cout << "He seems to want you to follow." << endl;
//	Sleep(1000);
//
//
//	cout << "a) Sure kitty!" << endl;
//	Sleep(1000);
//	cout << "b) Fuck you cat." << endl;
//	Sleep(1000);
//	cin >> e;
//
//	switch (e) {
//	case 'a':
//		stats.pGoodness += 100;
//		stats.PCoin++;
//		cout << "The cat leads you towards a small village through a clearing of trees." << endl;
//		break;
//
//	case 'b':
//		stats.pGoodness -=100;
//		cout << "The cat hisses loudly and runs off. Wow. Karma is just going to love you." << endl;
//		break;
//	default:
//		cout << "Thats not an option!" << endl;
//		cout << "A memory of the old man smacking you comes to mind. Try again!" << endl;
//		break;
//
//	}
//
//
	system("pause");



}