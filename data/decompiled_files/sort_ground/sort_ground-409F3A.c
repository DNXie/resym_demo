#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_409F3A(__int64 a1, unsigned __int64 a2, FILE *a3, char *a4)
{
  __int64 v7; // [rsp+28h] [rbp-8h]

  while ( 1 )
  {
    v7 = sub_40981D(a1);
    if ( !*(_DWORD *)(v7 + 80) )
      break;
    sub_409924((__int64 *)v7, a2, a3, a4);
    sub_409DDF(a1, v7);
    sub_409EB4(a1, v7);
    sub_40970B(v7);
  }
  sub_40970B(v7);
  return sub_4097BD(a1, v7);
}
