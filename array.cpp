#include "array.h"
#include <iostream>

Array::Array(int initialSize, int incrementStep)
    : m_initialSize{initialSize}, m_incrementStep{incrementStep},
      m_arr{new int[m_initialSize]}, m_size{m_initialSize}, m_elemSize{0}, m_currentIndex{0}
{
}

Array::~Array()
{
    delete[] m_arr;
}

void Array::showElements() const
{
    for (int i = 0; i < m_elemSize; ++i) {
        std::cout << m_arr[i] << " ";
    }
    std::cout << std::endl;
}

void Array::expandArray(int size)
{
    if (size <= m_size) {
        return;
    }

    int newSize = m_size + ((size - m_size - 1) / m_incrementStep + 1) * m_incrementStep;
    int *newArr = new int[newSize];
    for (int i = 0; i < m_elemSize; ++i) {
        newArr[i] = m_arr[i];
    }
    delete[] m_arr;
    m_arr = newArr;
    m_size = newSize;
}

int Array::getSize() const
{
    return m_size;
}

int Array::getElemSize() const
{
    return m_elemSize;
}

void Array::setValue(int val)
{
    if (m_currentIndex >= m_size) {
        expandArray(m_currentIndex + 1);
    }
    m_arr[m_currentIndex] = val;
    ++m_currentIndex;
    if (m_currentIndex > m_elemSize) {
        m_elemSize = m_currentIndex;
    }
}

void Array::setArray(int *pArr, int size)
{
    expandArray(size);
    for (int i = 0; i < size; ++i) {
        m_arr[i] = pArr[i];
    }
    m_elemSize = size;
    m_currentIndex = size;
}
