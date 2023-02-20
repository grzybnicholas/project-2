#include "Textbook.hpp"
#include <iostream>
#include <string>
using namespace std;

enum grade_level {NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};
/**

  Default constructor.

  Default-initializes all private members.

*/
Textbook::Textbook(){
    subject_ = "";
    grade_ = NONE;
    review_ = false;
}

/**

  Parameterized constructor.

  @param     : The title of the book (a string)

  @param     : The author of the book (a string)

  @param     : The number of pages in the book (a positive integer)

  @param     : The subject of the book (a string)

  @param     : A flag indicating whether the book is in digital form

                with DEFAULT VALUE False (a Boolean)

  @param     : The grade level of the book (of type grade_level)

                with DEFAULT VALUE NONE

  @param     : A boolean to indicate whether the book has review

                questions with DEFAULT VALUE False

  @post      : The private members are set to the values of the

                corresponding parameters.

*/
Textbook::Textbook(string title, string author, int pageCount, string subject, bool digital = false, grade_level grade = NONE, bool review = false):Book(title,author,pageCount,digital){
    subject_ = subject;
}


/**

  @param  : a reference to a string representing the the subject of the book

  @post   : sets the private member variable to the value of the parameter

**/
void Textbook::setSubject(const string& sub){
    subject_ = sub;
}

/**

  @return  : the subject of the textbook

**/
string Textbook::getSubject(){
    return subject_;
}

/**

  @param  : a reference to a grade_level

  @post   : sets the private member variable to the value of the parameter

**/
grade_level Textbook::setGradelevel(const grade_level& grade){
    grade_ = grade;
}
/**

  @return  : a string representative of the grade_level

            (e.g. if the grade level is JUNIOR_HIGH,

            it returns "JUNIOR HIGH")

**/
string Textbook::getGradelevel(){
  if(grade_ = ELEMENTARY){
    return "ELEMENTARY";
  }else if(grade_ = JUNIOR_HIGH){
    return "JUNIOR_HIGH";
  }else if(grade_ = HIGH_SCHOOL){
    return "HIGH_SCHOOL";
  }else if(grade_ = COLLEGE){
    return "COLLEGE";
  }
}

/**

  @post   : sets the review question flag to True

**/
void Textbook::setReviewQuestions(){
 review_ = true;
}

/**

  @return  : the flag indicating if the texbook has review questions

**/
bool Textbook::checkReviewQuestions(){
    return review_;
}