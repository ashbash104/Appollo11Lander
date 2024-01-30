/***********************************************************************
 * Source File:
 *    ANGLE
 * Author:
 *    Br. Helfrich and Ashlee Hart
 * Summary:
 *    Everything we need to know about a direction
 ************************************************************************/

#include "angle.h"
#include <math.h>  // for floor()
#include <cassert>
using namespace std;

/************************************
 * ANGLE : NORMALIZE
 * Author: Ashlee Hart
 ************************************/
double Angle::normalize(double radians) const
{
   if (radians > 2 * M_PI)
   {
      while (radians > 2 * M_PI)
      {
         radians -= 2 * M_PI;
      }
   }

   else if (radians < 0)
   {
      while (radians < 0)
      {
         radians += 2 * M_PI;
      }
   }

   return radians;
}



