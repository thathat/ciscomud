#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg Market - North %^RESET%^");
    SetExits( ([
        "east" : "/domains/cisco/room/ciscoburgalley",
        "south" : "/domains/cisco/room/marketsouth.c",
      ]) );

    SetInventory(([
      ]));

}
void init(){
    ::init();
}