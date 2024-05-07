#include<iostream>

#include "CRectangle.h"
#include "CRhombus.h"

int main() {

	Quadrilateral *A, *B, *C; 
	float s1,s2,s3,s4;
	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rhombus rhoC(2,1);
	
	A = &rectA;
	B = &rectB;
	C = &rhoC;

	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral C ****" << endl;
	C->Dump(); 
	cout << "**** ***** ****" << endl;
	
	cout << endl;
	cout << "**** rectangle A ****" << endl;
	rectA.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** rectangle B ****" << endl;
	rectB.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** rectangle C ****" << endl;
	rhoC.Dump(); 
	cout << "**** ***** ****" << endl;
	
	rectA = rectB; 
	
	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	
	rectB.SetWidth(12);
	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	
	B->GetSides(s1,s2,s3,s4);
	cout << "rectangle B - sides:" << s1 << " " << s2 << " "<< s3 << " "<< s4 << endl; 
	
	C->GetSides(s1,s2,s3,s4);
	cout << "rhombus C - sides:" << s1 << " " << s2 << " "<< s3 << " "<< s4 << endl;
	
	rhoC.SetDiagL(8);
	C->GetSides(s1,s2,s3,s4);
	cout << "rhombus C - sides:" << s1 << " " << s2 << " "<< s3 << " "<< s4 << endl;

//	C->GetArea(); 
	
		
	
	return 0;

}