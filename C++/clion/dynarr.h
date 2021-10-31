#ifndef C___DYNARR_H
#define C___DYNARR_H

template<class T>
class dynarr {
private:
    T *data;
    int size{};
public:
    explicit dynarr(int size);

    ~dynarr();

    void setValue(int, T);

    T getValue(int);
};

#endif //C___DYNARR_H
