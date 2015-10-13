#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ West Side of Hill %^RESET%^");
    SetNightLong("This is the top of a hill. Tall bluish-green grass whispers around your legs, and shadowy clumps of blue-belled flowers nod in a gentle breeze. Behind you is the door to the server room, a discontinuous wooden door on a hill. It's a calm, cool night, and the deep blue sky is winking with bright, crystalline stars.
    
To your west and east, the hill slopes down pretty sharply, and it is too dim to see beyond that, but you think you hear rushing water to the west. You see a tree to the southwest.
    ");
    SetDayLong("This is the top of a hill. Tall bluish-green grass whispers around your legs, and clumps of blue-belled flowers nod in a gentle breeze. Behind you is the door to the server room, a discontiguous wooden door on a hill. It's a sunny day, and the blue sky is herding huge cumulonimbus along at a good clip.
    
To your west and east, the hill slopes down pretty sharply. You think you can hear rushing water to the west. You see a tree to the southwest.
");
SetExits(([
"east" : "/domains/cisco/room/hill1",
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
