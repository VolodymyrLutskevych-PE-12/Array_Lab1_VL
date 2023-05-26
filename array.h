#ifndef ARRAY_H
#define ARRAY_H

class Array {
public:
    Array(int initialSize = 10, int incrementStep = 5);
    ~Array();
    void showElements() const;
    void expandArray(int size);
    int getSize() const;
    int getElemSize() const;
    void setValue(int val);
    void setArray(int *pArr, int size);
private:
    int m_initialSize;
    int m_incrementStep;
    int *m_arr;
    int m_size;
    int m_elemSize;
    int m_currentIndex;
};

#endif
