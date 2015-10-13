#include <lib.h>
#include "/realms/ahat/area/customdefs.h"

inherit LIB_ROOM;

int found;
string SearchFun(){
    string result;
    if(found == 0){
        result="You root around the garden and find a perfect cabbage.";
        tell_room(this_object(),this_player()->GetName()+ 
          " searches the room and finds something ",
          ({ this_player() }) );
        if(!new("/domains/cisco/obj/cabbage")->eventMove(this_player()))
            new("/domains/cisco/obj/cabbage")->eventMove(this_object());
        found = 1;
        return result;
    }
    
    return "You find nothing special.";
}

static void create() {
    room::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetNightLight(20);
    SetDayLight(30);
    SetShort("%^B_BLACK%^%^WHITE%^ Ciscoburg - Roof Garden %^RESET%^");
    SetDayLong("Compared to the other gardens you can see, this one is surprisingly overgrown and untended. Leaning and broken trelli are choked with vines that have grown towards each other, forming a heavy canopy of vegetation. It's dim beneath the leaves, but the raised bed of the soil is still knee deep in weeds. You wonder what might be hiding in this little grotto.
    
You can also climb down from here.");

    SetItems(([
        ({ "trelli", "vines", "vegetation" }) : "Ropy vines with huge, broad leaves hang over old, broken trellises. The leaves are slightly fuzzy to the touch, probably some kind of squash gone mad with power.",
        ({ "weeds" }) : "The weeds are a mix of grass, wildflowers and probably some legitimate vegetables. They're so thick on the ground that you can't see the soil beneath them. You wonder what they might be hiding."
     ]));
     
    SetNightLong("Compared to the other gardens you can see, this one is surprisingly overgrown and untended. Leaning and broken trelli are choked with vines that have grown towards each other, forming a heavy canopy of vegetation. It's very dark beneath the leaves, even with moonlight shining through here and there, and the raised bed of the soil is still knee deep in weeds. You wonder what might be hiding in this little grotto.
    
You can also climb down from here.");
    SetExits( ([
        "down" : "/domains/cisco/room/ciscoburghomessouth.c"
      ]) );

    SetInventory(([
      ]));
    SetSearch( ([ "default"  : (: SearchFun :)  ]) );
    found = 0;

}
void init(){
    ::init();
    AddSearch( ({"here","garden"})  , (: SearchFun :)  );
}
