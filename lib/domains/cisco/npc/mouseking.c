#include <lib.h>

inherit LIB_SENTIENT;

int give_it(string str);

static void create() {
    sentient::create();
    SetKeyName( "mouse king" );
    SetId( ({"mouse","mouse king","mouseking"}) );
    SetAdjectives( ({"silvery"}) );
    SetShort("the mouse king");
    SetLong("This mouse is taller than the rest, and his fur is a dignified black with silver streaks. There is a little tin crown on his head.");
    SetLevel(1);
    SetMelee(1);
    SetRace("rodent");
    SetGender("kingly");
    SetClass("mage");
    SetUnique(1);
    
    SetAction(5, ({
                "The mouse king squeaks angrily at you.",
                "The mouse king points imperiously at you.",
                "The mouse king jabs his finger at a conspicuously large, cabbage-shaped hole in his garden. Then he glares at you."
                }) );
}

int CompleteQuest(object ob){
    string *quests;
    object item = present("cabbage", this_object());
    quests = ob->GetQuests();
    if(!ob->GetQuest("The Missing Cabbage")){
        ob->AddQuest("the Cabbage Finder", "The Missing Cabbage");
        write("You have solved the Missing Cabbage Quest. Congratulations!");
        write("I hereby award you 10 quest points, and 2000 experience points!");
        ob->AddQuestPoints(10);
        ob->AddExperiencePoints(2000);
        if(item) item->eventDestruct();
        reload("/domains/cisco/room/garden",0,1);
    }
    return 1;
}

int eventReceiveObject(object foo) {
    int ret;
    object ob, player;
    ob = previous_object();
    player = this_player();

    if( !ob || !(ret = ::eventReceiveObject(foo)) ) return 0;
    if(base_name(ob) == "/domains/cisco/obj/cabbage"){
        this_object()->DisableActions(1);
        call_out("CompleteQuest", 0, player);
        call_out("EnableActions", 300, 1);
    }
    return ret;
}

void init(){
    ::init();
}
