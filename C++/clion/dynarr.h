#ifndef C___DYNARR_H
#define C___DYNARR_H

template<class T>
class dynarr {
private:
    int *DATA{};
    int SIZE{};
    void inti(int size);
public:
    dynarr();
    explicit dynarr(int size);
    void setData(T x, int index);
    T getData(int index);
    void print(char endWith);
    int findFirst(T x);
    int findLast(T x);
    int findCount(T x);
    ~dynarr();
};



#endif //C___DYNARR_H
