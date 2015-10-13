#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

static void create(){
    armor::create();
    SetKeyName("hat");
    SetAdjectives( ({"fluffy", "white", "warm"}) );
    SetId( ({"headgear", "cover"}) );
    SetShort("a fluffy bunny hat");
    SetLong("This fluffy bunny hat is made of soft, sparkling, white wool.  It is probably very warm; it is certainly very cute.");
    SetMass(2);
    SetArmorType(A_HELMET);
    SetProtection(KNIFE, 25);
    SetProtection(BLUNT, 15);
    SetProtection(TRAUMA, 10);
    SetProtection(BLADE, 20);
}
void init(){
    ::init();
}
