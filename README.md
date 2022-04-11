# Tower-of-Hanoi
**Overview**
- This is a Tower of Hanoi game implemented in C++ which allows the user to play from the terminal
----
**Features**:
- Implemented in c++ using vector and while loops in an algorithm
- Validated the functionality of game through manual testing located in *log.txt*
- Implemented using enumerations and prevents garbage data from being entered
----

## Screen Shots
<img width="301" alt="Starting Game" src="https://user-images.githubusercontent.com/92644639/162793784-b078b63d-0425-4d9b-b19f-a80c01b8acb4.png">
- Image of start of Game and user being prompted to select first "ring" represened by a letter

<img width="294" alt="End of Game" src="https://user-images.githubusercontent.com/92644639/162794038-83510ed7-9a6c-4800-a6e7-c9e02eb262c3.png">
- All the rings have been transfered from the inital to final tower

<img width="266" alt="Wrong Tower Selected" src="https://user-images.githubusercontent.com/92644639/162794111-31baafb2-5287-4616-9c1c-1fe5c9146bab.png">
-Example of wrong tower being selected and being prompted to select new tower



## File Details
- *main.cpp* - This file contains the source code for the main file
- *log.txt* - File allows for manual testing to make sure game is running correctly

## How to Run the Game
1. Download all the files from the repository.
2. Compile all the above `g++ -o output main.cpp` files.
3. Run `./output`

## How to Play the Game
The goal of the game is to move all the "rings" which are represented as letters to the last tower.
A tower that is smaller than the previous tower cannot be placed below a larger tower and vice versa.
-Select a source tower and a destination tower in order to move a ring.
