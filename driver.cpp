
#include <iostream>
#include <string>

#include "LinkedList.hpp"

using namespace std;

int main(int argc, char** argv)
{
    //URL* u1 = new URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    //cout << u1->getContents() << endl;
    //string jsonString = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";
    //cout << jsonString << endl;
    //processJSONObject(jsonString, 0);
    LinkedList* ll = new LinkedList();
    ll->addEnd(4);
    ll->addEnd(6);
    ll->addEnd(8);
    ll->addEnd(2);
    ll->addFront(13);
    ll->addFront(17);
    ll->display();
    int value = ll->removeAtIndex(3);
    cout << value << endl;
    ll->display();
    ll->addAtIndex(2,20);
    ll->addAtIndex(3,15);
    ll->display();
    
    
    return 0;
}



