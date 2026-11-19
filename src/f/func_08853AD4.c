#include "common.h"

typedef struct {
    u8 unk_00[16];
} T;

void func_08853D70(T *, T *);
void func_08853C3C(T *, T *);
void func_08853B50(T *, s16);

void func_08853AD4(T *arg0, T *arg1) {
    T temp;
    T *temp3;
    T *temp2;
    if (arg0 != arg1) {
        temp2 = arg0 + 1;
        temp3 = arg0;
        if (temp2 != arg1) {
            do {
                func_08853D70(&temp, temp3);
                func_08853C3C(temp3, temp2);
                func_08853C3C(temp2, &temp);
                func_08853B50(&temp, -1);
                ++temp2;
                ++temp3;
            } while (temp2 != arg1);
        }
    }
}
