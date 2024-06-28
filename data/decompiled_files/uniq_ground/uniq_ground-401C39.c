#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_401C39(const void *a1, const void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  bool v4; // al
  bool result; // al
  bool v6; // al
  __int64 v7; // [rsp+0h] [rbp-20h]
  __int64 n; // [rsp+8h] [rbp-18h]

  n = a3;
  v7 = a4;
  if ( qword_6092D8 < a3 )
    n = qword_6092D8;
  if ( qword_6092D8 < a4 )
    v7 = qword_6092D8;
  if ( byte_6092E7 )
  {
    v4 = n != v7 || (unsigned int)sub_40328C(a1, a2, n);
    result = v4;
  }
  else if ( byte_6092C0 )
  {
    result = (unsigned int)sub_405871(a1, n, a2, v7) != 0;
  }
  else
  {
    v6 = n != v7 || memcmp(a1, a2, n);
    result = v6;
  }
  return result;
}
