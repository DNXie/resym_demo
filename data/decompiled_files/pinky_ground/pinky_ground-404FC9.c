#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_404FC9(FILE *a1, const char *a2, const char *a3, const char *a4, unsigned int *a5)
{
  __int64 *v5; // rax
  unsigned __int64 i; // [rsp+38h] [rbp-58h]
  __int64 v8[10]; // [rsp+40h] [rbp-50h] BYREF

  for ( i = 0LL; i <= 9; ++i )
  {
    if ( *a5 >= 0x30 )
    {
      v5 = (__int64 *)*((_QWORD *)a5 + 1);
      *((_QWORD *)a5 + 1) = v5 + 1;
    }
    else
    {
      v5 = (__int64 *)(*((_QWORD *)a5 + 2) + *a5);
      *a5 += 8;
    }
    v8[i] = *v5;
    if ( !v8[i] )
      break;
  }
  return sub_404970(a1, a2, a3, a4, v8, i);
}
