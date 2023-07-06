#include "story.hpp"

using namespace std;
    void story::set_rumor(int input){ rumor = input;}
    int story::get_rumor(){
	return rumor;	}
    bool story::get_trial1(){ return trial1;}
    bool story::get_trial2(){return trial2; }
    bool story::get_trial3(){return trial3; }
    void story::set_trial(bool pass, int input){
if(pass == true){
 if( input ==1){trial1 = true;}
					else if(input == 2){trial2 = true;}
					else {trial3 = true;}
	}

	else if(pass == false){
		if(input == 1){ trial1 = false; }
		else if(input == 2) { trial2  = false;}
		else if(input == 3) { trial3 = false;}
		else{ rumor = 0; }
	}
	else{rumor = 0;}
}
