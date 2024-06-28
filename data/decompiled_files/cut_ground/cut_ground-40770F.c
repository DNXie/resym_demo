#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40770F(FILE *a1, unsigned __int64 a2)
{
  int result; // eax
  __int64 v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  unsigned __int64 v6; // [rsp+0h] [rbp-1060h]
  int fd; // [rsp+1Ch] [rbp-1044h]
  unsigned __int64 v8; // [rsp+20h] [rbp-1040h] BYREF
  __int64 i; // [rsp+28h] [rbp-1038h]
  __int64 v10; // [rsp+30h] [rbp-1030h]
  size_t n; // [rsp+38h] [rbp-1028h]
  char ptr[4104]; // [rsp+40h] [rbp-1020h] BYREF
  unsigned __int64 v13; // [rsp+1048h] [rbp-18h]

  v6 = a2;
  v13 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  for ( i = sub_407953(a1); i; --i )
  {
    if ( sub_407682(a1, &v8) && v8 )
    {
      v3 = v8;
      if ( v6 <= v8 )
        v3 = v6;
      v10 = v3;
      sub_4076EA((__int64)a1, v3);
      v6 -= v10;
      if ( !v6 )
        return 0;
      i -= v10;
      if ( !i )
        break;
    }
    if ( fgetc(a1) == -1 )
      goto LABEL_24;
    if ( !--v6 )
      return 0;
  }
  fd = fileno(a1);
  if ( fd >= 0 && lseek(fd, 0LL, 1) >= 0 )
    return sub_40753F(a1, v6, 1);
  while ( 1 )
  {
    v4 = 4096LL;
    if ( v6 <= 0x1000 )
      v4 = v6;
    n = v4;
    v5 = fread(ptr, 1uLL, v4, a1);
    if ( v5 < n )
      break;
    v6 -= n;
    if ( !v6 )
      return 0;
  }
LABEL_24:
  if ( ferror(a1) )
    result = -1;
  else
    result = 0;
  return result;
}
