////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __GameObject_h__
#define __GameObject_h__
#include <string>
#include "Updateable.h"
#include "Attacker.h"
////////////////////////////////////////////////////////////////////////////////
using std::string;
enum Gender { Male, Female };
enum Class { Barbarian, Wizard, Paladin, Priest };
////////////////////////////////////////////////////////////////////////////////

// Base class for all game characters.

// --- Nina Ranta --- added class template 
template<class TYPE>
class GameObject : public Attacker, public Updateable
{
private:
  TYPE name;
  TYPE race;
  TYPE myClass; // <-- enum?
  TYPE age; 
  TYPE gender; // <-- enum?
  TYPE experience;
  TYPE hitpoints;

public:

  // --- Nina Ranta --- modified class function to communicate with template

  GameObject();
  virtual ~GameObject();

  void SetName( TYPE name) ;
  TYPE GetName() const;

  // enum?
  void SetClass( TYPE c);
  TYPE GetClass() const;

  void SetAge( TYPE age );
  TYPE GetAge() const;
  
  // enum?
  void SetGender( TYPE g );
  TYPE GetGender() const;
  
  void SetRace( TYPE r );
  TYPE GetRace() const;
  
  void SetExperience( TYPE experience );
  TYPE GetExperience() const;
  
  void Attack( GameObject *pObject );

  TYPE GetHitpoints() const;
  void SetHitpoints(TYPE hp );

  //---

  void Update();
};

#endif
