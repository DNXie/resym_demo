#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407AC9(unsigned __int8 **a1, unsigned __int8 **a2)
{
  __int64 result; // rax
  size_t v3; // rax
  int v4; // eax
  unsigned int v5; // [rsp+1Ch] [rbp-14h]
  unsigned int v6; // [rsp+1Ch] [rbp-14h]
  unsigned __int64 v7; // [rsp+20h] [rbp-10h]
  size_t n; // [rsp+28h] [rbp-8h]

  if ( qword_61DA08 )
  {
    v5 = sub_406DCF(a1, a2);
    if ( v5 || byte_61DA02 || byte_61DA01 )
      return v5;
  }
  v7 = (unsigned __int64)(a1[1] - 1);
  n = (size_t)(a2[1] - 1);
  if ( a1[1] == (unsigned __int8 *)1 )
  {
    v6 = -(a2[1] != (unsigned __int8 *)1);
  }
  else if ( a2[1] == (unsigned __int8 *)1 )
  {
    v6 = 1;
  }
  else if ( byte_61D5C8 )
  {
    v6 = sub_415281(*a1, a1[1], *a2, a2[1]);
  }
  else
  {
    v3 = (size_t)(a1[1] - 1);
    if ( n <= v7 )
      v3 = (size_t)(a2[1] - 1);
    v6 = memcmp(*a1, *a2, v3);
    if ( !v6 )
    {
      if ( v7 < n )
        v4 = -1;
      else
        v4 = v7 != n;
      v6 = v4;
    }
  }
  if ( byte_61DA00 )
    result = -v6;
  else
    result = v6;
  return result;
}
