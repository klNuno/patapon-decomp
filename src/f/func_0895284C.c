#include "common.h"

typedef struct {
    u8 unk_00[0x20];
} T;

void func_089528BC(T *, T *);
void func_0895290C(T *, T *);

void func_0895284C(T *arg0, T *arg1)
{
    T temp;
    T *cur;
    T *next;

    if (arg0 != arg1) {
        next = arg0 + 1;
        cur = arg0;
        if (next != arg1) {
            do {
                func_0895290C(&temp, cur);
                func_089528BC(cur, next);
                func_089528BC(next, &temp);
                ++next;
                ++cur;
            } while (next != arg1);
        }
    }
}
