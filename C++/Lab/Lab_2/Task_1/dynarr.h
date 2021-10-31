#ifndef C___DYNARR_H
#define C___DYNARR_H


class dynarr {
private:
    int *data;
    int size;
public:
    dynarr();

    explicit dynarr(int);

    ~dynarr();

    void setValue(int, int);

    int getValue(int);

    int getValue(int, int);
};


#endif //C___DYNARR_H
