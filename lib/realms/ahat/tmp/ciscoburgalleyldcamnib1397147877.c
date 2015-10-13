#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ A Dim Alley %^RESET%^");
    SetExits( ([
        "north" : "/domains/cisco/room/defaultroutebar.c",
      ]) );
    SetEnters( ([
        "trash" : "/domains/cisco/room/park.c",
      ]) );

    SetInventory(([
      ]));

}
void init(){
    ::init();
}
