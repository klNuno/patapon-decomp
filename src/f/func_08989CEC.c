#include "common.h"
typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} T;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0xC];
    u32 unk_14;
    T unk_18;
} S;

void *func_08827A50(s32, s32);
void *func_0898412C(void *, s32);
void *func_089C1A90(void *, s32);
void *func_089C06E4(void *, s32);
void *func_089C6A58(void *, s32);
void *func_089C8DEC(void *, s32);
T *func_08989F2C(T *, void *, s32);
void func_089899E0(char *, char *);
T *func_089897AC(T *, s16);

void func_08989CEC(S *arg0)
{
    T t0, t1, t2, t3, t4, t5;
    switch (arg0->unk_14) {
    case 0: {
        s32 n = arg0->unk_04;
        void *p = func_08827A50(0x10A8, n);
        if (p != NULL)
            p = func_0898412C(p, arg0->unk_00);
        func_08989F2C(&t0, p, n);
        func_089899E0((char *)&t0, (char *)&arg0->unk_18);
        func_089897AC(&t0, -1);
        break;
    }
    case 1: {
        s32 n = arg0->unk_04;
        void *p = func_08827A50(0xE60, n);
        if (p != NULL)
            p = func_089C1A90(p, arg0->unk_00);
        func_08989F2C(&t1, p, n);
        func_089899E0((char *)&t1, (char *)&arg0->unk_18);
        func_089897AC(&t1, -1);
        break;
    }
    case 2: {
        s32 n = arg0->unk_04;
        void *p = func_08827A50(0xEFC, n);
        if (p != NULL)
            p = func_089C06E4(p, arg0->unk_00);
        func_08989F2C(&t2, p, n);
        func_089899E0((char *)&t2, (char *)&arg0->unk_18);
        func_089897AC(&t2, -1);
        break;
    }
    case 3: {
        s32 n = arg0->unk_04;
        void *p = func_08827A50(0xE60, n);
        if (p != NULL)
            p = func_089C1A90(p, arg0->unk_00);
        func_08989F2C(&t3, p, n);
        func_089899E0((char *)&t3, (char *)&arg0->unk_18);
        func_089897AC(&t3, -1);
        break;
    }
    case 4: {
        s32 n = arg0->unk_04;
        void *p = func_08827A50(0xCC8, n);
        if (p != NULL)
            p = func_089C6A58(p, arg0->unk_00);
        func_08989F2C(&t4, p, n);
        func_089899E0((char *)&t4, (char *)&arg0->unk_18);
        func_089897AC(&t4, -1);
        break;
    }
    case 5: {
        s32 n = arg0->unk_04;
        void *p = func_08827A50(0xEDC, n);
        if (p != NULL)
            p = func_089C8DEC(p, arg0->unk_00);
        func_08989F2C(&t5, p, n);
        func_089899E0((char *)&t5, (char *)&arg0->unk_18);
        func_089897AC(&t5, -1);
        break;
    }
    }
}
