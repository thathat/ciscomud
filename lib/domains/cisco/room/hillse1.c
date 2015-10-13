#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Southeast Side of Hill %^RESET%^");
    SetNightLong("The slope here is more gentle, flattening out slightly before the edge of a sheer cliff face. There are more flowers here, clustering around a tiny pond that reflects the starry night sky. The pond has a rivulet that runs over the edge of the cliff and into the billowing clouds below.
    
You can walk along the cliff's edge towards the north, or return to the hill top by going northwest.
    ");
    SetDayLong("The slope here is more gentle, flattening out slightly before the edge of a sheer cliff face. There are more flowers here, clustering around a tiny pond. The pond has a rivulet that runs over the edge of the cliff and into the billowing clouds below.
    
You can walk along the cliff's edge towards the north, or return to the hill top by going northwest.
");
SetItems(([
({ "cloud", "clouds" }) : "The clouds in the canyon roil mysteriously. Ocassionally, you catch sight of a flash of lightning that crawls along their bellies. You wonder what's beneath them?",
({ "minnow", "minnows", "fish" }) : "Tiny, silvery fish dart among the pebbles in the shallow pond. They like to hide under the grass and flowers hanging over the water.",
({ "cliff", "cliff face", "edge", "canyon" }) : "Looking cautiously over the cliff's edge, you see it is filled with roiling, thick clouds that sometimes flicker with faint, strange lightning. You cannot see the other side of the cliff, however.",
"pond" : "A shallow pond with clear water. The bottom is paved with pebbles, and you see minnows darting here and there under the shadows the blue-bells' leaves cast.",
]));
SetExits( ([
"north" : "/domains/cisco/room/hilleast1",
"northwest" : "/domains/cisco/room/hill1.c",
]) );

      

    SetInventory( ([

      ]) );

}
void init(){
    ::init();
}
