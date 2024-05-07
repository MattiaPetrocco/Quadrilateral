/// \file CRhombus.cpp
/// \brief class Rhombus: implemantation of the functions
///
/// Details
///

#include<iostream>
#include<math.h>
#include "CRhombus.h"

/// @brief default constructor
Rhombus::Rhombus()
{

    cout << "Rhombus - constructor - default" << endl;

    Init();

}

/// @brief constructor
/// @param dL diagonale maggiore
/// @param dS diagonale minore
Rhombus::Rhombus(float dL, float dS){

    Init();

    cout<<"Rhombus - constructor"<<endl;

    if(dL <=0. || dS <=0. )
    {
        WarningMessage("constructor: le diagonali devono essere > 0");
        SetDim(0,0);
    }
    else
        SetDim(dL,dS);
}

/// @brief destructor
Rhombus::~Rhombus()
{
    cout<<"Rhombus - destructor"<<endl;
    Reset();

}

/// @brief copy constructor
/// @param o reference to the object that should be copied
Rhombus::Rhombus(const Rhombus &r)
{
    cout<<"Rhombus - copy constructor"<<endl;

    Init(r);

}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus &r){

    cout<<"Rhombus - operator ="<<endl;

    Init(r);

    return *this;
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rhombus::operator==(const Rhombus &r){

    if (r.diagL==diagL && r.diagS==diagS)
        return true;
    return false;

}

/// @brief default initialization of the object
void Rhombus::Init() {
	
    SetDim(0,0);
	
}

/// @brief initialization of the object as a copy of an object
/// @param r reference to the object that should be copied
void Rhombus::Init(const Rhombus &r)
{
    Init();
    SetDim(r.diagL,r.diagS);

}

/// @brief total reset of the object
void Rhombus::Reset()
{

    SetDim(0,0);

}

/// @brief set diagS of the object
/// @param dL diag long
void Rhombus::SetDiagL(float dL)
{
    if(dL < 0.)
    {
        WarningMessage("Diag long must be > 0");
        return;
    }

    SetDim(dL, diagS);
}

/// @brief set diagL of the object
/// @param dS diag short
void Rhombus::SetDiagS(float dS)
{
    if(dS < 0.)
    {
        WarningMessage("Diag short must be > 0");
        return;
    }

    SetDim(diagL, dS);
}

/// @brief get width of the object
/// @return diagL 
float Rhombus::GetDiagL() {

	return diagL;

}

/// @brief get length of the object
/// @return diagS
float Rhombus::GetDiagS() {

	return diagL;
}

/// @brief set width and length of the object
/// @param diagL diagL 
/// @param diagS diagS
void Rhombus::SetDim(float dL, float dS)
{
    diagL= dL;
    diagS= dS;

    return;
}

/// @brief get width and length of the object
/// @param diagL diagL 
/// @param diagS diagS
void Rhombus::GetDim(float &dL, float &dS)
{
    dL= diagL;
    dS= diagS;

    return;
}

/// @brief computes the area of the object
/// @return the area 
float Rhombus::GetArea(){

    return((diagL*diagS)/2);

}

///@brief computes the lato of the object
///@return the lato
float Rhombus::GetLato(){

    float lato=sqrt((diagL*diagL)/4+(diagS*diagS)/4);
    return(lato);
}



/// @brief computes the perimeter of the object
/// @return the perimeter
float Rhombus::GetPerimeter(){

    float lato=sqrt((diagL*diagL)/4+(diagS*diagS)/4);
    return(lato*4);
}

/// @brief write an error message 
/// @param string message to be printed
void Rhombus::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Rectangle --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rhombus::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Rhombus::Dump() {
	cout << endl;
	cout << "---Rectangle---" << endl; 
	cout << endl;
	
	cout << "diag long = " << diagL << endl;
	cout << "diag short = " << diagS << endl;
	
	
	cout << endl;

}

