#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403F4F()
{
  __int64 v0; // rax
  __int64 v2; // rax
  unsigned __int8 v3; // [rsp+Bh] [rbp-35h]
  int c; // [rsp+Ch] [rbp-34h] BYREF
  __int64 v5; // [rsp+10h] [rbp-30h] BYREF
  void *ptr; // [rsp+18h] [rbp-28h]
  unsigned __int64 v7; // [rsp+20h] [rbp-20h]
  unsigned __int64 i; // [rsp+28h] [rbp-18h]

  v0 = qword_6122E8;
  if ( (unsigned __int64)qword_6122E8 < 0x64 )
    v0 = 100LL;
  v5 = v0;
  ptr = (void *)sub_407C27(v0);
  v7 = qword_612308;
  v3 = 1;
LABEL_4:
  if ( !byte_612310 || qword_612320 >= (unsigned __int64)qword_6122E8 && qword_612320 - qword_6122E8 > v7 )
  {
    for ( i = 0LL; i < qword_6122E8; ++i )
    {
      v3 &= sub_403981(&c);
      ++v7;
      if ( c < 0 )
      {
LABEL_9:
        free(ptr);
        return v3;
      }
      if ( ((*__ctype_b_loc())[c] & 0x4000) == 0 )
        goto LABEL_4;
      *((_BYTE *)ptr + i) = c;
    }
    while ( byte_612310 != 1 || v7 < qword_612320 )
    {
      if ( i == v5 )
        ptr = (void *)sub_407CBD(ptr, &v5);
      v3 &= sub_403981(&c);
      ++v7;
      if ( c < 0 )
        goto LABEL_9;
      if ( !c )
        break;
      if ( ((*__ctype_b_loc())[c] & 0x4000) == 0 )
        goto LABEL_4;
      v2 = i++;
      *((_BYTE *)ptr + v2) = c;
    }
    *((_BYTE *)ptr + i) = 0;
    qword_612300(v7 - i - 1, 32LL);
    for ( i = 0LL; ; ++i )
    {
      c = *((char *)ptr + i);
      if ( !c )
      {
        putchar_unlocked(10);
        goto LABEL_4;
      }
      if ( c == 10 )
      {
        fwrite_unlocked("\\n", 1uLL, 2uLL, stdout);
        continue;
      }
      if ( c > 10 )
      {
        if ( c == 12 )
        {
          fwrite_unlocked("\\f", 1uLL, 2uLL, stdout);
          continue;
        }
        if ( c < 12 )
        {
          fwrite_unlocked("\\v", 1uLL, 2uLL, stdout);
          continue;
        }
        if ( c == 13 )
        {
          fwrite_unlocked("\\r", 1uLL, 2uLL, stdout);
          continue;
        }
      }
      else
      {
        if ( c == 8 )
        {
          fwrite_unlocked("\\b", 1uLL, 2uLL, stdout);
          continue;
        }
        if ( c > 8 )
        {
          fwrite_unlocked("\\t", 1uLL, 2uLL, stdout);
          continue;
        }
        if ( c == 7 )
        {
          fwrite_unlocked("\\a", 1uLL, 2uLL, stdout);
          continue;
        }
      }
      putc_unlocked(c, stdout);
    }
  }
  free(ptr);
  return (unsigned __int8)(v3 & sub_403028(0)) != 0;
}
