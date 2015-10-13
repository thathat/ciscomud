#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ East Side of Hill %^RESET%^");
    SetNightLong("The east side of the hill slopes down very sharply and suddenly becomes the edge of a cliff. You have to walk like a duck to avoid tumbling over it. Big hummocks of grass and blue-bells hang over the cliff's edge, and a cautious look over shows you a vast canyon filled with clouds that are dimly luminescent, bathing the cliff walls in an eerie glow.
    
You can walk along the cliff's edge towards the south, or return to the hill top by going west.
    ");
    SetDayLong("The east side of the hill slopes down very sharply and suddenly becomes the edge of a cliff. You have to walk like a duck to avoid tumbling over it. Big hummocks of grass and blue-bells hang over the cliff's edge, and a cautious look over shows you a vast canyon filled with clouds. You cannot see the other side.

You can walk along the cliff's edge towards the south, or return to the hill top by going west.
");
SetExits(([
"west" : "/domains/cisco/room/hill1",
]));

SetSmell(([
({ "flower", "blue-belled flowers", "flowers" }) : "Yep, these smell just like new donuts. Mmmm, donuts.",
]));

      

    SetInventory( ([

      ]) );

}
void init(){
    ::init();
}
