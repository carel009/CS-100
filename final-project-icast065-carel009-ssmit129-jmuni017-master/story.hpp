#ifndef _STORY_H_
#define _STORY_H_

using namespace std;

class story  {

private:

    int rumor;
    bool trial1;
    bool trial2;
    bool trial3;
   

public:

    story() {rumor = 0; trial1 = false; trial2 = false; trial3 = false; };

    int get_rumor();
    bool get_trial1();
    bool get_trial2();
    bool get_trial3();
    void set_trial(bool pass, int number );
    void set_rumor(int input);
    
};
#endif
