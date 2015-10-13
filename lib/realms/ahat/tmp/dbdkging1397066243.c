#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Southwest Side of Hill %^RESET%^");
    SetLong(".");
    SetItems(([
        ({ "root", "roots", "labyrinth" }) : "The roots snake and whorl all over the side of hill here. Clusters of flowers have grown up in some of the closed loops made by them. Another contains a small pool of water, where frogs seem to have taken up residence. You're sure you could sit here all day, trying to follow the path of the roots, and get nowhere.",
        ({ "swing", "tree swing" }) : "A sturdy-looking tree swing. It certainly looks swingable!",
        ({ "leaves", "heart-shaped leaves", "lobed leaves" }) : "Leaves that have fallen from the giant tree are as big as a sheet of paper, and almost the same consistency. The veins that run through them are almost cyrstalline in appearance.",
        ({ "clouds", "canyon" }) : "The cloud-filled canyon roils and sparks occasionally with flashes of lightning. You wonder how deep it is."
      ]));
    SetNightLong("A huge, gnarled tree dominates the landscape here. Its dark, twisted trunk reaches at least a hundred feet up, and its crown varies in shades of green and blue. Each leaf looks to be as big as your head. The grass is shorter beneath the shade of the tree's massive boughs, which droop nearly to the ground in a few places. The moonlight filters through the great, papery leaves and diffuses into a soft glow.
    
A swing has been tied to one branch, it sways gently in the breeze. Several of the lobed, heart-shaped leaves litter the ground among the tree's labyrinth of roots.

A worn path leads back north, and you can climb the hill to the northeast to get back to the top. Beyond the tree, you can see the cloudy canyon.
    ");
    SetDayLong("A huge, gnarled tree dominates the landscape here. Its dark, twisted trunk reaches at least a hundred feet up, and its crown varies in shades of green and blue. Each leaf looks to be as big as your head. The grass is shorter beneath the shade of the tree's massive boughs, which droop nearly to the ground in a few places. The bright sunlight filters through the great, papery leaves and diffuses into a warm haze.
    
A swing has been tied to one branch, it sways gently in the breeze. Several of the lobed, heart-shaped leaves litter the ground among the tree's labyrinth of roots.

A worn path leads back north, and you can climb the hill to the northeast to get back to the top. Beyond the tree, you can see the cloudy canyon.
");
SetInventory(([
]));


      

}
void init(){
    ::init();
    add_action("swing","swing");
}

int swing(string str){
    if(str!="on swing")
    	{
    		write("Swing on what?");
    		return 1;
    	}
    	
    else (write("You plop down on the swing, pump your legs a few times, and swing up into the air! Wheeeee! After a while, you come back down to the ground and hop off. You're pretty sure no one saw that just now."));
    say(this_player()->GetName()+" swings up high into the air on "+possessive(this_player())+" "+ "tree swing, yelling \"WHEEEE!!!\"");
    return 1;
}
