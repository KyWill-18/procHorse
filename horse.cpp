#include <iostream>
#include <random>



void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinnier(int horseNum, int* horses);


const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

int main(){
        int horses[] = {0, 0, 0, 0, 0,};
        bool keepGoing = true;


        while (keepGoing){
                for(int hn = 0; hn < NUM_HORSES; hn++){
                        advance(hn, horses);
                        printLane(hn, horses);
                        if (isWinner (horseNum, horses)){
                                keepGoing = false;
                        }
                }

                std::cout << "Press enter to start next turn";
                std::cin.ignore();

        }
        return 0;
}


void advance(int number, int* array){
	int coin = dist(rd);
	if(coin == 1){
		array[number]++;

	}
}

void printLane(int number, int* array){
	for (int hn = 0; hn <LANE_LENGTH; hn++){
		if (hn == array[number]){
			std::cout << number;
		}
		
		else{
			std::cout << ".";
		}
		std::cout << std::endl;
	}

bool isWinner(int number, int* array){
	bool winnner = false;
	if (array[number] > LANE_LENGTH){
		winner = true;
		
		std::cout << number << "is the winner!";
		std::cout << std::endl;
	}
	
	else{
		winner = false;
	}
	return winner;
}
//end 



