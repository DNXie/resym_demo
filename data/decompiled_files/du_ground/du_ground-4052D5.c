#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4052D5(__int64 a1, _BYTE *a2, unsigned int a3)
{
  void *v3; // rax
  bool v6; // [rsp+2Fh] [rbp-11h]
  _BYTE *i; // [rsp+30h] [rbp-10h]
  unsigned int (__fastcall *v8)(__int64, _BYTE *, _QWORD); // [rsp+38h] [rbp-8h]

  if ( (a3 & 0x10000000) != 0 )
    v3 = fnmatch;
  else
    v3 = sub_4051A1;
  v8 = (unsigned int (__fastcall *)(__int64, _BYTE *, _QWORD))v3;
  v6 = ((unsigned int (__fastcall *)(__int64, _BYTE *, _QWORD))v3)(a1, a2, a3) == 0;
  if ( (a3 & 0x40000000) == 0 )
  {
    for ( i = a2; *i && !v6; ++i )
    {
      if ( *i == 47 && i[1] != 47 )
        v6 = v8(a1, i + 1, a3) == 0;
    }
  }
  return v6;
}
