#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("generic npc");
    SetId( ({"fuckstick", "stick"}) );
    SetAdjectives(({"non player"}));
    SetShort("an impertinent fuckstick");
    SetLong("What a dingus! What a maroon! You can't believe how annoying this thing is? What even is it? What is it's problem. UGH. You just want to punch it.");
    SetLevel(1);
    SetMelee(1);
    SetRace("fuckstick");
    SetGender("male");
}
void init(){
    ::init();
}
