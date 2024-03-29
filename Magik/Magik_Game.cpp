#include	<iostream>
#include	<string>
#include <windows.h>
#include <conio.h>



int score = 0;
int max_score = 0;

std::string intro = "Welcome to Ancient Greece! \nYou are a local magician in the coastal town of Dion. \nYou have citizens wishing to seek your special services." 
	"\nWhen prompted enter which Citizen you would like to help (Citizen1->Citizen10)\n(IE: >Citizen1 to help the first, Citizen2 to help the second, etc...)\nOr Exit to be done for the day.\n";
std::string what_cit = "What citizen would you like to help first? (Or Exit)";
std::string what = "\nWhat spell/incantation would you like to use for this Citizen? (Curse Number)";
std::string fail = "\nThe Citizen picks up a rock and bashes your head in.";
std::string tab_created = "\n\nSUCCESSFULLY CREATED LEAD TABLET\n";
std::string backslash = "\n////////////////////////////////////////////////////////////////////////////////";
std::string underline = "\n________________________________________________________________________________";

std::string cit_1 = "\nAn angry citizen comes to you, yelling and cursing about his chariot team \nlosing the races. He informs you he wants a curse against the racer Abas of the Chariot Team White";
std::string cit_1_name = "Abas";
std::string cit_1_team = "White";
std::string cit_1_happy = "\nThe citizen thanks you for your help in cursing the wretched White Team, and pays you for your services";
std::string cit_1_mad = "\nThe citizen notices that you did not curse the right chariot team or the right racer name. He is so overcome with anger he strangles you to death.";

std::string cit_2 = "\nAn angry women comes to you. She speaks of her husband, Thyrsos, cheating on her with another women and wishes to curse him to never marry again or find happiness.";
std::string cit_2_name = "Thyrsos";
std::string cit_2_happy = "\nThe angry women thanks you for your help in cursing her husband, and pays you for your services";
std::string cit_2_mad = "\nThe citizen notices that you did not curse the right man. Still in her jealous rage, she kicks you to death.";

std::string cit_3 = "\nA politician comes in, he asks you to curse his opponent, Eucles.";
std::string cit_3_name = "Eucles";
std::string cit_3_happy = "\nThe politician is very pleased with the results, and pays you for your services.";
std::string cit_3_mad = "\nThe politician notices the name is wrong and scorns you for wasting his time.";

std::string cit_4 = "\nThe citizen walks in and is seeking some way to separate Patroclus and Strabo from each other.";
std::string cit_4_name1 = "Patroclus";
std::string cit_4_name2 = "Strabo";
std::string cit_4_happy = "\nThe citizen is very pleased with your work, and pays you for your services.";
std::string cit_4_mad = "\nThe citizen notices that you got the names on the tablets wrong and is very upset that you wasted their time.";

std::string cit_5 = "\nThis citizen is in a legal dispute and wishes to obtain a lead tablet to help him. He is in a legal dispute with Harmon and his hetaira, Galene. They also tell you that Oinophilos is one the supporters of Harmon.";
std::string cit_5_name1 = "Harmon";
std::string cit_5_name2 = "Galene";
std::string cit_5_name3 = "Oinophilos";
std::string cit_5_happy = "\nThe citizen is very happy that you were able to create this tablet for him and pays you.";
std::string cit_5_mad = "\nThe citizen notices that the names on the tablet are incorrect. He tackles you to the ground, knocking over a dangerous concoction  you made earlier. You both burst in to flames.";

std::string cit_6 = "\nA frail man comes hobbling in with a cane. He is seeking the hand of a beautiful women named Callisto. He also tells you the name of her mother is Phanessa";
std::string cit_6_name = "Callisto";
std::string cit_6_mom_name = "Phanessa";
std::string cit_6_happy = "\nThe poor man is grateful that he know will be with his love FOREVER! He pays you what he can for your services.";
std::string cit_6_mad = "\nThe man notices that you entered the name of his own mother instead. Surprisingly, he has a very good swing with his cane and is able to beat you to death.";

std::string cit_7 = "\nA women comes to you and explains that her neighbor's house is infested with fleas and she is worried that they are going to get into her place. She is seeking a way to keep her living space flea free.";
std::string cit_7_first = "rosebay";
std::string cit_7_second = "salt";
std::string cit_7_happy = "\nThe woman is very thankful that her place will not be infested. She pays you and leaves.";
std::string cit_7_mad = "\nThe woman takes the mixture, but you gave her the wrong mixture. The mixture you gave her will actually attract fleas.";

std::string cit_8 = "\nA man comes to explaining how recently he has been down on his luck in Dice. He is seeking advice on how to turn his luck around and start winning.";
std::string cit_8_happy = "\nThe man thanks you for telling him how to become more lucky. He pays and leaves.";

std::string cit_9 = "\nAn elderly women comes in coughing violently. She is seeking for something that will help her get over her terrible cough.";
std::string cit_9_happy = "\nShe takes the parchment and leaves after paying you.";

std::string cit_10 = "\nA politician comes in, he is afraid that being in his power has resulted in many enemies and someone which he believes put curses on him. He seeks a defensive spell to thwart any curses against him.";
std::string cit_10_happy = "\nThe politician is very pleased with the results and thanks you with payment.";

int set_correct_spell(std::string cit) {
	if (cit == "Citizen1")			//Correct
		return 1;
	else if (cit == "Citizen2")		//Correct
		return 7;
	else if (cit == "Citizen3")		//Correct
		return 10;
	else if (cit == "Citizen4")		//Correct
		return 9;
	else if (cit == "Citizen5")		//Correct
		return 13;
	else if (cit == "Citizen6")		//Correct
		return 6;
	else if (cit == "Citizen7")		//Correct
		return 16;
	else if (cit == "Citizen8")		//Correct	
		return 5;
	else if (cit == "Citizen9")		//Correct
		return 21;
	else if (cit == "Citizen10")	//Correct
		return 11;
	else 
		return -1;
}

std::string print_cit_message(std::string cit) {
	if (cit == "Citizen1")
		return cit_1;
	else if (cit == "Citizen2")
		return cit_2;
	else if (cit == "Citizen3")
		return cit_3;
	else if (cit == "Citizen4")
		return cit_4;
	else if (cit == "Citizen5")
		return cit_5;
	else if (cit == "Citizen6")
		return cit_6;
	else if (cit == "Citizen7")
		return cit_7;
	else if (cit == "Citizen8")
		return cit_8;
	else if (cit == "Citizen9")
		return cit_9;
	else if (cit == "Citizen10")
		return cit_10;
	else
		return "\nCitizen Message Not Found";
}

//std::string chariot_Races() {
bool chariot_Races() {
	std::string team = "";
	std::string name = "";
		
	std::cout << "\nWhat team is this curse against?" << std::endl;
	std::cin >> team;
	std::cout << "\nWhat racer is this curse against?" << std::endl;
	std::cin >> name;
	
	std::string curse = "\nI conjure you, daemon, whoever you may be, and order you, to torture and kill,  from this hour, this day, this moment, the horses of the " + team + " team; kill and   smash the charioteers " + name + "; do not leave a breath in them. I conjure you by him who has delivered you, at the time, the god of the sea and the air:Iao, Iasdao, Oorio, Aeia\n";
	
	if(team == cit_1_team && name == cit_1_name) {
		score = score + 10;
		std::cout << backslash + curse + backslash + tab_created + cit_1_happy << std::endl;
		return true;
	}
	else{
		std::cout << backslash + curse + backslash + tab_created + cit_1_mad << std::endl;
		return false;
	}
}

bool bind() {
	std::string name = "";
	std::string mom_name = "";

	std::cout << "\nWhat is the name of the mother?" <<std::endl;
	std::cin >> mom_name;
	std::cout << "\nWhat is the name of the poor man's lover?" << std::endl;
	std::cin >> name;

	std::string curse = "\nI record " + name + ", the daughter of " + mom_name + ", with Hermes the Restrainer. Restrain her near you. I bind " + name + " before Hermes the Restrainer—the hands, the feet of " + name + ", the whole body. \n";
	
	if(name == cit_6_name && mom_name == cit_6_mom_name) {
		score = score + 10;
		std::cout <<  backslash + curse + backslash + tab_created + cit_6_happy << std::endl;
		return true;
	}
	else {
		std::cout <<  backslash + curse + backslash + tab_created + cit_6_mad << std::endl;
		return false;
	}

}

bool revenge() {
	std::string name = "";

	std::cout << "\nWhat is the name of the husband?" << std::endl;
	std::cin >> name;
	
	std::string curse = "\n" + name + " and the women who will be seen with him. May he not marry any other woman or young maiden, or find happiness in life.\n";
	
	if(name == cit_2_name) {
		score = score + 10;
		std::cout <<  backslash + curse + backslash + tab_created + cit_2_happy << std::endl;
		return true;
	}
	else {
		std::cout <<  backslash + curse + backslash + tab_created + cit_2_mad << std::endl;
		return false;
	}
}

bool tongue() {
	std::string name = "";
	
	std::cout << "\nWhat is the name of the politicians enemy?\n";
	std::cin >> name;

	std::string curse = "\nThe tongue of " + name + ". The tongues of the advocates of " + name + "\n";

	if(name == cit_3_name) {
		score = score +10;
		std::cout <<  backslash + curse + backslash + tab_created + cit_3_happy << std::endl;
		return true;
	}
	else{
		std::cout <<  backslash + curse + backslash + tab_created + cit_3_mad << std::endl;
		return true;
	}
}

bool defense() {
	std::string curse = "\nIf anyone put a binding spell on me, be it man or woman, slave or free, alien or citizen, from my household or from outside it, be it out of envy toward my work or my actions, if anyone put a binding spell on me before Hermes, be it Hermes Erionious or Hermes Restrainer or Hermes Trickster, or before some other power, I bind it return all my enemies. I bind my opponent in court Dion\n" ;
	
	score = score + 10;
	std::cout <<  backslash + curse + backslash + tab_created + cit_10_happy << std::endl;
	return true;
}

bool seperate_men() {
	std::string man1 = "";
	std::string man2 = "";

	std::cout << "\nWhat is the name of the first man?\n" << std::endl;
	std::cin >> man1;

	std::cout << "\nWhat is the name of the second man?\n" << std::endl;
	std::cin >> man2;

	std::string curse = "\nI turn away " + man1 + " from " + man2 + ", from his face, from his eyes, from his mouth, from his breast, from his soul, from his belly, from his penis, from his anus, from his entire body, I turn away " + man1 + "from " + man2 + ".\n";

	if ((man1 == cit_4_name1 && man2 == cit_4_name2) || (man2 == cit_4_name1 && man1 == cit_4_name2)) {
		score = score + 10;
		std::cout <<  backslash + curse + backslash + tab_created + cit_4_happy << std::endl;
		return true;
	}
	else {
		std::cout <<  backslash + curse + backslash + tab_created + cit_4_mad << std::endl;
		return true;
	}
}

bool legal_pros() {
	std::string man = "";
	std::string girl = "";
	std::string support = "";

	std::cout << "\nWhat is the name of the desired target?\n";
	std::cin >> man;

	std::cout << "\nWhat is the name of the desired target's hetaira?\n";
	std::cin >> girl;

	std::cout << "\nWhat is the name of the target's supporter?\n";
	std::cin >> support;

	std::string curse =  "\nHermes of the underworld and Hekate of the underworld. Let " + man + " be bound before Hermes of the underworld and Hekate of the underworld. "
			"I bind " + man + "'s " + girl + "to Hermes of the underworld and to Hekate of the underworld. I bind her. And just as this lead is worthless and cold, so let that man "
			"and his property be worthless and cold. And those who are with him who have spoken and counseled concerning me.\n\n"

			"Let " + support + " and any other supporter of " + man + " be bound before Hermes of the underworld and Hekate of the underworld. Also " + man + "'s soul "
			"and mind and tongue and plans and the things that he is doing and the things that he is planning concerning me. May everything be contrary for him and for those counseling and acting.\n";

	if (man == cit_5_name1 && girl == cit_5_name2 && support == cit_5_name3) {
		score = score + 10;
		std::cout <<  backslash + curse + backslash + tab_created + cit_5_happy << std::endl;
		return true;
	}
	else {
		std::cout <<  backslash + curse + backslash + tab_created + cit_5_mad << std::endl;
		return false;
	}

}

bool flea() {
	std::string first = "";
	std::string second = "";

	std::cout << "\nWhat is the first ingredient you should use?\n";
	std::cin >> first;

	std::cout << "\nWhat is the kind of water should you mix with it?\n";
	std::cin >> second;

	std::string recipe = "\nYou grind up wet " + first + " and " + second + " water and tell her to spread it around her dwelling to keep the fleas out.\n";

	if (first == cit_7_first && second == cit_7_second) {
		score = score + 10;
		std::cout <<  backslash + recipe + backslash + cit_7_happy << std::endl;
		return true;
	}
	else {
		std::cout <<  backslash + recipe + backslash + cit_7_mad << std::endl;
		return true;
	}
}

bool dice() {
	std::string recipe = "\nYou tell the man to whisper the following saying into his hands while holding the dice"
		"\n\nLet none be my equal, for I am THERTHENITHOR EROTHORTHIS DOLOTHOR, and I throw what I will!\n";

	score = score + 10;
	std::cout <<  backslash + recipe + backslash + cit_8_happy << std::endl;
	return true;
}

bool coughing() {
	std::string recipe = "\nIn black ink you write on hyene parchment the following. \n"
						"TEUTHRAIO THRAITEU THRAITO THABARBAORI LIKRALIRETA deliver, Citizen9,  from the cough that holds her fast. \n";

	score = score + 10;
	std::cout <<  backslash + recipe + backslash + cit_9_happy << std::endl;
	return true;
}

int main () {

	std::string citizen = "";
	std::string citizen2 = "";
	std::string again = "";
	bool try_again = false;

	for(;!try_again;) {
		std::cout << intro + underline << std::endl;
		std::cout << what_cit << std::endl;
		std::cin >> citizen;
		for(;citizen != "Exit";) {

			int correct_spell = 0;
		
			std::cout << "\nYou chose to help " + citizen;
		
			correct_spell = set_correct_spell(citizen);
			if(correct_spell != -1){
				max_score++;
				std::cout << "\n" << print_cit_message(citizen) << std::endl;

				std::cout << what << std::endl;

				int choice;

				std::cin >> choice;
				
				if(choice != 0 && correct_spell == choice) {
					if(choice == 1) {
						if(!chariot_Races())
							break;	
					}
					else if (choice == 5) {
						if(!dice())
							break;
					}
					else if (choice == 6) {
						if(!bind())
							break;
					}
					else if (choice == 7) {
						if(!revenge())
							break;
					}
					else if (choice == 9) {
						if(!seperate_men())
							break;
					}
					else if (choice == 10) {
						if(!tongue())
							break;
					}
					else if (choice == 11) {
						if(!defense())
							break;
					}
					else if (choice == 13) {
						if(!legal_pros())
							break;
					}
					else if (choice == 16) {
						if(!flea())
							break;
					}
					else if (choice == 21) {
						if(!coughing())
							break;
					}
				}
				else {
					std::cout << "\nYou tried to conjure spell number: " << choice << "."
						"\nThe correct spell number is: " << correct_spell << "."
						"\nMaybe next time you will not be so careless." << fail << std::endl;
					break;
				}
			}
			else {
				std::cout << "\n\nThe Citizen you wish to help is not available." << std::endl;
			}
			std::cout << underline + "\nEnter next citizen you would like to help. (Or Exit)" << std::endl;
			std::cin >> citizen;
		}

		std::cout << "\nYou are done providing services for the day." << std::endl;

		std::cout << backslash << "\nScrore: " << score << "/" << max_score*10 << "\n" << backslash << std::endl;
	
		if(citizen == "Exit")
			break;



		for(;again != "N" || again != "Y";){
			std::cout << "\nTry Again? (Y/N)" << std::endl;
			std::cin >> again;
			if(again == "N" || again == "Y")
				break;
		}

		if (again == "N") {
			try_again = true;
		}
		else if (again == "Y") {
			try_again = false;
			score = 0;
			max_score = 0;
		}
		else {
			std::cout << "\nWrong input entered. Exiting" << std::endl;
			break;
		}	
	}
	std::cout << "\nThank you for playing." << std::endl;
	Sleep(10000);
}



