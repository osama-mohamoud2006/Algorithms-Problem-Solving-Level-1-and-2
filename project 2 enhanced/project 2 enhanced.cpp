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
    string arr_level[4] = {"Easy", "Med" , "Hard", "Mix"};

    return arr_level[level - 1];
}

// return random num according to the from-to range 
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// change screen color according to boolean
void SetScreenColor(bool rigth) {
    if (rigth) system("color 2F"); // green
    else {
        cout << "\a";
        system("color 4F"); // red
    }
}


// short range ( -32,768 to 32,767 )
// function to ask user how many questions (will use it later) 
short ReadHowManyQuestions() {
    short num_of_ques;
    do {
        cout << "How many Questions do you want? ";
        cin >> num_of_ques;
    } while (1 > num_of_ques || num_of_ques > 10);
    return num_of_ques;

}

// function to ask user about the level he wants to play (will use it later)
enQuestionsLevel ReadQuestionsLevel() {
    short level;
    do {
        cout << "Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix? ";
        cin >> level;
    } while (level<1 || level > 4);
    return (enQuestionsLevel)level;
}

// function to ask user about the operation he wants (will use it later)
enOperationType ReadOpType() {
    short op;
    do {
        cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix? ";
        cin >> op;
    } while (op<1 || op > 5);

    return enOperationType(op);

}

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType = enOperationType::Add; // Initialize with a default value
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0; // computer's answer
    int PlayerAnswer = 0; // player's answer 
    bool AnswerResult = false;
};

struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions; // will entered by user
    enQuestionsLevel QuestionsLevel; // will entered by user 
    enOperationType OpType; // will entered by user 
    short NumberOfWrongAnswers = 0; // counter
    short NumberOfRightAnswers = 0; // counter
    bool isPass = false; //will store the result of comparison 
};

// taking two nums and make opearion according to optype
int SimpleCalculator(int n1, int n2, enOperationType optype) {

    switch (optype) {
    case::Add:  return n1 + n2;
    case::Sub: return n1 - n2;
    case::Div:
        if (n2 == 0) n2 = 1; 
        return n1 / n2;
    case::Mult: return n1 * n2;
    default:return n1 + n2;
    }

}

// return random operation (if user asked) 
enOperationType GetRandomOperationType() {
    int op = RandomNumber(1, 4);
    return (enOperationType)op;
}

// generate Question according to op type and Question level (provided by user)
stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType) {
    stQuestion Question;

   
    if (QuestionLevel == enQuestionsLevel::Mix)
        QuestionLevel = (enQuestionsLevel)RandomNumber(1, 3);

    if (OpType == enOperationType::MixOp)
        OpType = GetRandomOperationType();

   
    Question.QuestionLevel = QuestionLevel;
    Question.OperationType = OpType;

    switch (QuestionLevel) {
    case enQuestionsLevel::EasyLevel:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        break;

    case enQuestionsLevel::MedLevel:
        Question.Number1 = RandomNumber(11, 90);
        Question.Number2 = RandomNumber(11, 90);
        break;

    case enQuestionsLevel::HardLevel:
        Question.Number1 = RandomNumber(91, 999);
        Question.Number2 = RandomNumber(91, 999);
        break;
    }

    Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, OpType);

    return Question;
}


// array to store Question 
void GenerateQuizzQuestions(stQuizz& Quizz)
{
    /// (Quizz.QuestionsLevel, Quizz.OpType ) by user
    for (short i = 0; i < Quizz.NumberOfQuestions; i++)
        Quizz.QuestionList[i] = GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
}


// function to ask user to enter number 
int ReadQuestionAnswer( ) 
{

    int Answer;
    cin >> Answer;

    return Answer;
}

// print!
void PrintTheQuestion(stQuizz& Quizz, short QuestionNumber)
{
    cout << "\n";
    cout << "Question [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n\n";
    cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
    cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
    cout << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << "\n";
    cout << "_________" << endl;
}



// compare the user answer and computer answer 
void CorrectTheQuestionAnswer(stQuizz& Quizz , short question_number) {

    if (Quizz.QuestionList[question_number].PlayerAnswer != Quizz.QuestionList[question_number].CorrectAnswer)
    {
        Quizz.QuestionList[question_number].AnswerResult = false;
        Quizz.NumberOfWrongAnswers++;
        cout << "Wrong Answer :-(\n";
        cout << "The right answer is: ";
     
        cout << Quizz.QuestionList[question_number].CorrectAnswer << "\n";

  }
    else {
       
        Quizz.QuestionList[question_number].AnswerResult = true;
       Quizz.NumberOfRightAnswers++;
        cout << "Right Answer :-)\n";
        

        
    }

    SetScreenColor (Quizz.QuestionList[question_number].AnswerResult);
    cout << endl;
}




void AskAndCorrectQuestionListAnswers(stQuizz & Quizz)
{
    for (short i = 0; i < Quizz.NumberOfQuestions; i++) {
        PrintTheQuestion(Quizz, i);
       Quizz.QuestionList[i].PlayerAnswer = ReadQuestionAnswer();
        CorrectTheQuestionAnswer(Quizz, i);
    }
    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);

}

// print pass or not 
string GetFinalResultsText(bool pass) {
    return pass ? "PASS :-)" : "Fail :-(";
}

// it explains itself !
void PrintQuizzResults(stQuizz Quizz)
{
    cout << "\n______________________________\n\n";
    cout << "Final Results is " << GetFinalResultsText(Quizz.isPass) << "\n";
    cout << "______________________________\n\n";
    cout << "Number of Questions     : " << Quizz.NumberOfQuestions << endl;
    cout << "Questions Level         : " << GetQuestionLevelText(Quizz.QuestionsLevel) << endl;
    cout << "OpType                  : " << GetOpTypeSymbol(Quizz.OpType) << endl;
    cout << "Number of Right Answers : " << Quizz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong Answers : " << Quizz.NumberOfWrongAnswers << endl;
    cout << "______________________________\n";
}

//ask user to input NumberOfQuestions
// ask user ''''''' QuestionsLevel
// ask user '''''''''' OpType
// generate quizz questions (array that store generate question)
// PrintTheQuestion 
// ReadQuestionAnswer (provided by user )
// CorrectTheQuestionAnswer 
// print details 
void PlayMathGame()
{
    stQuizz quizz;
    // by user 
    quizz.NumberOfQuestions = ReadHowManyQuestions(); // by user 
    quizz.QuestionsLevel = ReadQuestionsLevel(); // by user
    quizz.OpType = ReadOpType(); // by user 

    GenerateQuizzQuestions(quizz);
    AskAndCorrectQuestionListAnswers(quizz);
    PrintQuizzResults(quizz);
}


// make screen black , clear the screen 
void ResetScreen() {
    system("cls");
    system("color 0f");
}

void StartGame() {
    cout << "\n";
    char play = 'Y';
    do {
        ResetScreen();
        PlayMathGame();
        cout << "\nDo you want to play again? Y/N? ";
        cin >> play;
    } while (play == 'y' || play == 'Y');
}

int main()
{

    srand((unsigned)time(NULL));
    StartGame();
    return 0;


}