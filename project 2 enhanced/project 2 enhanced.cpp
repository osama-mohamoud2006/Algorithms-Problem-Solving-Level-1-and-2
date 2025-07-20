#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

enum enQuestionsLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

// return string that indicates the operation 
string GetOpTypeSymbol(enOperationType optype) {
    switch (optype) {
    case::Add:return "+";
        
    case::Sub : return "-";
       
    case::Mult: return "*";
       
    case::Div: return "/";
    default: return "mix";

    }
}
// return string that indicates to game level 
string GetQuestionLevelText(enQuestionsLevel level ) {
    string arr_level[4] = {"easy", "med" , "hard", "mix"};

    return arr_level[level - 1];
}

// return random num according to the from-to range 
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// change screen color according to boolean variable 
void SetScreenColor(bool rigth) {
    if (rigth) system("color2f"); // green
    else {
        cout << "\a";
        system("color4f"); // red
    }
}