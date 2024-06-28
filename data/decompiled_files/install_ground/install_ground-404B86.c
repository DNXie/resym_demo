#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404B86(int a1, unsigned int a2, char *a3, unsigned __int64 a4, char a5, __int64 a6, __int64 a7, unsigned __int64 a8, _QWORD *a9, _BYTE *a10)
{
  size_t v10; // rax
  __int64 v11; // r12
  char *v12; // rbx
  int *v13; // rax
  _QWORD *v15; // rax
  char *v16; // rax
  __int64 v17; // r12
  char *v18; // rbx
  int *v19; // rax
  __int64 v20; // r12
  char *v21; // rbx
  int *v22; // rax
  _QWORD *v27; // [rsp+30h] [rbp-30h]
  char *v28; // [rsp+38h] [rbp-28h]
  ssize_t offset; // [rsp+40h] [rbp-20h]

  *a10 = 0;
  *a9 = 0LL;
  while ( a8 )
  {
    v27 = 0LL;
    v10 = a8;
    if ( a4 <= a8 )
      v10 = a4;
    offset = read(a1, a3, v10);
    if ( offset >= 0 )
    {
      if ( !offset )
        return 1LL;
      a8 -= offset;
      *a9 += offset;
      if ( a5 )
      {
        a3[offset] = 1;
        v27 = a3;
        do
          v15 = v27++;
        while ( !*v15 );
        v28 = (char *)(v27 - 1);
        do
          v16 = v28++;
        while ( !*v16 );
        if ( &a3[offset] < v28 )
        {
          if ( lseek(a2, offset, 1) < 0 )
          {
            v17 = sub_40E392(a7);
            v18 = gettext("cannot lseek %s");
            v19 = __errno_location();
            error(0, *v19, v18, v17);
            return 0LL;
          }
          *a10 = 1;
        }
        else
        {
          v27 = 0LL;
        }
      }
      if ( !v27 )
      {
        if ( sub_40BB8B(a2, a3, offset) != offset )
        {
          v20 = sub_40E392(a7);
          v21 = gettext("writing %s");
          v22 = __errno_location();
          error(0, *v22, v21, v20);
          return 0LL;
        }
        *a10 = 0;
      }
    }
    else if ( *__errno_location() != 4 )
    {
      v11 = sub_40E392(a6);
      v12 = gettext("reading %s");
      v13 = __errno_location();
      error(0, *v13, v12, v11);
      return 0LL;
    }
  }
  return 1LL;
}
