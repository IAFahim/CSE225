#include "timeStamp.h"

timeStamp::timeStamp() {
    hour=0;
    second=0;
    minute=0;
}

timeStamp::timeStamp(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

bool timeStamp::operator==(const timeStamp &rhs) const {
    return second == rhs.second && minute == rhs.minute && hour == rhs.hour;
}

bool timeStamp::operator!=(const timeStamp &rhs) const {
    if(rhs.minute){
        return false;
    }
    return !(second == rhs.second && minute == rhs.minute && hour == rhs.hour);
}

bool timeStamp::operator>(const timeStamp &rhs) const {
    return (hour*3600 + minute*60 + second) > (rhs.hour*3600 + rhs.minute*60 + rhs.second);
}

bool timeStamp::operator<(const timeStamp &rhs) const {
    return (hour*3600 + minute*60 + second) < (rhs.hour*3600 + rhs.minute*60 + rhs.second);
}

std::ostream &operator<<(std::ostream &os, const timeStamp &stamp) {
    return os << stamp.second << ":" << stamp.minute << ":" << stamp.hour;
}




