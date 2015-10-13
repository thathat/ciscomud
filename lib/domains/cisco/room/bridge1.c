#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Bridge to Ciscoburg %^RESET%^");
    SetNightLong("This is a rickety bridge leading west over a burbling brook. Moonlight diffracts off the waves, casting flickering shadows along the decaying slats of the bridge.
    
Further west, you can see the colorful rooftops of a village. Behind you, east, rises a tall hill.
    ");
    SetDayLong("This is a rickety bridge leading west over a burbling brook. Sunlight glares off the waves and foam, forming brief little rainbows here and there.
    
Further west, you can see the colorful rooftops of a village. Behind you, east, rises a tall hill.
");
SetItems(([
({ "brook", "stream", "river", "water" }) : "The brook seems pretty shallow, but is very broad. It babbles happily by, unaware of your value judgements.",
({ "bridge", "rickety bridge" }) : "This bridge is either really old, poorly constructed, or both. The slats are quite mossy and decaying. There are quite a few missing, and when you hop cautiously over the holes, the whole bridge groans uneasily.",
({ "village", "roofs", "colorful roofs" }) : "The village doesn't seem to be bustling, though you can hear it, but it looks bright and tidy. All the roofs have been shingled in some bright color, like blue, green or red. If you unfocus your eyes, it almost reminds you of a stained glass window.",
]));
SetExits(([
"east" : "/domains/cisco/room/hillwest1",
"west" : "/domains/cisco/room/ciscoburghousesnorth"
]));

SetListen(([
"village" : "You can hear the quiet murmur of many voices rising from the village, mixing with the noise of the brook.",
]));

      

}
void init(){
    ::init();
}
