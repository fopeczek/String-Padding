#pragma once
#include "Arduino.h"



String padd_string(String text, int change, int length); // ex. change = (+)1 means add 0 to beginig, result 0\text\ | another ex. change = -1 means add 0 to ending, result \text\0
// length indicates what text lenght is wonted and automaticly adds a zeros to begining

