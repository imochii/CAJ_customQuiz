// Cat Jones & Tyler Eisenmenger

#include "Quiz.h"
#include <iostream>
using namespace std;

int main()
{
    Quiz q;
    q.takeQuiz("OurQuizData.txt", cout, cin);
    return 0;
}
