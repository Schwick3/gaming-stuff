#include <iostream> 
#include <string>
#include <cstring>
#include <cstdlib>
#include <time.h>

using namespace std;

void dropLocation(string locations, int x);

int main(){

string locations;
int x;

//calls to drop location function
dropLocation(locations, x);

return 0;

}

void dropLocation(string locations, int x){

    //initializes rand
    srand (time(NULL));

    // list of possible drop locations
    string possibleLocations[] = {"Logjam Lumberyard","Shifty Shafts","Sleepy Sound",
    "Command Cavern","The Fortress","Coney Crossroads","The Daily Bugle",
    "Camp Cuddle","Tilted Towers","Sanctuary","Greasy Grove","Rocky Reels",
    "The Joneses","Condo Canyon","Synapse Station","Chonker's Speedway"};

    //chooses random location from array
    x = rand() %16;

    // outputs drop location 
    cout << "Your drop location is: "<< possibleLocations[x] << endl;
}