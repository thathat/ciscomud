#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Cisco Lab %^RESET%^");
    SetLong("This is room C227, the CISCO lab. It's a busy looking room, cluttered and disorganized. The long trestle tables are covered with computers and cables, switches and routers, coffee cups, books, and the other detritus of learning. On the far end of the room stands a rack of switches, their lights blinking lazily.

An instructor's podium butts against one table. A donut box sits, half-open, on another table. A doorway leads to the south.
");
SetItems(([
"floor" : "Plain, white tile. The janitor probably has trouble keeping up in here.",
({ "wall", "walls", "the walls" }) : "The walls are plastered with various charts of protocols, as well as printouts of jokes.",
({ "rack", "switches", "switch", "lights" }) : "The switches are interconnected haphazardly, with a multitude of cables, but the peacefully blinking lights seem to indicate everything is fine.",
"podium" : "A worn metal podium with a wooden top. The front holds a magnet declaring it an official \nCISCO classroom. Next to that is a sticker that reads 'CISCO's lies are great and many.'",
({ "box", "donut box", "white box" }) : "A white box of donuts from Sunrise Bakery. All the good ones are taken already. Figures.",
"template" : "That's what this is.",
]));
SetExits( ([
"south" : "/domains/cisco/room/serverroom.c",
]) );
SetListen(([
"default" : "You hear the hum and whirr of many computers.",
]));

    SetInventory( ([

      ]) );
}

void init(){
    ::init();
}
