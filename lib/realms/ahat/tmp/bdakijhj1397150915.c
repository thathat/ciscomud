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
    SetItems(([
        "trash" : "A pile of trash against the back wall.",
      ]));
    SetNoObviousExits(1);
    SetSearch( ([ "trash" : "A secret path!", ]) );
    SetEnters( ([
        "trash" : "/domains/cisco/room/park.c",
      ]) );


    SetInventory(([
      ]));

}
void init(){
    ::init();
}
