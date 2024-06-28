#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40153D(double *a1, char a2)
{
  int v3; // [rsp+18h] [rbp-4h]

  if ( a2 == 104 )
  {
    v3 = 3600;
    goto LABEL_13;
  }
  if ( a2 > 104 )
  {
    if ( a2 == 109 )
    {
      v3 = 60;
      goto LABEL_13;
    }
    if ( a2 != 115 )
      return 0LL;
    goto LABEL_8;
  }
  if ( !a2 )
  {
LABEL_8:
    v3 = 1;
    goto LABEL_13;
  }
  if ( a2 != 100 )
    return 0LL;
  v3 = 86400;
LABEL_13:
  *a1 = (double)v3 * *a1;
  return 1LL;
}
