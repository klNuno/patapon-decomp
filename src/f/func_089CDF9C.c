#include "common.h"

typedef struct {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    s32 *unk_0C;
} Unk;

typedef struct SP_089CE018 SP_089CE018;
typedef struct Obj_089CDB2C Obj_089CDB2C;

char *func_089CE14C(char *, char *);
SP_089CE018 *func_089CE018(SP_089CE018 *, const SP_089CE018 *);
Obj_089CDB2C *func_089CDB2C(Obj_089CDB2C *, s16);

void func_089CDF9C(Unk *arg0, Unk *arg1)
{
    Unk temp;
    Unk *q;
    Unk *p;

    if (arg0 != arg1) {
        p = arg0 + 1;
        q = arg0;
        if (p != arg1) {
            do {
                func_089CE14C((char *)&temp, (char *)q);
                func_089CE018((SP_089CE018 *)q, (SP_089CE018 *)p);
                func_089CE018((SP_089CE018 *)p, (SP_089CE018 *)&temp);
                func_089CDB2C((Obj_089CDB2C *)&temp, -1);
                p++;
                q++;
            } while (p != arg1);
        }
    }
}
