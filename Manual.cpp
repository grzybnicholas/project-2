#include "Manual.hpp"
#include <iostream>
#include <string>
#include <regex>
using namespace std;
/**
  Default constructor.
  Default-initializes all private members.
*/
Manual::Manual(){
  url_ = "";
  device_ = "";
  visual_aid_ = false;
  website_ = false;
}

/**
  Parameterized constructor.ons
  param     : The title of the book (a string)
  param     : The author of the book (a string)
  param     : The number of pages in the book (a positive integer)
  param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  param     : The name of the device (a string)
  param     : The URL that is in the format
                'https://www.something.something'
                or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                with DEFAULT VALUE empty string (a string)
  param     : A Boolean indicating the presence of a visual aid
                with DEFAULT VALUE False
  post      : The private members are set to the values of the
                corresponding parameters.
                If a URL is provided, the website flag is set to True.
                If the URL is ill-formatted, the website is set to
                empty string and the website flag is set to False.
*/
// ^(https|http):\/\/www\.\w+\.\w{2,}
Manual::Manual(string title,string author, int pageCount, string device,bool digital,string url,bool visualAid):Book(title,author,pageCount,digital){
  device_ = device;
  url_ = url; 
  visual_aid_ = visualAid;
  if(regex_match(url_, regex{"https?://www\\..+\\..{2,}"})){
    website_ = true;
  }else{
    url_ = "";
    website_ = false;
  }
  }

/**
  param  : a reference to a string representing the device
  post   : sets the private member variable to the value of the parameter
**/
void Manual::setDevice(const string& device){
  device_ = device;
}


/**
  return  : the variable indicating the device the manual is for
**/
string Manual::getDevice() const{
  return device_;
}
/**

  param   : a reference to a website link (string) that is in the format

             'https://www.something.something'

             or 'http://www.something.something'

             with the last 'something' being at least 2 characters

  return  : has_website_ flag (a boolean)

  post    : If the link is not correctly formatted,

             store "Broken Link" in the link member variable (see <regex>)

             and either way set the has website flag to True

**/
bool Manual::setWebsite(const string& website){
 if(!regex_match(website, regex{"https?://www\\..+\\..{2,}"})){
  url_ = "Broken Link";
  website_ = true;
 }else{
  url_ = website;
  website_ = true;
 }
 return website_;
}
    
/**
  return  : the url for the website
**/
string Manual::getWebsite() const{
  return url_;
}
/**
  param  : a boolean
  post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
**/
void Manual::setVisualAid(const bool& visual){
  visual_aid_ = visual;
}

/**
  return  : the visual aid flag
**/
bool Manual::hasVisualAid() const{
  return visual_aid_;
}

/**
  return  : the has website flag
**/
bool Manual::hasWebsite() const{
  return website_;
}