//
// Created by Fahim on 24/10/2021.
//

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

    //for task 3
    void setValue(int, int, int);

    //for task 3
    int getValue(int, int, int);

    void allocate(int, int);

    int getValue(int, int);
};


#endif //C___DYNARR_H
