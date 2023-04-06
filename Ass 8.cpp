

#include <iostream>

using namespace std;


// computerGen function
int computerGen() {
    // returning a value of a generated number between 1 and 4 
    return 1 + (rand() % 4);
}

// move function
void move(int direction) {
    // to display which message should be displayed based on the value of the parameter direction 
    if (direction == 1) {
        cout << "Move up";
    }
    else if (direction == 2) {
        cout << "Move right";
    }
    else if (direction == 3) {
        cout << "Move down";
    }
    else if (direction == 4) {
        cout << "Move left";
    }
}

// main function
int main() {

    int up=0, right=0, left=0, down=0; //decalring counters for moves
    int moves; //variable to store the input of how many moves
    int num; //variable to store the generated number
    int direction; //variable of the parameter of move function
    do   
    {
        cout << "How many moves? Maximum 100: "; //prompting the user to input a number
        cin >> moves;  //taking input from the user
        cout << '\n';
    } while (moves > 100 || moves < 0);

    for (int i = 0; i < moves; i++) {   //for loop to call the function move n times and increase the counters by 1 depending on the logic
        num = computerGen();  //storing the value of the generated number for every iteration
        direction = num; //storing the generated number to use it as a parameter when calling the function move
        if (num == 1) {
            up++;
        }
        else if (num == 2) {
            right++;
        }
        else if (num == 3) {
            down++;
        }
        else if (num == 4) {
            left++;
        }
        move(direction); //calling the function move
        cout << '\n';
    }

    //displaying the final values of the counters
    cout << "Number of Up moves = " << up << '\n';
    cout << "Number of Right moves = " << right << '\n';
    cout << "Number of Down moves = " << down << '\n';
    cout << "Number of Left moves = " << left << '\n';
    return 0;
}