#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("copy of hillwest1.c");
    SetNightLong("The west side of the hill is a long, slow slope towards a curving brook. There are flat, polished rocks set into the grass, dimly reflecting the moonlight, a stepping-stone path that leads to the brook's edge.
    
There is a slightly worn path leading to the south, or you could go back east to the hill top.
    ");
    SetDayLong("The west side of the hill is a long, slow slope towards a curving brook. There are flat, polished rocks set into the grass, glinting in the sunlight, a stepping-stone path that leads to the brook's edge.
    
There is a slightly worn path leading to the south, or you could go back east to the hill top.
");
SetItems(([
({ "brook", "stream", "river", "water" }) : "The brook seems pretty shallow, but is very broad. Right now, there seems to be no way to get across it. It babbles happily by, nonetheless.",
({ "rocks", "stones", "stepping stones" }) : "These stones are all different shades of blue, gray and white in swirled patterns, almost like marble. One of them seems loose.",
({ "loose stone", "loose" }) : "You lever your fingers under the loose stepping stone, and pull it up slightly. An ant looks solemnly up at you and says, \"The password is %^GREEN%^ciscolab%^RESET%^.\" You nod, wisely, and gently lower the stone again.",
]));

      

    SetInventory( ([

      ]) );

}
void init(){
    ::init();
}
