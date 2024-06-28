#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40176F(int a1, char *const *a2, __int64 a3, __int64 a4, __int64 a5, void (__fastcall *a6)(_QWORD), ...)
{
  __int64 result; // rax
  unsigned int v11; // [rsp+30h] [rbp-D0h]
  int v12; // [rsp+34h] [rbp-CCh]
  gcc_va_list va; // [rsp+38h] [rbp-C8h] BYREF

  v11 = opterr;
  opterr = 0;
  if ( a1 == 2 )
  {
    v12 = getopt_long(2, a2, "+", &longopts, 0LL);
    if ( v12 != -1 )
    {
      if ( v12 == 104 )
      {
        a6(0LL);
      }
      else if ( v12 != 118 )
      {
        goto LABEL_8;
      }
      va_start(va, a6);
      sub_403777(stdout, a3, a4, a5, va);
      exit(0);
    }
  }
LABEL_8:
  result = v11;
  opterr = v11;
  optind = 0;
  return result;
}
