#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("fuckstick");
    SetAdjectives( ({"impertinent"}) );
    SetId( ({"fuckstick"}) );
    SetShort("an impertinent fuckstick");
    SetLong("What a dingus! What a maroon! You can't believe how annoying this thing is. What even is it? What is its problem. UGH. You just want to punch it.");
    SetSmell(([
        "default" : "It smells impertinent and aggrivating!",
      ]));
    SetListen(([
        "default" : "It's emitting a high-pitched whine that needs to be stopped.",
      ]));
    SetLevel(1);
    SetMelee(1);
    SetRace("human");
    SetClass("fighter");
    SetGender("stick-like");
}
void init(){
    ::init();
}
