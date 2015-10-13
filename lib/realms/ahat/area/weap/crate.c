#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();
    SetKeyName("box");
    SetAdjectives( ({"large", "heavy"}) );
    SetId( ({"crate", "box."}) );
    SetShort("an extremely heavy crate");
    SetLong("This is the Crate of Destruction. It weighs just enough to crush all other lesser boxes. It requires two hands to properly wield.");
    SetHands(2);
    SetMass(700);
    SetVendorType(VT_WEAPON);
    SetClass(30);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
}
void init(){
    ::init();
}
