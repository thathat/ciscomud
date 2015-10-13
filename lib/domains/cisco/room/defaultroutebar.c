#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetProperty("light", 2);
    SetLong("The main taproom of the Default Route is long and low-slung, lined with dark wooden beams against white plaster walls. Numerous tapestries and things nailed to the walls ward off any drafts. Ceiling crossbeams are hung with cheerful brass lanterns, lighting the room in a warm, reflected light. The floor is stone tile, pounded flat, shiny in spots from wear. At each end of the room is a wide fireplace, with low fires burning in them. Heavy, walnut tables and chairs are scattered around the room, populated heavily with loudly talking patrons. At the back a long, polished bar runs the length of the room carved elegantly in relief, standing room only. A swinging double door behind the bar disgorges and admits waitstaff from time to time.
    
A squared spiral staircase leads up from the back corner of the room. A wide, arched doorway leads west, next to the fireplace. Behind you is the way out."); 
    SetShort("%^B_BLACK%^%^WHITE%^ The Default Route %^RESET%^");
    SetItems(([
        ({ "tapestries", "things", "walls" }) : "The walls between the squared-off wooden timbers are largely covered by heavy, brightly-colored tapestries, banners and tin squares depicting the coat of arms of Ciscoburg: A green cylinder with crossed arrows and switches rampant.",
        ({ "bar", "relief" }) : "Elaborate scrollwork and relief leaves on the wooden bar frame the phrase 0.0.0.0 0.0.0.0 in a long oval.",
        ({ "floor", "tiles", "stone", "stone tile" }) : "Blue-grey river stone tiles line the floor in a neat grid, each flecked with bits of quartz here and here. One tile in particular, near the main entrance, seems extremely well worn, and gleams in the lantern light.",
        ({ "worn tile", "shiny tile" }) : "This tile is curved in the middle from what looks like decades of polishing. It seems many people pause to rub at it with their feet as they pass through the door.",
        ({ "fireplace", "wide fireplace", "low fire" }) : "Polished river rocks make up the mantle of the fireplaces on each end of the bar. Low fires crackle along logs in each of them, keeping the room pleasantly warm. The western fireplace's mouth actually shows through into the room beyond it.",
        ({ "patrons", "people" }) : "Elaborately hatted people from Ciscoburg populate most the tables and bar space. They talk animatedly over food and mugs. The din in the room is loud, but not uncomfortable.",   
      ]));
SetExits( ([
"south" : "/domains/cisco/room/ciscoburgalley",
"west" : "/domains/cisco/room/defaultroutedining.c",
]) );

}
void init(){
    ::init();
}
