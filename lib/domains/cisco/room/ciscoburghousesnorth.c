#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg - Residental Area North %^RESET%^");
    SetNightLong("This is the residential area of Ciscoburg. Colorful houses populate the area somewhat haphazardly; there seems to be no apparent method to the streets and paths that separate one house and street from the next. Wells and communal gardens crop up seemingly at random. At this time of night, most of the light comes from lit windows, and the occasional lantern post.
    
Prominently, there is a large, triangular cistern here, and next to it a message board with a cute little roof over it, shingled in a bright emerald color.
    
To the west, one of the meandering alleys snakes off into the shadows between two buildings. To the east, a cobbled street leads towards a bridge. To the south, you see another jumble of houses.
");
    SetDayLong("This is the residential area of Ciscoburg. Colorful houses populate the area somewhat haphazardly; there seems to be no apparent method to the streets and paths that separate one house and street from the next. Wells and communal gardens crop up seemingly at random, attended busily by various townfolk.
    
Prominently, there is a large, triangular cistern here, and next to it a message board with a cute little roof over it, shingled in a bright emerald color.
    
To the west, one of the meandering alleys snakes off into the shadows between two buildings. To the east, a cobbled street leads towards a bridge. To the south, you see another jumble of houses.
");


    SetItems(([
        ({ "window", "windows" }) : "Warm light illuminates people talking animatedly to one another, enjoying dinner, reading, and any other host of things people might do in houses.",
        ({ "people" }) : "It seems the fashion in this town is to wear elaborate looking hats with various-colored pins in strange configurations.",
        ({ "cistern", "triangular cistern" }) : "Waist high, lined in wide square bricks. This looks like an ideal spot for doing laundry, and also gossiping about the message board. The water in the cistern is very clear and still.",
        ({ "message board", "board", "message" }) : "A wide, wooden board with a little roof to keep the weather off. There are all sorts of papers, fliers and notes pinned to it. You might try reading some of them.",
        ({ "paper", "papers" }) : "Various scraps of paper with lots of readable writing on them.",
        ({ "fliers", "flier" }) : "Oodles of fliers flitter in any passing breeze. What bargains might they tell of?",
        ({ "notes", "note" }) : "Small notes, personal messages and other such declarations. What are they all about?"
    ]));
    
    SetRead(([
        ({ "paper", "papers" }) : "Collisions are illegal! If you see one, report it at once to the nearest hub!",
        ({ "fliers", "flier" }) : "Looking for a weapon? Come see Big Shirtless Jim in the marketplace!",
        ({ "notes", "note" }) : "Things are different in the 7th dimension."
    ]));
    
    SetExits( ([
        "west" : "/domains/cisco/room/ciscoburgalley.c",
        "south" : "/domains/cisco/room/ciscoburghomessouth.c",
        "east" : "/domains/cisco/room/bridge1.c"
      ]) );

    SetInventory(([
      ]));

}
void init(){
    ::init();
}
