#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40FE05(DIR *a1)
{
  __int64 v2; // rax
  int v3; // [rsp+1Ch] [rbp-34h]
  _BYTE *ptr; // [rsp+20h] [rbp-30h]
  unsigned __int64 v5; // [rsp+28h] [rbp-28h]
  size_t v6; // [rsp+30h] [rbp-20h]
  struct dirent *v7; // [rsp+38h] [rbp-18h]
  char *src; // [rsp+40h] [rbp-10h]
  size_t n; // [rsp+48h] [rbp-8h]

  v5 = 512LL;
  v6 = 0LL;
  if ( !a1 )
    return 0LL;
  ptr = (_BYTE *)sub_4126DD(512LL);
  while ( 1 )
  {
    *__errno_location() = 0;
    v7 = readdir(a1);
    if ( !v7 )
      break;
    src = v7->d_name;
    if ( v7->d_name[0] == 46 )
    {
      if ( v7->d_name[1] == 46 )
        v2 = 2LL;
      else
        v2 = 1LL;
    }
    else
    {
      v2 = 0LL;
    }
    if ( src[v2] )
    {
      n = strlen(v7->d_name) + 1;
      if ( v6 + n < v6 )
        sub_41285F();
      if ( v6 + n >= v5 )
      {
        do
        {
          if ( 2 * v5 < v5 )
            sub_41285F();
          v5 *= 2LL;
        }
        while ( v6 + n >= v5 );
        ptr = (_BYTE *)sub_412712(ptr, v5);
      }
      memcpy(&ptr[v6], src, n);
      v6 += n;
    }
  }
  ptr[v6] = 0;
  v3 = *__errno_location();
  if ( !v3 )
    return ptr;
  free(ptr);
  *__errno_location() = v3;
  return 0LL;
}
