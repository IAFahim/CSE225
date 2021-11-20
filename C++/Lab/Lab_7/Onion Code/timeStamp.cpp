#include "timeStamp.h"

timeStamp::timeStamp(){
   s=0;
   m=0;
   h=0;
}
timeStamp::timeStamp(int s, int m, int h){
    this->s = s;
    this->m = m;
    this->h = h;
}
bool timeStamp::operator==(timeStamp &t){
    if((s==t.s)&&(m==t.m)&&(h==t.h))
        return true;
    else
        return false;
}

bool timeStamp::operator!=(timeStamp &t) {
    return !(s == t.s && s == t.m && h == t.h);
}

bool timeStamp::operator< (timeStamp &t){
    return (h*3600 + m*60 + s) < (t.h*3600 + t.m*60 + t.s);
}

bool timeStamp::operator> (timeStamp &t){
    return (h*3600 + m*60 + s) > (t.h*3600 + t.m*60 + t.s);
}

std::ostream &operator<<(std::ostream &os, const timeStamp &t) {
    return os << t.h << ":" << t.m << ":" << t.s;
}