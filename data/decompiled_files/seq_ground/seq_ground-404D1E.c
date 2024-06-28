#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404D1E(_BYTE *a1, _QWORD *a2, __int64 a3, long double (__fastcall *a4)(_BYTE *, _BYTE **))
{
  int v4; // edx
  unsigned __int8 v8; // [rsp+27h] [rbp-19h]
  _BYTE *v9; // [rsp+28h] [rbp-18h] BYREF
  long double v10; // [rsp+30h] [rbp-10h]

  v8 = 1;
  *__errno_location() = 0;
  v10 = a4(a1, &v9);
  if ( v9 == a1 || !a2 && *v9 )
  {
    v8 = 0;
  }
  else if ( 0.0 != v10 && *__errno_location() == 34 )
  {
    v8 = 0;
  }
  if ( a2 )
    *a2 = v9;
  v4 = DWORD2(v10);
  *(_QWORD *)a3 = *(_QWORD *)&v10;
  *(_DWORD *)(a3 + 8) = v4;
  return v8;
}
