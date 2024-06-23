/**
 * Incorrectly Generated Calculations: 
 * #1
 * How many pounds of bananas (eg, 1.7): .456
What is the price per pound (eg, $0.59):.98
Your total is $0.44688
How much cash will you pay with (eg, $4.43): 90000
Total cost: $0.44688
Change: $89999.6
-----------------
#2: 
How many pounds of bananas (eg, 1.7): .233
What is the price per pound (eg, $0.59):.444
Your total is $0.103452
How much cash will you pay with (eg, $4.43): 50000

Thank you for a model citizen banana transaction!
Total cost: $0.103452
Change: $49999.9
---------------
#3:
How many pounds of bananas (eg, 1.7): .12
What is the price per pound (eg, $0.59):.66
Your total is $0.0792
How much cash will you pay with (eg, $4.43): 4000000

Thank you for a model citizen banana transaction!
Total cost: $0.0792
Change: $4e+06
----------------
#4: 
What is the price per pound (eg, $0.59):.12
Your total is $0.10524
How much cash will you pay with (eg, $4.43): 9900000

Thank you for a model citizen banana transaction!
Total cost: $0.10524
Change: $9.9e+06
 */


#include <iostream>
#include <unistd.h> 

using namespace std;

/***
 * Used Chat GPT for help with this banana animation, and for the timings 
 */

void printBananaJail() {
    cout << "Uh-oh! It looks like you've underpaid";
    cout << "JAIL TIME\n";
    cout << "You've been banana jailed, you know what that means!\n\n"; 
    cout << "EVERYBODY DANCE NOWWW WAYYYAT WAYYAT B-A-N-A-N-A \n";
    
    usleep(500000); 

    // ASCII art animation of dancing banana in jail 
    for (int i = 0; i < 2; ++i) {
        cout << "    _____\n";
        cout << "   /     \\ \n";
        cout << "  |  \\o/  |\n";
        cout << "   \\  ^  /  \n";
        cout << "    |||||\n";
        cout << "   |     |\n";
        cout << "  |       |\n";
        cout << "  |       |\n";
        cout << "  |   B   |\n";
        cout << "   \\_____/\n";

        usleep(500000); // 0.5 second delay
        usleep(500000); // 0.5 second delay

        cout << "    _____\n";
        cout << "   /     \\ \n";
        cout << "  |  /o\\  |\n";
        cout << "   \\  ^  /  \n";
        cout << "    |||||\n";
        cout << "   |     |\n";
        cout << "  |       |\n";
        cout << "  |       |\n";
        cout << "  |   B   |\n";
        cout << "   \\_____/\n";

        usleep(500000); 
        usleep(500000); 
    }

    cout << "\nSeems you've failed to impress Sherriff Nana. You're in for a-peel-ing charges!\n";
}

int main() {
    float pounds, price, cash;
    float total, change;

    cout << "How many pounds of bananas (eg, 1.7): ";
    cin >> pounds;

    cout << "What is the price per pound (eg, $0.59):";
    cin >> price;

    total = pounds * price;
    cout << "Your total is $" << total << endl;

    cout << "How much cash will you pay with (eg, $4.43): ";
    cin >> cash;

    change = cash - total;


    if (cash < total) {
        cout << "Trying to scam a small business are we?"  << endl;
            printBananaJail();
    } 
    else {
        cout << "\nThank you for a model citizen banana transaction!\n";
        cout << "Total cost: $" << total << endl;
        cout << "Change: $" << change << endl;
        cout << "Peel you next time! " << endl;
    }
    

    return 0;
}
