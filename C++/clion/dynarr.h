#ifndef C___DYNARR_H
#define C___DYNARR_H

template<class T>
class dynarr {
private:
    int *data;
    int size;
public:
    dynarr();
    explicit dynarr(int);
    void setData(T x, int index);
    T getData(int index);
    ~dynarr();
};



#endif //C___DYNARR_H
