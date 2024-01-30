/***********************************************************************
 * Source File:
 *    ACCELERATION
 * Author:
 *    Br. Helfrich and Emily Raventos
 * Summary:
 *    Everything we need to know about changing speed
 ************************************************************************/

#include "acceleration.h"
#include "angle.h"

#include <cmath> // for sin and cos

 /*********************************************
  * ACCELERATION : ADD
  *  a += a
  *********************************************/
void Acceleration::add(const Acceleration& acceleration)
{
   double x = acceleration.ddx;
   double y = acceleration.ddy;

   ddx = getDDX() + x;
   ddy = getDDY() + y;
}

/*********************************************
 * ACCELERATION : SET
 *  set from angle and direction
 *********************************************/
void Acceleration::set(const Angle& angle, double magnitude)
{
   double deg = angle.getRadians();

   // set_up
   if (deg == 360 or deg == 0)
   {
      ddx = 0;
      ddy = magnitude;
   }

   // set_right
   else if (deg == 90)
   {
      ddx = magnitude;
      ddy = 0;
   }

   // set_down
   else if (deg == 180)
   {
      ddx = 0;
      ddy = -magnitude;
   }

   // set_left
   else if (deg == 270)
   {
      ddx = -magnitude;
      ddy = 0;
   }

   // set_diagonal
   else
   {
      ddx = magnitude * sin(deg);
      ddy = magnitude * cos(deg);
   }
}
