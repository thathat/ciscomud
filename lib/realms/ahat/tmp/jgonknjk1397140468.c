#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Southwest Bridge to Ciscoburg %^RESET%^");
    SetLong(".");

    SetNightLong("This stone bridge is little more than a footpath across a shallow bend in the brook.
    
Behind you, northeast, you can see a large tree. Ahead of you, to the west, you see the colorful roofs of a village.
    ");
    SetDayLong("This stone bridge is little more than a footpath across a shallow bend in the brook. 
    
Behind you, northeast, you can see a large tree. Ahead of you, to the west, you see the colorful roofs of a village.
");

SetItems(([
({ "brook", "stream", "river", "water" }) : "The brook seems pretty shallow, but is very broad. It babbles happily by, unaware of your value judgements.",
({ "bridge", "stone bridge" }) : "It isn't much more than a group of stones laid closely together in the burbling waters of the brook. Be careful not to slip!",
({ "village", "roofs", "colorful roofs" }) : "The village doesn't seem to be bustling, though you can hear it, but it looks bright and tidy. All the roofs have been shingled in some bright color, like blue, green or red. If you unfocus your eyes, it almost reminds you of a stained glass window.",
]));

SetInventory(([
]));

      

}
void init(){
    ::init();
}