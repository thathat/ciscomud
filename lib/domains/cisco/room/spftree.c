#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ The SPF Tree %^RESET%^");
    SetItems(([
        "trash" : "nope",
      ]));
    SetExits(([
        "north" : "/domains/cisco/room/park",
      ]));

    SetInventory(([
      ]));

}
void init(){
    ::init();
}
