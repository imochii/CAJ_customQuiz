// C.J & T.E //

## Custom Quiz Description
// ---------------------- //


-

## Languages Used 
// ---------------------- //
* C++
* CMake

-

## Has-A Relationship
// ---------------------- //
* Two classes in C++ have a Has-A relationship when at least one object of one class is a field of the other class.
* The class whose object is a field is called a *component* class.
* In this project, the Quiz program stores `Question` objects as components inside a `Quiz` class.

-

## Question Class
// ---------------------- //
* `Question` has a vector of `answer`s (where `answer` is a struct).

-

## Quiz Class
// ---------------------- //
* `Quiz` constructor uses an initializer list, like the `Question` default constructor does.
* `Quiz` `removeQuestion` methods have similar functionality as the `Question` class `removeAnswer` methods.
* `Quiz` methods are defined in the same order in the .cpp file as they are declared in the header file.

-

## Main program
// ---------------------- //
* The main program declares a `Quiz` object and makes a single call to `takeQuiz`.

-

## Testing program
// ---------------------- //
* `Main` function creates `Question` and `Quiz` objects and calls their methods to ensure that all the functionality works correctly.

-

## Quiz Questions
// ---------------------- //
  1. "Let's start you off easy...what comes at the end of a rainbow?"
  2. "I am the rare case when today comes before yesterday. What am I?..."
  3. "What's harder to catch the faster you run?..."
  4. "Voiceless it cries, wingless flutters, toothless bites, mouthless mutters. What be I?..."
  5. "What's the meaning of life?..."
  6. "Now for a hard one: This thing all things devours...Birds, beasts, trees, flowers...Gnaws iron, bites steel...Grinds hard stones to meal...Slays king, ruins town...And beats     mountains down. What is it?..."

-

## Quiz Answers
// ---------------------- //
  1. b
  2. c
  3. d
  4. a
  5. d
  6. b

-

## Sources
// ---------------------- //
* https://www.cliffsnotes.com/cliffsnotes/subjects/literature/what-are-the-riddles-that-gollum-asked-bilbo-in-the-hobbit
* https://www.rd.com/list/easy-riddles/

-

## Other contributers
// ---------------------- //
* Tyler Eisenmenger
* Lisa Dion
