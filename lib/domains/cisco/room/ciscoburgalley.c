#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ A Dim Alley %^RESET%^");
    SetNightLong("This little alleyway winds crookedly between several houses, towards the heart of the little village. It's rather dark, due to the overlapping eaves above your head, but some light filters in from shuttered windows and the like. 
    
A little ways on, you find a little cul de sac filled with a thorny bush. To your north is a brightly-lit tavern that seems quite popular, in spite of its odd location. The alley continues narrowly on to the west.
");

    SetDayLong("This little alleyway winds crookedly between several houses, towards the heart of the little village. It's rather dim, due to the overlapping eaves above your head. 
    
A little ways on, you find a little cul de sac filled with a thorny bush. To your north is a brightly-lit tavern that seems quite popular, in spite of its odd location. The alley continues narrowly on to the west.
");

    SetItems( ([
        ({ "cul de sac" }) : "A blind turn between a few houses becomes a dead end when a huge, brambly-looking bush stops your progress.",
        ({ "tavern", "north" }) : "A stone-faced tavern with neat wooden trim and latticed windows. It looks squeezed into the space between the surrounding buildings. A sign over the door proclaims it to be 'The Default Route'. You hear music, chatter, and other human noises from the other side of the door.",
        ({ "bush", "brambly bush", "bramble", "thorny bush" }) : "This bush is a snarl of dark, whorled wood, shiny green leaves and doubled white blooms, you think it's some kind of cabbage rose. The bush is quite a bit taller than you are, and almost as big as a shed. If you squint, you think you see light coming through from the other side of it. Could there be a way through?",
    ]) );
    SetExits( ([
        "north" : "/domains/cisco/room/defaultroutebar",
        "west" : "/domains/cisco/room/marketnorth.c",
        "east" : "/domains/cisco/room/ciscoburghousesnorth.c",
      ]) );
    SetObviousExits( "north, east, west" );
    SetSearch( ([ ({ "bush", "bramble", "brambly bush", "rose bush", "cabbage rose" }) : "Gingerly, you poke and prod your way into the branches and leaves of the rose bush. Flowers slap you in the face, and you get scratched by a few brambles, but you bet you could enter the bush with a little effort." ]) );
    SetEnters( ([
        "bush" : "/domains/cisco/room/secretpark.c",
      ]) );

    SetInventory(([
      ]));

}
void init(){
    ::init();
}
