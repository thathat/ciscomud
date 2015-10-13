#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ The Server Room %^RESET%^");
    SetLong("This room is oppressively small. There are too many computers jammed into it, working and otherwise. The games server, the Actual Server, and the testing center PC all grind away noisily in the confined space. A pile of unused PC boxes, satellite dishes and other hardware lines the back wall, and for some reason, there is a window into one of the instructor's offices next to you.
    ");
    SetItems(([
        "floor" : "Plain, white tile. The janitor doesn't even bother with this room.",
        ({ "wall", "walls", "the walls" }) : "The walls are obscured by computer hardware.",
        ({ "games", "games server" }) : "The games server won its budget after a protracted debate. It is presently running three Terraria servers.",
        ({ "server", "actual server", "actual" }) : "Many a virtualization war has been fought and won on this battlefield.",
        ({ "testing center", "PC" }) : "A kludgy all-in-one PC for registering certification takers. It hates all life.",
        "window" : "Through the window you can see Doug's office, which looks like a computer hardware landfill. Doug's not in it, he almost never is.",
        ({ "pile", "unused PC boxes", "boxes" }) : "A mountain of wanted AMD boxes. They've been thoroughly rooted through."
      ]));
SetListen(([
"room" : "The exhaust from the various computers in this room is almost deafening.",
]));
      
    SetExits(([
        "north" : "/domains/cisco/room/ciscostart",
      ]));

    SetInventory( ([

      ]) );
}

void init(){
    ::init();
}
