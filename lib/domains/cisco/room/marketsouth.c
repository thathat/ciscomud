#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg Market - South %^RESET%^");
    SetLong("Eventually, there'll be an exit to the west that goes to the road!");
    SetExits( ([
        "north" : "/domains/cisco/room/marketnorth",
        "east" : "/domains/cisco/room/park.c",
      ]) );
    SetInventory(([
      ]));

}
void init(){
    ::init();
}
