#include <lib.h>

inherit LIB_CHAIR;

static void create() {
    chair::create();
    SetKeyName("swing");
    SetId("swing");
    SetAdjectives( ({ "wooden","sturdy" }) );
    SetShort("a sturdy-looking tree swing");
    SetLong("The tree swing certainly looks swingable! Whatever rope attaches it to the tree branch looks sturdy enough to hold
you.");
SetPreventGet(0);
    SetMass(150);
    SetCanGet(0);
    SetDollarCost(15);
    SetMaxSitters(1);
}
void init(){
    ::init();
}