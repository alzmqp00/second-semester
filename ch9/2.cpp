#include <iostream>
#include <string> 
using namespace std;

int main( )
{
    string phrase; 
    string adjective("fried"), noun("ants"); 
    string wish = "Bon appetite!"; 
    //重點是+號
    phrase = "I love " + adjective + " " + noun + "!";
    cout << phrase << endl
         << wish << endl;

    return 0;
}
