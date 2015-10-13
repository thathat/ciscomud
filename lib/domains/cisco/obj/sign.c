#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
    SetKeyName("sign");
    SetId( ({"sign"}) );
    SetAdjectives( ({"wooden"}) );
    SetShort("a short wooden sign");
    SetLong("This weathered sign has seen better days. There are words painted on it. Maybe you should read it!");
    SetDefaultRead(" \nThis way to Ciscoburg\n
    <----------");
    SetMass(20);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
    SetPreventGet("What are you, some kinda sign thief? No.");
}
void init(){
    ::init();
}
