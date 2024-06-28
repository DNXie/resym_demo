#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403701(int *a1, __int64 a2)
{
  int v3; // er8
  int v4; // er9
  _QWORD v6[17]; // [rsp+0h] [rbp-150h] BYREF
  double v7; // [rsp+88h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+90h] [rbp-C0h]
  int *__attribute__((__org_arrdim(0,2))) pipedes; // [rsp+98h] [rbp-B8h]
  __pid_t v10; // [rsp+A8h] [rbp-A8h]
  int v11; // [rsp+ACh] [rbp-A4h]
  double v12; // [rsp+B0h] [rbp-A0h]
  __int64 v13; // [rsp+B8h] [rbp-98h]
  int v14[34]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v15; // [rsp+148h] [rbp-8h] BYREF

  pipedes = a1;
  v8 = a2;
  v12 = 0.25;
  if ( pipe(a1) < 0 )
    return 0xFFFFFFFFLL;
  if ( dword_61D4EC + 1 < (unsigned int)dword_61DAB0 )
    sub_40324A();
  while ( v8-- )
  {
    sub_402F69(v14);
    v13 = qword_61DAA0;
    qword_61DAA0 = 0LL;
    v10 = fork();
    v11 = *__errno_location();
    if ( v10 )
      qword_61DAA0 = v13;
    qmemcpy(v6, v14, sizeof(v6));
    sub_402FCB((int)&v7, (int)&v15, (int)v6, 0, v3, v4, v6[0], *(sigset_t *)&v6[1]);
    *__errno_location() = v11;
    if ( v10 >= 0 || *__errno_location() != 11 )
      break;
    v7 = v12;
    sub_4152F4(v12);
    v12 = v12 + v12;
    sub_403229();
  }
  if ( v10 >= 0 )
  {
    if ( v10 )
    {
      ++dword_61DAB0;
    }
    else
    {
      close(0);
      close(1);
    }
  }
  else
  {
    v11 = *__errno_location();
    close(*pipedes);
    close(pipedes[1]);
    *__errno_location() = v11;
  }
  return (unsigned int)v10;
}
