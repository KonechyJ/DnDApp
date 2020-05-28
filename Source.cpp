using namespace std;
#include <iostream>
#include <string>
#include <cmath>  // for pow and sqrt functions
#include <cstdlib>  // for rand function
#include <ctime>	// for time function
#include <iomanip>
#include <vector>
#include <cstdio>


class player 
{
private:
	//basic info 
	string playerName;
	string playerRace;
	int playerHealth;
	int playerArmorScore;
	int playerSpeed;

	//player abilites
	int playerStrength;
	int playerDexerity;
	int playerConstitution;
	int playerIntelligence;
	int playerWisdom;
	int playerCharisma;
	
public:
	void setName(string name)
	{
		playerName = name;
	}
	string getName()
	{
		return playerName;
	}

	void setHealth(int health)
	{
		playerHealth = health;
	}
	int getHealth()
	{
		return playerHealth;
	}

	void setRace(string race)
	{
		playerRace = race;
	}
	string getRace() 
	{
		return playerRace;
	}

	void setArmorScore(int armorScore) 
	{
		playerArmorScore = armorScore;
	}
	int getArmorScore()
	{
		return playerArmorScore;
	}

	void setSpeed(int speed) 
	{
		playerSpeed = speed;
	}
	int getSpeed()
	{
		return playerSpeed;
	}

	void setStrength(int strength) 
	{
		playerStrength = strength;
	}
	int getStrength() 
	{
		return playerStrength;
	}

	void setDexerity(int dex)
	{
		playerDexerity = dex;
	}
	int getDexerity() 
	{
		return playerDexerity;
	}

	void setConstitution(int constituion) 
	{
		playerConstitution = constituion;
	}
	int getConstitution()
	{
		return playerConstitution;
	}

	void setIntelligence(int intelligence) 
	{
		playerIntelligence = intelligence;
	}
	int getIntelligence() 
	{
		return playerIntelligence;
	}

	void setWisdom(int wisdom)
	{
		playerWisdom = wisdom;
	}
	int getWisdom()
	{
		return playerWisdom;
	}

	void setCharisma(int charisma) 
	{
		playerCharisma = charisma;
	}
	int getCharisma() 
	{
		return playerCharisma;
	}




	/*

	union MyUnion
	{
		int t;
		char a;
		string tt;
	};

	*/
	
};

class enemy
{
	//basic info 
	string enemyName;
	string enemyRace;
	int enemyHealth;
	int enemyArmorScore;
	int enemySpeed;

	//enemy abilites
	int enemyCharisma;
	int enemyWisdom;
	int enemyIntelligence;
	int enemyDexerity;
	int enemyStrength;
	int enemyConstitution;

};


void fourSidedDie(int min, int max, int diceRoll, int timesRolled);
void sixSidedDie(int min, int max, int diceRoll, int timesRolled);
void eightSidedDie(int min, int max, int diceRoll, int timesRolled);
void tenSidedDie(int min, int max, int diceRoll, int timesRolled);
void twelveSidedDie(int min, int max, int diceRoll, int timesRolled);
void twentySidedDie(int min, int max, int diceRoll, int timesRolled);
void displayMenu();
void displayMainMenu();
void rollDice();

int main() 
{
	system("color 0A");
	
	
	int menuChoice;
	char yourAnswer;
	int numPlayers;
	//string tempPlayerName;
	int playerToChange;

	cout << "How many players are playing?" << endl;
	cin >> numPlayers;
	vector<player>currentPlayers = vector<player>(numPlayers);
	// this didnt work on my laptop
	//vector<player>currentPlayers;
	system("CLS");
	
	do
	{

		cout << "Hello and Welcome to Maddys DND Program." << endl << endl;
		displayMainMenu();

		cin >> menuChoice;
		while (menuChoice < 1 || menuChoice > 6)
		{
			cout << "Not a Valid Number, Please choose again" << endl;
			cin >> menuChoice;
		}


		switch (menuChoice)
		{
		case 1:
			

			cout << "Okay, type in their stats." << endl;

			for (auto &x : currentPlayers)
			{
				string strInput;
				int intInput;
				int count = 1;

				cout << "What is player " << count<< "'s name?" << endl;
				cin.ignore();
				getline(cin, strInput);
				x.setName(strInput);

				cout << "What is their Race?" << endl;
				cin.ignore();
				getline(cin, strInput);
				x.setRace(strInput);
				
				cout << "Enter Players Health: " << endl;
				cin >> intInput;
				x.setHealth(intInput);

				cout << "Enter Players Armor Score: " << endl;
				cin >> intInput;
				x.setArmorScore(intInput);

				cout << "Enter Players Speed: " << endl;
				cin >> intInput;
				x.setSpeed(intInput);

				cout << "Enter Players Strength: " << endl;
				cin >> intInput;
				x.setStrength(intInput);

				cout << "Enter Players Dexerity: " << endl;
				cin >> intInput;
				x.setDexerity(intInput);

				cout << "Enter Players Constituion: " << endl;
				cin >> intInput;
				x.setConstitution(intInput);

				cout << "Enter Players Intelligence: " << endl;
				cin >> intInput;
				x.setIntelligence(intInput);

				cout << "Enter Players Wisdom: " << endl;
				cin >> intInput;
				x.setWisdom(intInput);

				cout << "Enter Players Charisma: " << endl;
				cin >> intInput;
				x.setCharisma(intInput);

				count++;
			}
			break;
		case 2:

			// This doesnt work

			char playerChangeAnswer;

			for (int i = 0; i < currentPlayers.size(); i++)
			{

				currentPlayers[i].getName();
				currentPlayers[i].getRace();
				currentPlayers[i].getHealth();
				currentPlayers[i].getArmorScore();
				currentPlayers[i].getSpeed();

				currentPlayers[i].getStrength();
				currentPlayers[i].getDexerity();
				currentPlayers[i].getConstitution();
				currentPlayers[i].getIntelligence();
				currentPlayers[i].getWisdom();
				currentPlayers[i].getCharisma();
				cout << endl;
			}

			cout << "To change a players stats, please tell me the player's (Or enemies) number " << endl;
			cin >> playerToChange;

			// compare the names and pull up the stats of the player and run a for loop to reassign the stats wanted.

			//vector<player>::iterator itPlayer;
			//itPlayer = find(currentPlayers.begin(), currentPlayers.end(), ("TEST"));

			/*
			 cout the vector of names, ask the user which name they want to change,
			 set their answer to the equal to the size of current players
			 and then iterate through their stats to change whatever needed


			*/

			do{
				system("CLS");
				for (int i = 0; i < numPlayers; i++)
				{
					currentPlayers[i];
					cout << endl;
				}

				cout << "Now, which player would you like to change?" << endl;
				cin >> playerToChange;

				for (int i = 0; i < 1; i++) 
				{
					string strInput;
					int intInput;

					cout << "What is their name?" << endl;
					cin.ignore();
					getline(cin, strInput);
					currentPlayers[playerToChange].setName(strInput);

					cout << "What is their Race?" << endl;
					cin.ignore();
					getline(cin, strInput);
					currentPlayers[playerToChange].setRace(strInput);

					cout << "Enter Players Health: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setHealth(intInput);

					cout << "Enter Players Armor Score: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setArmorScore(intInput);

					cout << "Enter Players Speed: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setSpeed(intInput);

					cout << "Enter Players Strength: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setStrength(intInput);

					cout << "Enter Players Dexerity: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setDexerity(intInput);

					cout << "Enter Players Constituion: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setConstitution(intInput);

					cout << "Enter Players Intelligence: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setIntelligence(intInput);

					cout << "Enter Players Wisdom: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setWisdom(intInput);

					cout << "Enter Players Charisma: " << endl;
					cin >> intInput;
					currentPlayers[playerToChange].setCharisma(intInput);

				}

				cout << "Would you like to change another?" << endl;
				cin >> playerChangeAnswer;

			} while (toupper(yourAnswer == 'y'));

			break;
		case 3:
			// take the players stats and the enenmy stats and roll a dice to see which person is favor in the interaction
			break;
		case 4:
			rollDice();
			break;
		case 5:
			// just create a function to display all the different player stats and current enemny stats
			for (int i = 0; i < currentPlayers.size(); i++)
			{
				currentPlayers[i].getName();
				currentPlayers[i].getRace();
				currentPlayers[i].getHealth();
				currentPlayers[i].getArmorScore();
				currentPlayers[i].getSpeed();

				currentPlayers[i].getStrength();
				currentPlayers[i].getDexerity();
				currentPlayers[i].getConstitution();
				currentPlayers[i].getIntelligence();
				currentPlayers[i].getWisdom();
				currentPlayers[i].getCharisma();
				cout << endl;
			}
			break;
		case 6:
			cout << endl << "Exiting Program";
			exit(0);
			break;
		default:
			cout << "That is not a valid answer Kinder, Try again." << endl;
		}

		cout << "Do you want to return to menu? Y or N?" << endl;
		cin >> yourAnswer;
		system("CLS");

	} while (toupper(yourAnswer == 'y'));

	cout << endl << "Exiting Program";

	return 0;
	system("pause");
}

void displayMenu()
{
	cout << endl;
	cout << "Please enter the number sided die you need." << endl;
	cout << " 1) 4 sided die" << endl;
	cout << " 2) 6 sided die" << endl;
	cout << " 3) 8 sided die" << endl;
	cout << " 4) 10 sided die" << endl;
	cout << " 5) 12 sided die" << endl;
	cout << " 6) 20 sided die" << endl;
	cout << " 7) Exit" << endl;
	cout << "Please choose a number" << endl;
	return;
}


void displayMainMenu()
{
	cout << endl;
	cout << "Please enter the action you need help with." << endl;
	cout << " 1) Assign Players." << endl;
	cout << " 2) Change Players current stats." << endl;
	cout << " 3) Calculate interatction" << endl;
	cout << " 4) Roll dice" << endl;
	cout << " 5) Display All Stats" << endl;
	cout << " 6) Exit" << endl;
	cout << "Please choose a number" << endl;
	return;
}

void fourSidedDie(int min, int max, int diceRoll, int timesRolled)
{
	min = 1;
	max = 4;
	for (int i = 1; i <= timesRolled; i++)
	{
		diceRoll = (rand() % (max - min + 1)) + min;
		cout << endl;
		cout << " Roll Number " << i << " is..." << diceRoll << endl;

	}
	return;
}
void sixSidedDie(int min, int max, int diceRoll, int timesRolled)
{
	min = 1;
	max = 6;
	for (int i = 1; i <= timesRolled; i++)
	{
		diceRoll = (rand() % (max - min + 1)) + min;
		cout << endl;
		cout << " Roll Number " << i << " is..." << diceRoll << endl;

	}
	return;
}
void eightSidedDie(int min, int max, int diceRoll, int timesRolled)
{
	min = 1;
	max = 8;
	for (int i = 1; i <= timesRolled; i++)
	{
		diceRoll = (rand() % (max - min + 1)) + min;
		cout << endl;
		cout << " Roll Number " << i << " is..." << diceRoll << endl;

	}
	return;
}
void tenSidedDie(int min, int max, int diceRoll, int timesRolled)
{
	min = 1;
	max = 10;
	for (int i = 1; i <= timesRolled; i++)
	{
		diceRoll = (rand() % (max - min + 1)) + min;
		cout << endl;
		cout << " Roll Number " << i << " is..." << diceRoll << endl;

	}
	return;
}
void twelveSidedDie(int min, int max, int diceRoll, int timesRolled)
{
	min = 1;
	max = 12;
	for (int i = 1; i <= timesRolled; i++)
	{
		diceRoll = (rand() % (max - min + 1)) + min;
		cout << endl;
		cout << " Roll Number " << i << " is..." << diceRoll << endl;

	}
	return;
}
void twentySidedDie(int min, int max, int diceRoll, int timesRolled)
{
	min = 1;
	max = 20;
	for (int i = 1; i <= timesRolled; i++)
	{
		diceRoll = (rand() % (max - min + 1)) + min;
		cout << endl;
		cout << " Roll Number " << i << " is..." << diceRoll << endl;

	}
	return;
}


void rollDice()
{
	int min = 1;
	int max = 500;
	int timesRolled = 1;
	int diceRoll = 0;
	int yourChoice;
	char answerRepeat = 'y';
	unsigned seed = time(0);
	srand(seed);

	do
	{
		displayMenu();
		cin >> yourChoice;
		while (yourChoice < 1 || yourChoice >7)
		{
			cout << "Not a Valid Number, Please choose again" << endl;
			cin >> yourChoice;
		}


		switch (yourChoice)
		{
		case 1:
			cout << "How many times would you like to roll?" << endl;
			cin >> timesRolled;
			fourSidedDie(min, max, diceRoll, timesRolled);
			break;
		case 2:
			cout << "How many times would you like to roll?" << endl;
			cin >> timesRolled;
			sixSidedDie(min, max, diceRoll, timesRolled);
			break;
		case 3:
			cout << "How many times would you like to roll?" << endl;
			cin >> timesRolled;
			eightSidedDie(min, max, diceRoll, timesRolled);
			break;
		case 4:
			cout << "How many times would you like to roll?" << endl;
			cin >> timesRolled;
			tenSidedDie(min, max, diceRoll, timesRolled);
			break;
		case 5:
			cout << "How many times would you like to roll?" << endl;
			cin >> timesRolled;
			twelveSidedDie(min, max, diceRoll, timesRolled);
			break;
		case 6:
			cout << "How many times would you like to roll?" << endl;
			cin >> timesRolled;
			twentySidedDie(min, max, diceRoll, timesRolled);
			break;
		case 7:
			cout << "Auf Wiedersehen Kinder!" << endl;
			system("pause");
			exit(1);
			break;
		default:
			cout << "That is not a valid answer Kinder, Try again." << endl;
		}

		cout << "Do you want to roll again kinder? Y or N?" << endl;
		cin >> answerRepeat;

	} while (answerRepeat == 'y' || answerRepeat == 'Y');

}





