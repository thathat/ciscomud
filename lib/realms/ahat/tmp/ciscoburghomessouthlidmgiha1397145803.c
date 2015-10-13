#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg - Residential Area South %^RESET%^");
    SetLong(".");

    SetNightLong("On the other end of the little stone bridge, a number of jaunty jetties jut out into the shallow waters of the brook. Cockleshell boats and coracles bob here and there, attached to the jetties with rope. At this time of night, the docks are empty of people, and the only sound is the gentle lap of brook water against the wood and shore.
    
Behind you, to the east, a little stone bridge leads across the brook. 
    ");
    SetDayLong("On the other end of the little stone bridge, a number of jaunty jetties jut out into the shallow waters of the brook. Cockleshell boats and coracles bob here and there, attached to the jetties with rope. A handful of sailors and merchants hustle around, carrying supplies to and fro. Several bored-looking fishermen occupy the ends of the docks, watching their lines, or dozing.
    
Behind you, to the east, a little stone bridge leads across the brook.
");

SetExits(([
"south" : "/domains/cisco/room/ciscoburgdocks",
]));

SetInventory(([
]));

      

}
void init(){
    ::init();
}
