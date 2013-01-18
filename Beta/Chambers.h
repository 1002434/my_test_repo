#ifndef __Chambers_h__
#define __Chambers_h__
#include "Room.h"
#include "Enemy.h"
#include <sstream>
////////////////////////////////////////////////////////////////////////////////
// --- Nina Ranta --- added full specialization for boolean type
template <>
class Chambers<bool> : public Room
{
private:
  bool waitForIt;
public:
  Chambers() : Room(3)
  {
    SetDescription("You are in princess' chambers.");
    Chambers<bool> = true;
  }
  void Update()
  {
    if ( Chambers<bool> )
    {
      Chambers<bool> = false;
      // ----
    }
    else 
    {
      // Juha Perala - Added '<<' operator overloading for IRenderer
      GetGame()->GetRenderer() << "Princess kisses you. You turn into a frog\n";
      GetGame()->GetRenderer() << "Congratulations, you've completed the game!";
      GetGame()->SetRunning(false);
    }
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
