#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("guy");
    SetAdjectives( ({"kinky", "sparkling", "gleaming"}) );
    SetAction(25, ({ "Guy farts gently." }));
    SetId( ({"dude", "fellow", "fella"}) );
    SetShort("Guy Buttlord");
    SetLong("BEHOLD, Guy Buttlord. His butt is amazing; his codpiece is fine.");
    SetInventory(([
        "/realms/ahat/area/armor/helmet" : "wear hat",
        "/realms/ahat/area/weap/crate" : "wield box",
      ]));
    SetListen(([
        "default" : "Guy is subtly farting. He is timing the poots with the shifting of his weight. Clever.",
      ]));
    SetSmell(([
        "default" : "Guy smells fantastic!",
      ]));
    SetLevel(10);
    SetMelee(1);
    SetRace("human");
    SetGender("male");
}

void init(){
    ::init();
}
