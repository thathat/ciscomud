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
SetItems(([
({ "clouds", "cloud", "cumulonimbus", "Look, an elephant! No, now it's a giraffe. Now it's the Internet!" }) : "Look, an elephant! No, now it's a giraffe. Now it's the Internet!",
({ "water", "west", "rushing water" }) : "It's probably water.",
"grass" : "This grass is curiously blue-green. A closer look at a blade reveals it is finely striped in emerald and turquoise.",
({ "flowers", "blue-bells", "blue flowers" }) : "These very large blue-bells smell quite a lot like freshly-baked donuts. An almost imperceptible chiming comes from them when the flowerheads bob in the breeze.",
]));
SetExits(([
"east" : "/domains/cisco/room/hill1",
]));

SetListen(([
({ "flowers", "blue-belled flowers", "flower", "blue-bells" }) : "These flowers are definitely chiming, like tiny bells. Weird.",
({ "rushi", "rush", "rus", "we", "rushing wa", "rushing water", "rushing", "ru", "a water", "rushing wat", "west", "wes", "rushing w", "rushin", "rushing ", "water", "rushing wate", "lib*std*dummy*857" }) : "It's not white-water rushing, but more like a babbling and rippling speed. Maybe it's a river?",
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
