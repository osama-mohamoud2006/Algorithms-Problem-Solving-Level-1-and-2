#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 }; // game options 
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 }; // game results
enum enScreen_color { black = 1, red = 2, yellow = 3, green = 4, red_on_black = 5, purple = 6, gameover = 7 };

struct stRoundInfo {
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResults {
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short Computer2WinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

////////////////////////////////////////////Screen settings ///////////////////////////////////////////////////
void restart_screen() {
    system("cls");
}
void screen_color(enScreen_color color) {
    if (color == enScreen_color::black)system("color 0F");
    if (color == enScreen_color::green)  system("color 2F");
    if (color == enScreen_color::yellow)  system("color 6F");
    if (color == enScreen_color::red)  system("color 4F");
    if (color == enScreen_color::red_on_black)  system("color 0C");
    if (color == enScreen_color::purple) system("color 0D");
    if (color == enScreen_color::gameover)  system("color 40");


}
void setwinnerscreencolor(enWinner Winner) {
    switch (Winner) {
    case enWinner::Player1:
        screen_color(green);
        break;
    case enWinner::Computer:
        cout << '\a';
        screen_color(red);
        break;
    default:
        screen_color(yellow);
        break;
    }
}
string Tabs(short NumberOfTabs) {
    string t = "";
    for (int i = 1; i < NumberOfTabs; i++) {
        t += "\t";
    }
    return t;
}
void ShowGameOverScreen() {
    cout << Tabs(2) << "__________________________________________________________\n\n";
    cout << Tabs(2) << "                 +++ G a m e  O v e r +++\n";
    cout << Tabs(2) << "__________________________________________________________\n\n";
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////choices //////////////////////////////////////////////////////////////////
enGameChoice PlayerChoice() {
    short Choice = 1; 
    do {

        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);
    return (enGameChoice)Choice;
}
enGameChoice ComputerChoice() {
    return (enGameChoice)RandomNumber(1, 3); 
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////winers info //////////////////////////////////////////////
string WinnerName(enWinner Winner) {
    string Winner_name[3] = {"player1", "computer", "draw"};
    return  Winner_name[Winner - 1];
}
enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
   
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice) return enWinner::Draw;
    switch (RoundInfo.Player1Choice) {
    case enGameChoice::Stone:
        if (RoundInfo.ComputerChoice == enGameChoice::Paper) return enWinner::Computer;
        break;
    case enGameChoice::Paper:
        if(RoundInfo.ComputerChoice == enGameChoice::Scissors) return enWinner::Computer;
        break;
    case enGameChoice::Scissors:
        if (RoundInfo.ComputerChoice == enGameChoice::Stone) return enWinner::Computer;
    }
    return enWinner::Player1;
}
///////////////////////////////////////////////////////////////////////////////////////////////







/////////////////////////////////////////////////////////////////////////////////////////////////////////
string ChoiceName(enGameChoice Choice) {
    string Choice_name[3] = { "Stone", "Paper", "Scissors" };
    return  Choice_name[Choice - 1];
}
void PrintRoundResults(stRoundInfo RoundInfo) {
    cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
    cout << "Player1  Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName<<"]" << endl;
    cout << "__________________________________\n" << endl;
    setwinnerscreencolor(RoundInfo.Winner);
}
enWinner WhoWonTheGame(short player1wontimes, short computerwintimes , short drawtimes ) {
    if (player1wontimes > computerwintimes) return enWinner::Player1;
    else if (player1wontimes < computerwintimes)  return enWinner::Computer;
    else return  enWinner::Draw;

}
stGameResults FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short  DrawTimes) {
   
    stGameResults GameResults;
    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.Computer2WinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes, DrawTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);
    return GameResults;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
short ReadHowManyRounds() {
    short GameRounds = 1;
    do {
        cout << "How Many Rounds 1 to 10? ";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds > 10);
    return GameRounds;
}
stGameResults PlayGame(short HowManyRounds) {
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short Gameround = 1; Gameround <= HowManyRounds; Gameround++) {
        cout << "\nRound [" << Gameround << "] begins:\n";
        RoundInfo.RoundNumber = Gameround;
        RoundInfo.Player1Choice = PlayerChoice();
        RoundInfo.ComputerChoice = ComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player1) Player1WinTimes++;

        else if (RoundInfo.Winner == enWinner::Computer)   ComputerWinTimes++;

        else
            DrawTimes++;
        PrintRoundResults(RoundInfo);

    }

   return  FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);

}
void ShowFinalGameResults(stGameResults GameResults) {
    cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
    cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << "Player1 won times  : " << GameResults.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer won times : " << GameResults.Computer2WinTimes << endl;
    cout << Tabs(2) << "Draw times         : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner       : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "___________________________________________________________\n";

    setwinnerscreencolor(GameResults.GameWinner);
}
////////////////////////////////////////////////////////////////////////////////////////
 
void StartGame() {
    char PLayAgain = ' Y ';
    do {
        restart_screen();

        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResults);
        cout << endl << Tabs(3) << "Do you want to play again? Y/N? ";
        cin >> PLayAgain;


    } while (PLayAgain == 'Y' || PLayAgain == 'y');


 }

int main() {
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}

