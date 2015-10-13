#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Room One");
    SetLong("This is a room you can use as a template.");
    SetItems( ([
        "template" : "That's what this is.",
      ]) );
    SetInventory(([
        "/realms/ahat/area/obj/table" : 1,
      ]));

}

void init(){
    ::init();
}
