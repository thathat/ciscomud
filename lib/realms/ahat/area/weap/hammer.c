#include <lib.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();
    SetKeyName("generic weapon");
    SetId( ({"hammer", "warhammer"}) );
    SetAdjectives( ({ "generic" }));
    SetShort("a generic weapon");
    SetLong("A weapon of indeterminate proportions.");
    SetMass(50);
    SetVendorType(VT_WEAPON);
    SetClass(30);
    SetDamageType(BLADE);
    SetWeaponType("blade");
}
void init(){
    ::init();
}
