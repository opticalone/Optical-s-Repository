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
		test(1, 15);

		ColorPicker(10);
		//DelayTextWithSkip(70, "     ,d8888b        d8b       d8b       d8b                     ");                                   
		//DelayTextWithSkip(60, "     88P'           ?88       ?88       88P                     ");
		//DelayTextWithSkip(50, "  d888888P           88b       88b     d88                      ");
		//DelayTextWithSkip(40, "    ?88'  d888b8b    888888b   888888b 888   d888b8b  ?88   d8P ");
		//DelayTextWithSkip(30, "    88P  d8P' ?88    88P `?8b  88P `?8b?88  d8P' ?88  d88   88  ");
		//DelayTextWithSkip(20, "   d88   88b  ,88b  d88   88P d88,  d88 88b 88b  ,88b ?8(  d88  ");
		//DelayTextWithSkip(10, "  d88'   `?88P'`88bd88'   88bd88'`?88P'  88b`?88P'`88b`?88P'?8b ");
		//DelayTextWithSkip(1, "                                                            )88");
		//DelayTextWithSkip(1, "                                                          ,d8P");
		//DelayTextWithSkip(1, "                                                       `?888P'");
  //  
		//ColorPicker(8);
		//DelayTextWithSkip(20, "Welcome to Fahblay");
		//cout << " " << endl;
		//DelayTextWithSkip(50, "This is a text based adventure of good and...");
		//ColorPicker(4);
		//DelayTextWithSkip(300, "...EVIL");
		//ColorPicker(8);
		//cout << " " << endl;
		//DelayTextWithSkip(20, "What is your name?");
		//cin >> playerName;
		//cout << "" << endl;
		//DelayTextWithSkip(20, "We can't all have ringers I suppose.");
		//cout << playerName;

		//DelayTextWithSkip(20, ", you will have to make decisions.");
		//cout << "" << endl;
		///*Sleep(3000);*/
		//DelayTextWithSkip(20, "Your choices WILL determine your FATE.");
		//
		//cout << "" << endl;
		///*Sleep(3000);*/
		//DelayTextWithSkip(20, "Here is your first one");
		//
		//cout << "" << endl;
		///*Sleep(3000);*/

		//cout << "You wake up in a house." << endl;
		//
		///*Sleep(2000);*/
		//cout << "As your eyes open you start to scan the room." << endl;
		//
		///*Sleep(2000);*/
		//cout << "You see an old man in the corner on a stool. " << endl;
		///*Sleep(2000);*/
		//cout << "" << endl;
		//cout << "" << endl;
		//cout << "Watching." << endl;
		///*Sleep(2000);*/
		//cout << "" << endl;
		//cout << "" << endl;
		//cout << "Waiting." << endl;
		///*Sleep(2000);*/
		//cout << "" << endl;
		//cout << "" << endl;
		//ColorPicker(5);
		//


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


	events[0] = { "Would you like coffee or tea?", "Coffee", "Tea", 1 , 1 };
	
	events[1] = { "Does this hat make me look fat?", "I actually think it's a rather dashing hat!", "You're a fat old fuck anyway.", 101 , 200 };
	events[2] = { "The cat seems to want you to follow him, will you?", "no", "yes", 201 , 108 };
	events[3] = { "Hello! I'm so sorry to ask this... Can you help our village?", "no", "yes", 0 , 4 };
	events[4] = { "question", "no", "yes", 0 , 1 };
	events[5] = { "question", "no", "yes", 0 , 1 };
	events[6] = { "question", "no", "yes", 0 , 1 };
	events[7] = { "question", "no", "yes", 0 , 1 };
	events[8] = { "question", "no", "yes", 0 , 1 };

	events[9] = { "question", "no", "yes", 0 , 1 };
	events[10] = { "question", "no", "yes", 0 , 1 };
	events[11] = { "question", "no", "yes", 0 , 1 };


	//    __   ___    ___   _     
	//   /_ | / _ \  / _ \ ( )    
	//    | || | | || | | ||/ ___ 
	//    | || | | || | | |  / __|
	//    | || |_| || |_| |  \__ \
	//    |_| \___/  \___/   |___/
//          100-199       Good Track dialogue                      

	
	events[100] = { "question", "Continue", "", 101 , 101 };
	events[101] = { "The old man nods as you walk out the door.", "Okay!", "Alright!", 102 , 102 };
	events[102] = { "You walk down a dusty path. It is warm. Summer is coming.", "Neat.", "Hot.", 103 , 103 };
	events[103] = { "You come across a cat in the road.", "Aww!", "Eww.", 104 , 104 };
	events[104] = { "The cat looks at you square in the eyes.", "AWWWWH KITTY CATTTTTTT!!!", "Disgusting creature.", 105 , 105 };
	events[105] = { "Meow.", "Go away cat.", "You wanna come with me bud?", 106 , 2 };
	events[106] = { "Meooow.", "Fuck off cat.", "Fine! I'll find you an owner.", 107 , 2 };
	events[107] = { "MEOOOWWW.", "AHHHHH! Do you like it when I scream at you? No? Get the fuck away.", "Awww I really can't resist any more!", 201 , 108 };
	events[108] = { "You and your cat continue down the road. He hops up on to your shoulder.", "aww", "awww", 109 , 109 };
	events[109] = { "You walk. For hours. Come upon a village. ", "...", "...", 110 , 110 };
	events[110] = { "A viillager comes running out of the village towards you.", "...", "...", 3 , 3 };
	events[111] = { "You will?! Thank god. You're saving everyone!", "...", "...", 112 , 112 };
	events[112] = { "We need some help with our water collection system.", "...", "...", 101 , 101 };
	events[113] = { "You assist the villagers in setting up a tarp between a couple of buildings.", "", "", 101 , 101 };
	events[114] = { "question", "", "", 101 , 101 };

	//    ___    ___    ___   _     
	//   |__ \  / _ \  / _ \ ( )    
	//      ) || | | || | | ||/ ___ 
	//     / / | | | || | | |  / __|
	//    / /_ | |_| || |_| |  \__ \0
	//   |____| \___/  \___/   |___/
//          200-299       Evil Track dialogue
	events[200] = { "Fuck you too!", "...", "...", 101 , 101 };
	events[201] = { "You move on. No burdens in your wake. time to head to town.", "...", "...", 101 , 101 };



	//    ____    ___    ___   _     
	//   |___ \  / _ \  / _ \ ( )    
	//     __) || | | || | | ||/ ___ 
	//    |__ < | | | || | | |  / __|
	//    ___) || |_| || |_| |  \__ \
	//   |____/  \___/  \___/   |___/

	events[300] = { "question", "no", "yes", 0 , 1 };
                            
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