#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetProperty("light", 2);
    SetLong("The main taproom of the Default Route is long and low-slung, lined with dark wooden beams against white plaster walls. The floor is stone tile, pounded flat, shiny in spots from wear. At each end of the room is a wide fireplace, with low fires burning in them. Heavy, walnut tables and chairs are scattered around the room, populated heavily with loudly talking patrons. At the back a long, polished bar runs the length of the room, standing room only.
    
A squared spiral staircase leads up from the back corner of the room. A wide, arched doorway leads west, next to the fireplace. Behind the bar, to the north, you see a swinging doubledoor. Behind you is the way out."); 
    SetShort("%^B_BLACK%^%^WHITE%^ The Default Route %^RESET%^");
    SetInventory(([
      ]));

}
void init(){
    ::init();
}
