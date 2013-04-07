//This is the best font
//Possible add scoring system
#include	<iostream>
#include	<string>

int score = 0;
int max_score = 0;

std::string intro = "Welcome to Ancient Greece! \nYou are a local magikian in the coastal town of Dion. \nYou have a bunch of citizens that wish to seek your services.\nCitizen1 -> Citizen10\nOr Exit to be done for the day.";
std::string what_cit = "What citizen would you like to help first?";
std::string what = "\nWhat would you like to do? (Curse Number)";
std::string fail = "You tried to conjure a lead tablet but the wrong curse was used";
std::string tab_created = "\n\nSUCCESSFULLY CREATED LEAD TABLET\n";
std::string backslash = "\n/////////////////////////////////////////////";

std::string cit_1 = "\nAn angry citizen comes to you, yelling and cursing about his chariot team \nloosing the races. He informs you he wants a curse againts the racer Abas of the Chariot Team White";
std::string cit_1_name = "Abas";
std::string cit_1_team = "White";
std::string cit_1_happy = "\nThe citizen thanks you for your help in cursing the wretched White Team, and pays you for your servieces";
std::string cit_1_mad = "\nThe citizen notices that you did not curse the right chariot team or the right racer name, he throws the lead tablet in your face and storms out";

std::string cit_2 = "\nAn angry women comes to you. She speaks of her husband, Thyrsos, cheating on her with another women and wishes to curse him to never marry again or find happiness.";
std::string cit_2_name = "Thyrsos";
std::string cit_2_happy = "\nThe angry women thanks you for your help in cursing her husband, and pays you for your servieces";
std::string cit_2_mad = "\nThe citizen notices that you did not curse the right man, she throws the lead tablet in your face and storms out";

std::string cit_3 = "\nA politican comes in, he asks you to curse his opponent, Eucles.";
std::string cit_3_name = "Eucles";
std::string cit_3_happy = "\nThe politican is very pleased with the results, and pays you for your services.";
std::string cit_3_mad = "\nThe politican notices the name is wrong and scorns you for wasting his time.";

std::string cit_4 = "\n";

std::string cit_5 = "\n";

std::string cit_6 = "\nA poor man comes hobeling in, he seeks the hand of a beautiful women named Callisto. He also tells you the name of her mother, Phanessa";
std::string cit_6_name = "Callisto";
std::string cit_6_mom_name = "Phanessa";
std::string cit_6_happy = "\nThe poor man is gratefull that he know will be with his love FOREVER! He pays you what he can for your services.";
std::string cit_6_mad = "\nThe man notices that you entered the name of his mother instead and wishes death upon you.";

std::string cit_7 = "\n";

std::string cit_8 = "\n";

std::string cit_9 = "\n";

std::string cit_10 = "\nA politican comes in, he is affraid that being in his power has resulted in many enemies and someone which he beileves put curses on him. He seeks a defensive spell to thwart any curses against him.";
std::string cit_10_happy = "\nThe politician is very pleased with the results and thanks you with payment.";
std::string cit_10_mad = "\nThe politician is upset that you made a mistake and says that you will pay for wasting his time.";

int set_correct_spell(std::string cit) {
	if (cit == "Citizen1")
		return 1;
	else if (cit == "Citizen2")
		return 3;
	else if (cit == "Citizen3")
		return 4;
	else if (cit == "Citizen4")
		return 0;
	else if (cit == "Citizen5")
		return 0;
	else if (cit == "Citizen6")
		return 2;
	else if (cit == "Citizen7")
		return 0;
	else if (cit == "Citizen8")
		return 0;
	else if (cit == "Citizen9")
		return 0;
	else if (cit == "Citizen10")
		return 7;
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

std::string chariot_Races() {
	std::string team = "";
	std::string name = "";
		
	std::cout << "\nWhat team is this curse against?" << std::endl;
	std::cin >> team;
	std::cout << "\nWhat racer is this curse against?" << std::endl;
	std::cin >> name;
	
	std::string curse = "\nI conjure you, daemon, whoever you may be, and order you, to torture and kill,  from this hour, this day, this moment, the horses of the " + team + " team; kill and   smash the charioteers " + name + "; do not leave a breath in them. I conjure you by him who has delivered you, at the time, the god of the sea and the air:Iao, Iasdao, Oorio, Aeia";
	
	if(team == cit_1_team && name == cit_1_name) {
		score = score + 10;
		return backslash + curse + backslash + tab_created + cit_1_happy;
	}
	else{
		return backslash + curse + backslash + tab_created + cit_1_mad;
	}
}

std::string bind() {
	std::string name = "";
	std::string mom_name = "";

	std::cout << "\nWhat is the name of the mother?" <<std::endl;
	std::cin >> mom_name;
	std::cout << "\nWhat is the name of the poor man's lover" << std::endl;
	std::cin >> name;

	std::string curse = "\nI record " + name + ", the daughter of " + mom_name + ", with Hermes the Restrainer. Restrain her near you. I bind " + name + " before Hermes the Restrainer—the hands, the feet of " + name + ", the whole body. ";
	
	if(name == cit_6_name && mom_name == cit_6_mom_name) {
		score = score + 10;
		return backslash + curse + backslash + tab_created + cit_6_happy;
	}
	else {
		return backslash + curse + backslash + tab_created + cit_6_mad;
	}

}

std::string revenge() {
	std::string name = "";

	std::cout << "\nWhat is the name of the husband?" << std::endl;
	std::cin >> name;
	
	std::string curse = "\n" + name + " and the women who will be seen with him. May he not marry any other woman or young maiden, or find happiness in life.";
	
	if(name == cit_2_name) {
		score = score + 10;
		return backslash + curse + backslash + tab_created + cit_2_happy;
	}
	else {
		return backslash + curse + backslash + tab_created + cit_2_mad;
	}
}

std::string tongue() {
	std::string name = "";
	
	std::cout << "\nWhat is the name of the politicians enemy?";
	std::cin >> name;

	std::string curse = "\nThe tongue of " + name + ". The tongues of the advocates of " + name;

	if(name == cit_3_name) {
		score = score +10;
		return backslash + curse + backslash + tab_created + cit_3_happy;
	}
	else{
		return backslash + curse + backslash + tab_created + cit_3_mad;
	}
}

std::string defense() {
	std::string curse = "\nIf anyone put a binding spell on me, be it man or woman, slave or free, alien or citizen, from my household or from outside it, be it out of envy toward my work or my actions, if anyone put a binding spell on me before Hermes, be it Hermes Erionious or Hermes Restrainer or Hermes Trickster, or before some other power, I bind it return all my enemies. I bind my opponent in court Dion" ;
	
	score = score + 10;
	return backslash + curse + backslash + tab_created + cit_10_happy;
}


int main () {
	std::cout << intro << std::endl;
	
	std::cout << what_cit << std::endl;
	
	std::string citizen = "";

	std::cin >> citizen;

	for(;citizen != "Exit";) {

		int correct_spell = 0;
		
		std::cout << "\nYou chose to help " + citizen;
		
		
		correct_spell = set_correct_spell(citizen);
		if(correct_spell != -1){
			max_score++;
			std::cout << "\n" << print_cit_message(citizen) << std::endl;

			std::cout << what << std::endl;

			int choice = 0;

			std::cin >> choice;
			if(correct_spell == choice) {
				if(choice == 1) {
					std::cout << chariot_Races() << std::endl;
				}
				else if (choice == 2) {
					std::cout << bind() << std::endl;
				}
				else if (choice == 3) {
					std::cout << revenge() << std::endl;
				}
				else if (choice == 4) {
					std::cout << tongue() << std::endl;
				}
				else if (choice == 7) {
					std::cout << defense() << std::endl;
				}
			}
			else
				std::cout << fail << std::endl;
		}
		else {
			std::cout << "\nThe Citizen you wish to help is not avaliable." << std::endl;
		}
		std::cout << "\nEnter next citizen you would like to help." << std::endl;
		std::cin >> citizen;
	}

	std::cout << "You are done providing services for the day." << std::endl;

	std::cout << backslash << "\nYour Scrore: " << score << "/" << max_score*10 << "\n" << backslash << std::endl;
}



