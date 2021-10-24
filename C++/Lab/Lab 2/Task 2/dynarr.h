#ifndef C___DYNARR_H
#define C___DYNARR_H


class dynarr {
private:
    int *data;
    int size;
    int **data_2d;
public:
    dynarr();

    explicit dynarr(int);

    dynarr(int, int);

    ~dynarr();

    //for task 2
    void allocate(int);

    void setValue(int, int);

    int getValue(int);
};


#endif //C___DYNARR_H
