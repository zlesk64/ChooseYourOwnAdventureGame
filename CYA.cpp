#include <iostream>
using namespace std;

void cave() {
	cout<<"Congrats! you have made it into the cave and have found the orange diamond go back and play again to find more!" <<endl;
	exit (1);

}
int main() {

	char day[10];
	char name[12];
	char shower;
	char shirt;
	char right;
	char left;
	char direction;
	char chasm;
	char cave1;
	char lavapit;
	char water;
	char pups;
	char allgood;



	cout<<"Ok so first I will warn you this will waste your time and take a while to finish so get confortable and you have been warned" <<endl;
	cout<<"Ok all good with that?" <<endl;
	cout<<"***Use 'Y' for yes and 'N' for no.***" <<endl;
	
	cin >> allgood;
	if (allgood == 'Y' || allgood == 'y')
	{
		cout<<"Alright good lets go" <<endl;
	}

	else if (allgood == 'N' || allgood == 'N')
	{
		cout<<"Too bad you arnt ready come back when your ready" <<endl;
		exit (1);
	}

	cout<<"Welcome to the quest for the diamoond" <<endl;
	cout<<"Before we start what is your first name?" <<endl;
	cin >> name;
	cout<<"Alright lets get started which way should we go first?" <<endl;
	cout<<"Use either R or L to choose direction" <<endl;
	cin >> direction;

	if (direction == 'R' || direction == 'r')
	{
		cout<<"Right it is!" <<endl;
	}
	else if (direction == 'L' || direction == 'l')
	{
		cout<<"Alright left than!" <<endl;
	}

	cout<<"Oh no! you have encountered a chasm! How will you get across?" <<endl;
	cout<<"***Use R for rope and J for jump***" <<endl;
	cin >> chasm;

	if (chasm == 'R' || chasm == 'r')
	{
		cout<<"You made it! Good job!" <<endl;
	}
	else if (chasm == 'J' || chasm == 'j')
	{
		cout<<"You fell and died! Better luck next time." <<endl;
		exit (1);

	}
	{
		cout<<"Great you made it now you have come across a cave do you go thruough or keep away from it?" <<endl;
		cout<<"***Use Y to go in N to keep going***" <<endl;
		cin >> cave1;

		if (cave1 == 'Y' || cave1  == 'y')
		{
			cout<<"You go into the gave" <<endl;
			cave ();
		}
		else if (cave1 == 'N' || cave1 == 'n')
		{
			cout<<"You keep going and walk past the cave" <<endl;
		}
		{
			cout<<"Yikes! You've come across a lava pit what do you use to get across?" <<endl;
			cout<<"***Use B for boat, D for bridge and J for jump***" <<endl;
			cin >> lavapit;
			if (lavapit == 'B' || lavapit == 'b')
			{
				cout<<"Nice try you boat was made of wood and burned! Better luck next time" <<endl;
				exit (1);
			}
			else if (lavapit == 'D' || lavapit == 'd')
			{
				cout<<"Good you noticed the bridge but you got unlucky and it broke better luck next time!" <<endl;
				exit (1);
			}
			else if (lavapit == 'J' || lavapit == 'j')
			{
				cout<<"You figured it out i never said the lava pit was big!" <<endl;

				
			}
		
			
		
		
		
		}

	}



}



