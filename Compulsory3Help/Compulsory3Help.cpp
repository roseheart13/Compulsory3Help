

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

void battleship();
void passwordChange();

int x;
int y;
char mark = '*';

char move = getch();


char passBoard[4][4]{
	{'A','B','C','D'},
	{'E','F','G','H'},
	{'I','J','K','L'},
	{'M','N','O','P'}
};

char battleBoard[7][7]{
	{' ', 'A', 'B', 'C', 'D', 'E', 'F'},

	{'1', ' ', ' ', ' ', ' ', ' ', ' '},
	{'2', ' ', ' ', ' ', ' ', ' ', ' '},
	{'3', ' ', ' ', ' ', ' ', ' ', ' '},
	{'4', ' ', ' ', ' ', ' ', ' ', ' '},
	{'5', ' ', ' ', ' ', ' ', ' ', ' '},
	{'6', ' ', ' ', ' ', ' ', ' ', ' '}
	
};


void drawPass() {
	std::cout << " " << std::endl;
	std::cout << " " << " | " << passBoard[0][0] << " | " << passBoard[0][1] << " | " << passBoard[0][2] << " | " << passBoard[0][3] << " | " << std::endl;
	std::cout << " " << "  ---------------" << std::endl;
	std::cout << " " << " | " << passBoard[1][0] << " | " << passBoard[1][1] << " | " << passBoard[1][2] << " | " << passBoard[1][3] << " | " << std::endl;
	std::cout << " " << "  ---------------" << std::endl;
	std::cout << " " << " | " << passBoard[2][0] << " | " << passBoard[2][1] << " | " << passBoard[2][2] << " | " << passBoard[2][3] << " | " << std::endl;
	std::cout << " " << "  ---------------" << std::endl;
	std::cout << " " << " | " << passBoard[3][0] << " | " << passBoard[3][1] << " | " << passBoard[3][2] << " | " << passBoard[3][3] << " | " << std::endl;
	std::cout << " " << "  ---------------" << std::endl;
}

void drawBattle() {
	std::cout << " " << std::endl;
	std::cout << " " << battleBoard[0][0] << " | " << battleBoard[0][1] << " | " << battleBoard[0][2] << " | " << battleBoard[0][3] << " | " << battleBoard[0][4] << " | " << battleBoard[0][5] << " | " << battleBoard[0][6] << " | " << std::endl;
	std::cout << " " << "---------------------------" << std::endl;
	std::cout << " " << battleBoard[1][0] << " | " << battleBoard[1][1] << " | " << battleBoard[1][2] << " | " << battleBoard[1][3] << " | " << battleBoard[1][4] << " | " << battleBoard[1][5] << " | " << battleBoard[1][6] << " | " << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " " << battleBoard[2][0] << " | " << battleBoard[2][1] << " | " << battleBoard[2][2] << " | " << battleBoard[2][3] << " | " << battleBoard[2][4] << " | " << battleBoard[2][5] << " | " << battleBoard[2][6] << " | " << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " " << battleBoard[3][0] << " | " << battleBoard[3][1] << " | " << battleBoard[3][2] << " | " << battleBoard[3][3] << " | " << battleBoard[3][4] << " | " << battleBoard[3][5] << " | " << battleBoard[3][6] << " | " << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " " << battleBoard[4][0] << " | " << battleBoard[4][1] << " | " << battleBoard[4][2] << " | " << battleBoard[4][3] << " | " << battleBoard[4][4] << " | " << battleBoard[4][5] << " | " << battleBoard[4][6] << " | " << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " " << battleBoard[5][0] << " | " << battleBoard[5][1] << " | " << battleBoard[5][2] << " | " << battleBoard[5][3] << " | " << battleBoard[5][4] << " | " << battleBoard[5][5] << " | " << battleBoard[5][6] << " | " << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " " << battleBoard[6][0] << " | " << battleBoard[6][1] << " | " << battleBoard[6][2] << " | " << battleBoard[6][3] << " | " << battleBoard[6][4] << " | " << battleBoard[6][5] << " | " << battleBoard[6][6] << " | " << std::endl;
}

void movePass() {
	
	//board[row][col] x and y

	 

	switch (move) {
		case 'a':
			//move left
			y = y;
			x = x - 1;
			battleBoard[x][y] = mark;
			break;
		case 'd':
			//move rigth
			y = y;
			x = x + 1;
			battleBoard[x][y];
			break;
		case 'w':
			//move up
			y = y - 1;
			x = x;
			battleBoard[x][y];
			break;
		case 's':
			//move down
			y = y + 1;
			x = x;
			battleBoard[x][y];
			break;
		default:
			//idk what to put here

	}
}

void password() {

	drawPass();
	std::cout << "Write the password using WASD " << std::endl;
	std::cin >> move; 

}


void menu() {
	
	int answer;

	do {
		std::cout << " _ Main menu _ " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " 1. Change the password " << std::endl;
		std::cout << " 2. Play battleship " << std::endl;
		std::cout << " 3. Quit " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " Select an option (1-3): " << std::endl;
		std::cin >> answer;

		if (answer == 1) {
			passwordChange();
		}
		if (answer == 2) {
			battleship();
		}
		if (answer == 3) {
			std::cout << " " << std::endl;
		}
		else {
			std::cout << "Wrong input. try again " << std::endl;
		}

	} while (answer != 3);
}

void passwordChange() {
	
	std::cout << "_ Change the password _" << std::endl;

}

void battleship() {

	int place;

	std::cout << "Battleship!" << std::endl;
	std::cout << " " << std::endl;
	drawBattle();
	std::cout << "Place your ships" << std::endl;
	std::cin >> place;

}


int main()
{
	std::fstream fil;
	fil.open("password.txt");

	std::string password;
	fil >> password;
	fil.close();

}

