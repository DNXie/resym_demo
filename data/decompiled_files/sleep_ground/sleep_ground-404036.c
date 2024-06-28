#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404036(_BYTE *a1, _QWORD *a2, double *a3, double (__fastcall *a4)(_BYTE *, _BYTE **))
{
  unsigned __int8 v7; // [rsp+3Fh] [rbp-11h]
  _BYTE *v8; // [rsp+40h] [rbp-10h] BYREF
  double v9; // [rsp+48h] [rbp-8h]

  v7 = 1;
  *__errno_location() = 0;
  v9 = a4(a1, &v8);
  if ( v8 == a1 || !a2 && *v8 )
  {
    v7 = 0;
  }
  else if ( v9 != 0.0 && *__errno_location() == 34 )
  {
    v7 = 0;
  }
  if ( a2 )
    *a2 = v8;
  *a3 = v9;
  return v7;
}
