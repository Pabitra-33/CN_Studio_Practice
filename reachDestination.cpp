#include<iostream>

using namespace std;

bool reachDsestination(int sx, int sy, int dx, int dy) {
    
    if(sx==dx and sy==dy)return true;
    
    if(dx<sx or dy<sy)return false;

    if(dy>dx){
        reachDestination(sx,sy,dx,dy-dx);

    }
    else{
        reachDestination(sx,sy,dx-dy,dy);

    }
    
      
    
    
    


}