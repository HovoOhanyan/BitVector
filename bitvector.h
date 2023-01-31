#ifndef BIT_VECTOR
#define BIT_VECTOR

class Bitvector 
{
public:
    Bitvector(short size);
    Bitvector() = default;
public:
    short get_size() const;
    long* get_arr() const;
    int get_index() const;

public:
    void set(short index);
    void reset(short index);
private:
    long* m_arr;
    short m_size;
    int m_index;
};


#endif //BIT_VECTOR