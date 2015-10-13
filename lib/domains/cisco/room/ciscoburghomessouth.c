#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg - Residential Area South %^RESET%^");
    SetDayLong("This is the housing area of the village. Houses are arranged in a hodgepodge around communal gardens and wells. Alleys and paths wind haphazardly between it all, though most of them are neatly cobbled. People are busily going about their lives, carrying conversations on over step-sweeping, grocery-toting, gardening, laundry-hanging, &c. Most houses have colorfully shingled, steepled roofs, but a few are flat, with small personal gardens on top. One looks to be reachable by a nearby ladder.
    
To the north, you can see more houses, and to the south are the docks of Ciscoburg.
");

SetItems(([
({ "gardens" }) : "Depending on the season, these gardens are either neatly fallow, or riotously blooming and overflowing with plant life. Several have tidily trussed trelli, for grapes, beans, or just vining flowers.",
({ "ladders" }) : "You might be able to climb one...",
({ "paths", "alleys", "path", "alley" }) : "Tidy, meandering paths.",
({ "people", "villagers" }) : "It seems the fashion in this town is to wear elaborate looking hats with various-colored pins in strange configurations. After a while, you notice a pattern to the hats and pins. Certain people doing certain things almost always have similar pins or hats. Wierd.",
]));

SetInventory(([
"/domains/cisco/obj/ladder" : 1,
]));
     
    SetNightLong("This is the housing area of the village. Houses are arranged in a hodgepodge around communal gardens and wells. Alleys and paths wind haphazardly between it all, though most of them are neatly cobbled. Past sunset, the streets are quiet, devoid of traffic. Lights shine out from windows, and now and again a snippet of conversation of laughter drifts out to you from an open window.
    
To the north, you can see more houses, and to the south are the docks of Ciscoburg.
");
    SetExits( ([
        "south" : "/domains/cisco/room/ciscoburgdocks",
        "north" : "/domains/cisco/room/ciscoburghousesnorth.c",
      ]) );

}
void init(){
    ::init();
}
