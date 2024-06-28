#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401920(int a1, char **a2)
{
  const char *v2; // rax
  FILE *v3; // rax
  const char *v4; // rbx
  int *v5; // rax
  const char *v6; // rbx
  int *v7; // rax
  char *v8; // rbx
  int *v9; // rax
  const char *v10; // rbx
  int *v11; // rax
  unsigned __int8 v13; // [rsp+13h] [rbp-203Dh]
  int i; // [rsp+14h] [rbp-203Ch]
  int j; // [rsp+14h] [rbp-203Ch]
  int k; // [rsp+14h] [rbp-203Ch]
  int l; // [rsp+14h] [rbp-203Ch]
  const char *v18; // [rsp+18h] [rbp-2038h]
  _QWORD *ptr; // [rsp+20h] [rbp-2030h]
  ssize_t size; // [rsp+28h] [rbp-2028h]
  char buf[8200]; // [rsp+30h] [rbp-2020h] BYREF
  unsigned __int64 v22; // [rsp+2038h] [rbp-18h]

  v22 = __readfsqword(0x28u);
  v13 = 1;
  if ( byte_607239 )
    v2 = "a";
  else
    v2 = "w";
  v18 = v2;
  ptr = (_QWORD *)sub_404214(a1 + 1, 8LL);
  for ( i = a1; i > 0; --i )
    a2[i] = a2[i - 1];
  sub_40201D(stdin, 2LL);
  *ptr = stdout;
  *a2 = gettext("standard output");
  setvbuf(stdout, 0LL, 2, 0LL);
  for ( j = 1; j <= a1; ++j )
  {
    if ( !strcmp(a2[j], "-") )
      v3 = stdout;
    else
      v3 = (FILE *)sub_402057(a2[j], v18);
    ptr[j] = v3;
    if ( ptr[j] )
    {
      setvbuf((FILE *)ptr[j], 0LL, 2, 0LL);
    }
    else
    {
      v4 = a2[j];
      v5 = __errno_location();
      error(0, *v5, "%s", v4);
      v13 = 0;
    }
  }
  while ( 1 )
  {
    do
      size = read(0, buf, 0x2000uLL);
    while ( size < 0 && *__errno_location() == 4 );
    if ( size <= 0 )
      break;
    for ( k = 0; k <= a1; ++k )
    {
      if ( ptr[k] && fwrite_unlocked(buf, size, 1uLL, (FILE *)ptr[k]) != 1 )
      {
        v6 = a2[k];
        v7 = __errno_location();
        error(0, *v7, "%s", v6);
        ptr[k] = 0LL;
        v13 = 0;
      }
    }
  }
  if ( size == -1 )
  {
    v8 = gettext("read error");
    v9 = __errno_location();
    error(0, *v9, v8);
    v13 = 0;
  }
  for ( l = 1; l <= a1; ++l )
  {
    if ( strcmp(a2[l], "-") && ptr[l] && (unsigned int)sub_404514(ptr[l]) )
    {
      v10 = a2[l];
      v11 = __errno_location();
      error(0, *v11, "%s", v10);
      v13 = 0;
    }
  }
  free(ptr);
  return v13;
}
