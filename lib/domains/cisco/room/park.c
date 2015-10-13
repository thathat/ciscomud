#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg Park %^RESET%^");
    SetItems(([
        "trash" : "nope",
      ]));
    SetExits( ([
        "out" : "/domains/cisco/room/ciscoburgalley",
        "west" : "/domains/cisco/room/marketsouth",
        "south" : "/domains/cisco/room/spftree.c",
      ]) );
    SetObviousExits( "west, south" );

    SetInventory(([
      ]));

}
void init(){
    ::init();
}
