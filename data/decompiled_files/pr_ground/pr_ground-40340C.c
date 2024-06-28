#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40340C()
{
  __int64 result; // rax
  int v1; // [rsp+0h] [rbp-Ch]
  _DWORD *v2; // [rsp+4h] [rbp-8h]

  v1 = dword_61025C;
  v2 = qword_610340;
  while ( v1 )
  {
    if ( v2[4] == 2 )
    {
      v2[4] = 0;
      ++dword_6103A8;
    }
    --v1;
    v2 += 16;
  }
  result = (unsigned __int8)byte_610241;
  if ( byte_610241 )
  {
    result = *((unsigned int *)qword_610340 + 4);
    dword_6103A8 = result != 3;
  }
  return result;
}
