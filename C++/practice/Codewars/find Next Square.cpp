long int findNextSquare(long int sq) {
    long x = sqrt(sq);
    if (x * x != sq) {
        return -1;
    }
    x++;
    return x * x;
}