#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_402734(int a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // [rsp+1Ch] [rbp-14h]
  __int64 len; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v4 = -1;
  len = sub_40269B(a1, a2);
  if ( a2 && !len )
    return 1;
  if ( !a2 && !len && qword_60E270 )
    return 1;
  if ( a2 )
    v3 = sub_40269B(a1, 0LL);
  else
    v3 = 0LL;
  v6 = v3;
  if ( a1 )
  {
    if ( a1 == 1 && offset != -1 )
    {
      if ( offset < 0 )
        offset = lseek(1, 0LL, 1) - (len + v3);
      if ( offset >= 0 )
      {
        v4 = posix_fadvise(1, offset, len, 4);
        offset += v6 + len;
      }
    }
  }
  else if ( byte_60E3C8 )
  {
    v4 = posix_fadvise(0, qword_60E3D0 - len - v3, len, 4);
  }
  else
  {
    *__errno_location() = 29;
  }
  return v4 != -1;
}
