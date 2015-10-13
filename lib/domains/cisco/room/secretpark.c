#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ A Secret! %^RESET%^");

    SetDayLong("On the other side of the rose bush is a peculiar little garden. It's surrounded on all sides by buildings, but no doors or windows face into it. Sunlight streams in brightly from overhead. Hedged by rose bushes, you'd pass it off as an eccentricity of the village's lack of urban planning, but that's when you notice the mice.
    
Tens of mice, all farming a garden of tiny cabbages with little hoes and rakes and seed pouches. Looking horrified, a mouse with a tin crown on his head points up at you and demands... something. You don't speak mouse, as far as you know. However, the center of the garden features a prominently large hole, as though something were recently uprooted.

You can (and probably should) leave by crawling out the way you came.
");
    SetNightLong("On the other side of the rose bush is a peculiar little garden. It's surrounded on all sides by buildings, but no doors or windows face into it, moonlight paints it dimly in blue tones. Hedged by rose bushes, you'd pass it off as an eccentricity of the village's lack of urban planning, but that's when you notice the mice.
    
Tens of mice, all farming a garden of tiny cabbages with little hoes and rakes and seed pouches. Looking horrified, a mouse king with a little tin crown on his head points up at you and demands... something. It's all squeaks to you. However, the center of the garden features a prominently large hole, as though something were recently uprooted.

You can (and probably should) leave by crawling out the way you came.
");
    
    
    SetItems(([
        "garden" : "It seems these mice are busily farming miniature cabbages. Neat rows of hundreds of minuscule cabbages array out from your clumsy feet.",
        ({ "mice", "mouse", "farming mice" }) : "Little brown mice, with little wooden tools, were busily farming until you blundered in. Some of them have little kerchiefs on their heads, or tiny leather aprons to hold seeds and tools. It's damned adorable.",
        ({ "hole", "large hole" }) : "This hole is smack in the center of the tiny cabbage rows. If you had to guess, you'd say it was regular cabbage sized. That's a pretty big cabbage for mice."
      ]));
SetInventory(([
"/domains/cisco/npc/mouseking" : 1,
]));
    SetExits( ([
        "out" : "/domains/cisco/room/ciscoburgalley",
      ]) );

}
void init(){
    ::init();
}
