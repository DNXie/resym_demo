#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40218D(int a1)
{
  int result; // eax
  int v2; // [rsp+Ch] [rbp-4h]

  v2 = a1;
  if ( a1 == 14 )
  {
    dword_60C520 = 1;
    v2 = dword_60C2B0;
  }
  if ( !pid )
    _exit(v2 + 128);
  if ( dword_60C540[v2] )
  {
    result = v2;
    dword_60C540[v2] = 0;
  }
  else
  {
    if ( *(double *)&qword_60C648 != 0.0 )
    {
      dword_60C2B0 = 9;
      sub_401FFF(*(double *)&qword_60C648);
      qword_60C648 = 0LL;
    }
    sub_40215E(pid, v2);
    result = (unsigned __int8)byte_60C650 ^ 1;
    if ( byte_60C650 != 1 )
      result = sub_40215E(0, v2);
    if ( v2 != 9 && v2 != 18 )
    {
      sub_40215E(pid, 18);
      result = (unsigned __int8)byte_60C650 ^ 1;
      if ( byte_60C650 != 1 )
        result = sub_40215E(0, 18);
    }
  }
  return result;
}
