#ifndef CLION_TIMESTAMP_H
#define CLION_TIMESTAMP_H

#include <ostream>

class timeStamp {
private:
    int hour;
    int minute;
    int second;
public:
    timeStamp();

    timeStamp(int hour, int minute, int second);

    bool operator==(const timeStamp &rhs) const;

    bool operator!=(const timeStamp &rhs) const;

    bool operator>(const timeStamp &rhs) const;

    bool operator<(const timeStamp &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const timeStamp &stamp);

};

#endif //CLION_TIMESTAMP_H