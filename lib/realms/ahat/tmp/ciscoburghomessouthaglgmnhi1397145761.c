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
    SetLong(".");

    SetNightLong("On the other end of the little stone bridge, a number of jaunty jetties jut out into the shallow waters of the brook. Cockleshell boats and coracles bob here and there, attached to the jetties with rope. At this time of night, the docks are empty of people, and the only sound is the gentle lap of brook water against the wood and shore.
    
Behind you, to the east, a little stone bridge leads across the brook. 
    ");
    SetDayLong("On the other end of the little stone bridge, a number of jaunty jetties jut out into the shallow waters of the brook. Cockleshell boats and coracles bob here and there, attached to the jetties with rope. A handful of sailors and merchants hustle around, carrying supplies to and fro. Several bored-looking fishermen occupy the ends of the docks, watching their lines, or dozing.
    
Behind you, to the east, a little stone bridge leads across the brook.
");

SetItems(([
({ "brook", "stream", "river", "water" }) : "The brook seems pretty shallow, but is very broad. It babbles happily by, unaware of your value judgements.",
({ "bridge", "stone bridge" }) : "It isn't much more than a group of stones laid closely together in the burbling waters of the brook. Be careful not to slip!",
({ "cockleshell", "cockleshell boats", "coracles", "boats" }) : "These little one- or two-man boats are laden with supplies coming from upriver. They are colorfully painted in shades of blue and green, decorated with fanciful depictions of sea monsters.",
({ "sailors", "merchants" }) : "Sun-browned men and women hustling supplies to and from the little cockleshells and coracles at the jetties. The merchants are distinguished by their brightly colored vests and ornately-plumed hats.",
({ "fishermen" }) : "These well-tanned, weathered individuals look very relaxed. Some are nodding off at their post, while others read books, check their phones, or carry on long, philosophical conversations with their neighbors.",
({ "conversation" }) : ".",
]));
SetExits(([
"south" : "/domains/cisco/room/ciscoburgdocks",
]));

SetListen(([
({ "conversation", "fishermen" }) : "One man turns to his neighbor and asks, 'How can mirrors be real, if our eyes aren't real?' Three other fishers respond, 'Shut up, Joe.'",
]));

SetInventory(([
]));

      

}
void init(){
    ::init();
}
