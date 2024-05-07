/*! \file CRhombus.h
    \brief Declaration of the class Rhombus

    Details
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H

#include<iostream>
#include "CQuadrilateral.h"

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus : public Quadrilateral
{
    protected:
        float diagL; //diagonale maggiore
        float diagS; //diagonale minore

    public:

        /// @name CONSTRUCTORS/DISTRUCTOR
        /// @{
        Rhombus();
        Rhombus(float dL, float dS);
        Rhombus(const Rhombus &r);
        ~Rhombus();
        /// @}

        /// @name OPERATORS
        /// @{
        Rhombus& operator=(const Rhombus &r);
        bool operator==(const Rhombus &r);
        /// @}

        /// @name BASIC HANDLING
        /// @{
        void Init();
        void Init(const Rhombus &r);
        void Reset();
        /// @}

        /// @name GETTERS/SETTERS
        /// @{
        void SetDiagL(float dL);
        void SetDiagS(float dS);
        void SetDim(float dL, float dS);

        void GetDim(float &dL, float &dS);
        float GetDiagL();
        float GetDiagS();
        float GetLato();
        float GetPerimeter();
        float GetArea();
        /// @}

        /// @name DEBUG and SERIALIZATION
        /// @{
        void ErrorMessage(const char *string);
        void WarningMessage(const char *string);
        void Dump();
        /// @}
};

#endif