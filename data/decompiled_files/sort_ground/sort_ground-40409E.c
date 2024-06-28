#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40409E(unsigned int a1, char a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbx
  char *v15; // rax
  unsigned int v18; // [rsp+10h] [rbp-50h]
  unsigned int v19; // [rsp+14h] [rbp-4Ch]
  __int64 v20; // [rsp+18h] [rbp-48h] BYREF
  struct rlimit rlimits; // [rsp+20h] [rbp-40h] BYREF
  char v22[24]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-18h]

  v23 = __readfsqword(0x28u);
  v18 = sub_415A31(a3, 0LL, 10LL, &v20, 0LL);
  if ( getrlimit(RLIMIT_NOFILE, &rlimits) )
    v3 = 17;
  else
    v3 = LODWORD(rlimits.rlim_cur) - 3;
  v19 = v3;
  if ( !v18 )
  {
    dword_61D4EC = v20;
    if ( (unsigned int)v20 == v20 )
    {
      if ( (unsigned int)dword_61D4EC > 1 )
      {
        if ( v3 >= dword_61D4EC )
          return __readfsqword(0x28u) ^ v23;
        v18 = 1;
      }
      else
      {
        v4 = sub_4112FB(a3);
        v5 = *((_QWORD *)&longopts.name + 4 * (int)a1);
        v6 = gettext("invalid --%s argument %s");
        error(0, 0, v6, v5, v4);
        v7 = sub_4112FB("2");
        v8 = *((_QWORD *)&longopts.name + 4 * (int)a1);
        v9 = gettext("minimum --%s argument is %s");
        error(2, 0, v9, v8, v7);
      }
    }
    else
    {
      v18 = 1;
    }
  }
  if ( v18 != 1 )
    sub_41594B(v18, a1, (unsigned int)a2, &longopts, a3);
  v10 = sub_4112FB(a3);
  v11 = *((_QWORD *)&longopts.name + 4 * (int)a1);
  v12 = gettext("--%s argument %s too large");
  error(0, 0, v12, v11, v10);
  v13 = sub_410B07(v19, v22);
  v14 = *((_QWORD *)&longopts.name + 4 * (int)a1);
  v15 = gettext("maximum --%s argument with current rlimit is %s");
  error(2, 0, v15, v14, v13);
  return __readfsqword(0x28u) ^ v23;
}
