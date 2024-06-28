#include "/share/binary_recovery/clang-parser/defs.hh"
void *sub_40376D()
{
  void *result; // rax
  int v1; // [rsp+4h] [rbp-Ch]
  int v2; // [rsp+4h] [rbp-Ch]
  _DWORD *v3; // [rsp+8h] [rbp-8h]
  char *v4; // [rsp+8h] [rbp-8h]

  if ( byte_610241 )
  {
    sub_403CB7();
    v1 = dword_61025C - 1;
    v3 = qword_610340;
    while ( v1 )
    {
      v3[12] = v3[11];
      --v1;
      v3 += 16;
    }
    if ( byte_61037B )
    {
      result = v3;
      v3[12] = v3[11];
    }
    else
    {
      result = v3;
      if ( v3[4] )
        v3[12] = 0;
      else
        v3[12] = dword_61037C;
    }
  }
  else
  {
    v2 = dword_61025C;
    result = qword_610340;
    v4 = (char *)qword_610340;
    while ( v2 )
    {
      result = v4;
      if ( *((_DWORD *)v4 + 4) )
        *((_DWORD *)v4 + 12) = 0;
      else
        *((_DWORD *)v4 + 12) = dword_61037C;
      --v2;
      v4 += 64;
    }
  }
  return result;
}
