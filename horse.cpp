#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinnier(int horseNum, int* horses);


const int NUM_HORSES = 5;
const int RACE_LENGTH =15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

int main(){
        int horses[] = {0, 0, 0, 0, 0,}
        bool keepGoing = true;


        while (keepGoing){

                for(int hn = 0; hn < NUM_HORSES; hn++){
                        advance(hn, horses);
                        printLane(hn, horses);
                        if (isWinner (hn, horses)){
                                keepGoing = false;

                        }
                }

                std::cout << "Press enter to start next turn";
                std::cin.ignore();

        }

        return 0;
}

