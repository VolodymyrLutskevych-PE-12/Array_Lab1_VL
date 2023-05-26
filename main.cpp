#include "array.h"

int main()
{
    Array arr(10, 5);
    arr.setValue(12);
    arr.setValue(20);
    arr.setValue(2);
    arr.setValue(0);
    arr.setValue(1);
    arr.setValue(44);
    arr.setValue(44);
    arr.setValue(44);
    arr.setValue(1);
    arr.setValue(0);
    arr.setValue(2);
    arr.setValue(20);
    arr.setValue(12);
    arr.setValue(1);

    arr.showElements();

    int otherArr[] = {1, 2, 3, 4};
    arr.setArray(otherArr, 4);

    arr.showElements();

    return 0;
}
