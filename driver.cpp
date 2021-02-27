
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
    ll->display();
    int value = ll->removeEnd();
    
    ll->display();
    cout << value << endl;
    int value2 = ll->removeFront(); // returns the front value and stores it
    cout << value2 << endl; // displays value removed from front
    ll->addEnd(9);
    ll->addFront(5);
    ll->addFront(1);
    ll->display();
    int value3 = ll->removeFront();
    cout << value3 << endl;
    ll->display();
    return 0;
}



