#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
    SetKeyName("cabbage");
    SetId( ({"cabbage", "vegetable"}) );
    SetAdjectives( ({"fresh", "green"}) );
    SetShort("a mystical cabbage");
    SetLong("This cabbage is exceptionally fresh and crisp looking. It radiates a soft, mystical light. Surely someone will find this useful?");
    SetMass(2);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
}
void init(){
    ::init();
}
