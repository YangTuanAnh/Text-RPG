#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <time.h>
#include <set>
#include <cmath>
using namespace std;

int coin=0;
struct character {
	string title;
	int HP, DMG, ACC;
};
character player;
void fight(character A, character B);
void mount();
void downtown();
void count();

int main() {
	player.HP=20; player.DMG=1; player.ACC=5;
	
	character gremlin;
	gremlin.HP=10; gremlin.DMG=1; gremlin.ACC=2; gremlin.title="Gremlin";
	
	character yeti;
	yeti.HP=100; yeti.DMG=10; yeti.ACC=5; yeti.title="Abominable Snowman";
	
	character guard;
	guard.HP=100; guard.DMG=10; guard.ACC=5; guard.title="Zelfari Royal Guard";
	string name;
	cout << "A blind man walks into a bar" << endl;
	cout << "He knocks into a table and hits his head onto a chair, leaving him unconscious..." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	getch();
	
	cout << "What is your name, player?" << endl;
	getline (cin, name);
	player.title=name;
	
	cout << endl;
	
	cout << "!!!----------------------Chapter One: Eviction Notice----------------------!!!" << endl;
	cout << "In a tent there lived a magical, wild zombie named " << name << ". Not a ripped crowded, grey tent," << endl; 
	cout << "filled with weapons and a crowded smell, nor yet a moist, passionate, deserted tent with nothing in" << endl;
	cout << "it to sit down on or to eat: it was a zombie-tent, and that means shelter." << endl;
	cout << endl;
	
	cout << "Landlord: You better move your ass up, " << name << ". Your eviction notice is dued. You had one week to vacate." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	getch();
	
	cout << "# What would you like to do?" << endl;
	cout << "	>> Enter '1' to plead forgiveness" << endl;
	cout << "	>> Enter '2' to beat the landlord" << endl;
	
	int landlord; cin >> landlord;
	switch (landlord) {
		case 1: 
			cout << "You: Please, I'll pay up. Just give me some more time" << endl;
			cout << "# You're on your knees, putting your hands together, begging the landlord for mercy" << endl;
			break;
		case 2:
			cout << "You: How dare you!" << endl;
			cout << "# You pouch towards him, trying to push him over" << endl;
			break;
		default:
			cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
			return 0;
	}
	cout << "# The landlord holds you by the collar and ejects you off like a frisbee" << endl;
	
	srand(time(0));
	cout << "Landlord: And don't you dare come back until you have 3 coins for me" << endl;
	cout << "----------------------Press any key to continue----------------------" << endl;
	getch();
	
	cout << endl;
	
	cout << "!!!----------------------Chapter Two: The First Coin----------------------!!!" << endl;
	cout << name << "leaves his tent and sets out in search of three fragile coins." << endl;
	cout << "# What would you like to do?" << endl;
	cout << "	>> Enter '1' to head downtown" << endl;
	cout << "	>> Enter '2' to head to the mountains" << endl;
	int travel; cin >> travel;
	
	cout << endl;
	cout << "# On your way, a gremlin blocks the path! It seems to have a coin with them as well." << endl;;
		
	cout << "# What would you like to do?" << endl;
	cout << "	>> Enter '1' to attack it" << endl;
	cout << "	>> Enter '2' to ask politely for its coin" << endl;
	int battle; cin >> battle;
	
	switch (battle) {
		case 1: 
			cout << "Gremlin: I'll cut you up!" << endl;
			fight(gremlin, player);
			if (player.HP<=0) return 0;
			break;
		case 2:
			cout << "Gremlin: That's my coin! I'll cut you up!" << endl;
			fight(gremlin, player);
			if (player.HP<=0) return 0;
			break;
		default:
			cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
			return 0;
	}
	
	cout << "# After slaying the gremlin, would you still like to go on with your journey or change directions?" << endl;
	cout << "	>> Enter '1' to head downtown" << endl;
	cout << "	>> Enter '2' to head to the mountains" << endl;
	cin >> travel;
	
	switch (travel) {
		case 1: 
			cout << "# You head towards Zalfari, where the buildings are made of quartz and there erects giant statues of warriors" << endl;
			cout << "----------------------Press any key to continue----------------------" << endl;
			getch();
			cout << endl;
			cout << "!!!----------------------Chapter Three: The Second Coin----------------------!!!" << endl;
			cout << "# You meet a wizard. He doesn't seem sane tho, and he's has a robe covered in glitter! Poor thing." << endl;
			cout << "Wizard: I've been looking for someone who'll be willing to play my game! Guess a number between 1 and 100 within 6 tries and I'll gift you a coin!" << endl;
			cout << "# What would you like to do?" << endl;
			cout << "	>> Enter '1' to play the game" << endl;
			cout << "	>> Enter '2' to dismiss the wizard" << endl;
			
			int game; cin >> game;
			
			switch (game) {
				case 1: 
					cout << "Wizard: Let's go!'" << endl;
					count();
					break;
				case 2:
					cout << "# You dismissed the wizard" << endl;
					cout << "Wizard: Curses!" << endl;
					cout << "# The wizard walks away annoyed" << endl;
					cout << "# Walking around, you found a dagger. Why is there a dagger on the ground? Plot convenience?" << endl;
					player.DMG=20;	player.ACC=8;
					cout << "# Your new stats: " << "HP:" << player.HP << "; DMG:" << player.DMG << "; ACC:" << player.ACC*10 << "%; Coins: " << coin << endl;
					break;
				default:
					cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
					return 0;
			}
			cout << "----------------------Press any key to continue----------------------" << endl;
			getch();
			
			if (coin==1) {
				cout << "# A guard took notice of you. It doesn't seem like you're from here." << endl;
				cout << "Guard: How did you manage to enter Zalfari? You won't get away with this!" << endl;
				fight (guard, player);
				if (player.HP<=0) return 0;
			}
			cout << "----------------------Press any key to continue----------------------" << endl;
			getch();
			break;
		case 2:
			cout << "# You head towards Mt.Paethsmount, gloomy, cold, yet bustling with wanderers alike" << endl;
			cout << "----------------------Press any key to continue----------------------" << endl;
			getch();
			cout << endl;
			cout << "!!!----------------------Chapter Three: The Second Coin----------------------!!!" << endl;
			cout << "# You find a wishing well, there might be coins in there, wanna take a look?" << endl;
			cout << "	>> Enter '1' to take a peek" << endl;
			cout << "	>> Enter '2' to ignore" << endl;
			int well; cin >> well;
			switch (well) {
				case 1: 
					cout << "# You found another coin!" << endl;
					coin++;
					cout << "# Your new stats: " << "HP:" << player.HP << "; DMG:" << player.DMG << "; ACC:" << player.ACC*10 << "%; Coins: " << coin << endl;
					break;
				case 2:	
					cout << "# You ignored the wishing well, yet you stumbled upon a spear. You picked it up as your new weapon" << endl;
					
					player.DMG=20;	player.ACC=8;
					
					cout << "# Your new stats: " << "HP:" << player.HP << "; DMG:" << player.DMG << "; ACC:" << player.ACC*10 << "%; Coins: " << coin << endl;
					break;
				default:
					cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
					return 0;
			}
			cout << "----------------------Press any key to continue----------------------" << endl;
			getch();
			if (coin==1) {
				cout << "# A yeti attacks!" << endl;
				fight (yeti, player);
				if (player.HP<=0) return 0;
			}
			cout << "----------------------Press any key to continue----------------------" << endl;
			getch();
			break;
		default:
			cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
			return 0;
	}
	cout << endl;
	cout << "!!!----------------------Chapter Four: The Third Coin----------------------!!!" << endl;
	cout << "# You've managed to get 2 coins, what will you do?" << endl;
	cout << "	>> Enter '1' to go back home and find another gremlin for the 3rd coin" << endl;
	cout << "	>> Enter '2' to go back home and see what happens" << endl;
	int walk; cin >> walk;
	bool chance = (rand()%2);
	switch (walk) {
		case 1: 
			if (chance) {
				cout << "# There was no gremlin at all" << endl;
				break;
			}
			fight(gremlin, player);
			if (player.HP<=0) return 0;
			break;
		case 2:
			break;
		default:
			cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
			return 0;
	}
	if (coin!=3) {
		cout << "# On the way, you've found a hat. It's the landlord's missing heirloom" << endl;
		cout << "	>> Enter '1' to return it and hope the landlord'll forgive him'" << endl;
		cout << "	>> Enter '2' to sell it for the third coin" << endl;
		int hat; cin >> hat;
		switch (hat) {
			case 1:
				cout << "# You decided to return the hat to the landlord" << endl;
				cout << "Landlord: Oh my stars! How did you find my hat? Thank you so much for finding it" << endl;
				cout << "Landlord: You're free of rent for now. Thanks again for looking for my hat." << endl;
				cout << "# You've secured your tent for as long as you like" << endl;
				cout << "---------------------------THE END---------------------------" << endl;
				cout << "----------------------Press any key to continue----------------------" << endl;
				getch();
				return 0;
			case 2:
				cout << "# You've sold the hat, and earned another coin" << endl;
				cout << "# Your new stats: " << "HP:" << player.HP << "; DMG:" << player.DMG << "; ACC:" << player.ACC*10 << "%; Coins: " << ++coin << endl;
				break;
			default:
				cout << "# You're doing it wrong! You're supposed to press 1 or 2" << endl;
				return 0;
		}
	}
	cout << "# Finally having all 3 coins, you rush back to pay your debts before your stuff gets thrown out" << endl;
	cout << "Landlord: Ugh, finally. If you mess up again, I'm going to strangle you, you hear me?" << endl;
	cout << "# You've secured your tent for another month" << endl;
	cout << "---------------------------THE END---------------------------" << endl;
	cout << "----------------------Press any key to continue----------------------" << endl;
	getch();
	return 0;
}

void count() {
	int times=6;
	int attempt, guess = (rand()%100)+1;
	cout << "Wizard: Come on now, start guessing!" << endl;
	while (times--) {
		cin >> attempt;
		if (attempt==guess) {
			cout << "Wizard: Damn, you did it! Here's the coin I promised!" << endl;
			coin++;
			cout << "# Your new stats: " << "HP:" << player.HP << "; DMG:" << player.DMG << "; ACC:" << player.ACC*10 << "%; Coins: " << coin << endl;
			break;
		}
		else if (attempt<1 || attempt>100) cout << "Wizard: That ain't it";
		else if (abs(attempt-guess)<5) cout << "Wizard: Hotter" << endl;
		else if (abs(attempt-guess)<10) cout << "Wizard: Hot" << endl;
		else if (abs(attempt-guess)<25) cout << "Wizard: Cold" << endl;
		else if (abs(attempt-guess)<50) cout << "Wizard: Colder" << endl;
	} if (times<=0) {
		cout << "Wizard: Curses!" << endl;
		cout << "# The wizard walks away annoyed" << endl;
	}
}
void fight (character A, character B) {
	cout << endl;
	cout << "!!!----------------------"<<A.title << " V.S. " << B.title << "----------------------!!!"<<endl;
	cout << A.title << ": " << "HP:" << A.HP << "; DMG:" << A.DMG << "; ACC:" << A.ACC*10 << "%" << endl;
	cout << B.title << ": " << "HP:" << B.HP << "; DMG:" << B.DMG << "; ACC:" << B.ACC*10 << "%" << endl;
	cout << endl;
	while (A.HP>0 && B.HP>0) {
		int critA, critB;
		int dice = rand()%10+1;
		if (dice==1) critA=1;
		else if (dice<=A.ACC) critA=2;
		else critA=3;
		
		dice = rand()%10+1;
		if (dice==1) critB=1;
		else if (dice<=B.ACC) critB=2;
		else critB=3;
		
		switch (critA) {
			case 1: 
				cout << "# Critical hit! " << A.title << " attacked with " << A.DMG*2 << "DMG!" << endl;
				B.HP-=A.DMG*2;
				break;
			case 2:
				cout << "# " << A.title << " attacked with " << A.DMG << "DMG!" << endl;
				B.HP-=A.DMG;
				break;
			case 3:
				cout << "# " << A.title << " missed!" << endl;
				break;
		}
		
		switch (critB) {
			case 1: 
				cout << "# Critical hit! " << B.title << " attacked with " << B.DMG*2 << "DMG!" << endl;
				A.HP-=B.DMG*2;
				break;
			case 2:
				cout << "# " << B.title << " attacked with " << B.DMG << "DMG!"<< endl;
				A.HP-=B.DMG;
				break;
			case 3:
				cout << "# " << B.title << " missed!" << endl;
				break;
		}
		
		cout << endl;
	} 
	if (B.HP<=0) {
		cout << "# You died, try again" << endl;
	} else if (A.HP<=0) {
		cout << "# You won!" << endl;
		cout << "# You earned " << B.HP*3 << "HP!"<< endl;
		player.HP=B.HP; coin++;
		player.HP*=4;
		B.HP*=4;
		cout << "# Your new stats: " << "HP:" << B.HP << "; DMG:" << B.DMG << "; ACC:" << B.ACC*10 << "%; Coins: " << coin << endl;
	} 
	cout << endl;
}
