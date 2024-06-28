#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4032BF()
{
  int v0; // er8
  int v1; // er9
  _QWORD v3[17]; // [rsp+0h] [rbp-120h] BYREF
  __int64 v4; // [rsp+88h] [rbp-98h] BYREF
  int v5[34]; // [rsp+90h] [rbp-90h] BYREF
  __int64 v6; // [rsp+118h] [rbp-8h] BYREF

  if ( qword_61DAA0 )
  {
    sub_402F69(v5);
    sub_40327B();
    qmemcpy(v3, v5, sizeof(v3));
    sub_402FCB((int)&v4, (int)&v6, (int)v3, 0, v0, v1, v3[0], *(sigset_t *)&v3[1]);
  }
  return sub_40D218();
}
