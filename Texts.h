#pragma once

#include <string>

class Texts
{
public:
	Texts(void);
	std::string* CallTexts(std::string Calltext, int Action, int Prog);
	~Texts(void);
};
// to call the 15 string array of texts in the main/source file, use
// 
//		std::string* p = text.CallTexts(xx, y, zz);
//
// (this class function is not to print out the texts,
//  but to put the texts into a string array of 15 strings)
// 
// the Calltext parameter for each character:
// BC - bus captain
// Au - auntie
// Co - colleague
// Cy - cyclist
// SGA - security guard(angry)
// SGH - security guard(happy)
// BO - boss
//
// the Action parameter is based on the 
// numbering system in the GDD(page 4)
//
// ***important***
// the Prog parameter is not needed for any
// characters except the Cyclist, this is
// because since the cyclist's progress
// increases by 10% each turn, there is
// the string array will include the text
// from the action the player used, as well
// as the text to show the progress has 
// gone up(cyclist take damage)
//
// when using the progress parameter, use the progress
// he has at the start of the turn
// eg. if Prog = 0, the text used will be 
// to show him increasing the 
// progress from 0% to 10%
