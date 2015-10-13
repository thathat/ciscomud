#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetProperty("light", 2);
    SetLong("The dining room is a smaller, quieter room. The stone floor is covered in heavy, plush rugs. Instead of tables, the walls are lined in well-padded, artfully carved booths with tall backs. The tops of the booths are connected with brass beams, and heavy, green drapes can be drawn across them to keep conversations even more private. The ceiling crossbeams support small brass, shaded chandeliers that cast a dim, warm light."); 
SetShort("%^B_BLACK%^%^WHITE%^ The Default Route - Dining %^RESET%^");
    SetItems(([
        ({ "booths", "booth", "artfully carved booths" }) : "The dark, polished wood of the booths are carved in relief with scrollwork and oak leaves. The occasional acorn stands out, being made of polished brass.",
        ({ "heavy rugs", "rugs", "rug", "plush rugs" }) : "These thick, heavy rugs are dyed brilliantly green and blue, with the familiar coat of arms of Ciscoburg stitched into them.",
        
      ]));
SetExits(([
"east" : "/domains/cisco/room/defaultroutebar",
]));

}
void init(){
    ::init();
}
