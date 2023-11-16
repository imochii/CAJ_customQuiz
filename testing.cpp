// Cat Jones & Tyler Eisenmenger

#include "Question.h"
#include "Quiz.h"
#include <iostream>

using namespace std;

bool testQuiz();
bool testQuestion();
bool passed = true;

Quiz quiz;
Question question;

int main()
{
    if ((testQuiz() == true) && (testQuestion() == true))
    {
        cout << "Passed all test cases!" << endl;
    }
    else
    {
        cout << "Failed 1 or more test cases!" << endl;
    }

    return 0;
}

bool testQuiz()
{
    passed = true;

    int numberofQuestions = 6;

    if (quiz.getNumberOfQuestions() != numberofQuestions)
    {
        cout << "Failed {1st} test case" << endl;
        passed = false;
    }

    if (quiz.removeQuestion(1))
    {
        cout << "Failed {2nd} test case" << endl;
        passed = false;
    }

    return passed;
}

bool testQuestion()
{
    passed = true;

    if (question.getPoints())
    {
        cout << "Failed {1st} test case" << endl;
        passed = false;
    }

    if (question.getNumAnswers())
    {
        cout << "Failed {2nd} test case" << endl;
        passed = false;
    }

    if (question.removeAnswer(1))
    {
        cout << "Failed {3rd} test case" << endl;
        passed = false;
    }

    return passed;
}

