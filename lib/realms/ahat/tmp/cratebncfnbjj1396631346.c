#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();
    SetKeyName("box");
    SetId( ({"crate", "box."}) );
    SetAdjectives( ({ "generic" }));
    SetShort("a generic weapon");
    SetLong("A weapon of indeterminate proportions.");
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
