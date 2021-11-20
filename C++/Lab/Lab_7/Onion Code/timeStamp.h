#ifndef TIMESTAMP_H
#define TIMESTAMP_H


#include <ostream>

class timeStamp {
private:
    int s;
    int m;
    int h;
public:
    timeStamp();

    timeStamp(int, int, int);

    bool operator==(timeStamp &t);

    bool operator!=(timeStamp &t);

    bool operator>(timeStamp &t);

    bool operator<(timeStamp &t);

    friend std::ostream &operator<<(std::ostream &os, const timeStamp &stamp);


};

#endif // TIMESTAMP_H
