#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D80(__int64 a1, const char **a2)
{
  int v2; // eax
  const char *v3; // rbx
  int *v4; // rax
  unsigned __int8 v8; // [rsp+12h] [rbp-2Eh]
  bool v9; // [rsp+13h] [rbp-2Dh]
  int v10; // [rsp+14h] [rbp-2Ch]
  int errnum; // [rsp+18h] [rbp-28h]
  int v12; // [rsp+1Ch] [rbp-24h]
  char *v13; // [rsp+20h] [rbp-20h]
  FILE *stream; // [rsp+28h] [rbp-18h]

  v8 = 1;
  while ( a1 )
  {
    v2 = strcmp(*a2, "-");
    v9 = v2 == 0;
    if ( v2 )
    {
      stream = fopen(*a2, "r");
      if ( !stream )
        goto LABEL_24;
      sub_40253A(stream, 2LL);
    }
    else
    {
      byte_607260 = 1;
      stream = (FILE *)stdin;
    }
    v13 = (char *)ptr;
    v10 = getc_unlocked(stream);
    errnum = *__errno_location();
    if ( v10 != -1 )
    {
      while ( 1 )
      {
        v12 = getc_unlocked(stream);
        if ( v12 == -1 )
          break;
        if ( v10 == 10 )
        {
          if ( *v13 )
            sub_4017DD(*v13);
          if ( ++v13 == (char *)qword_607270 )
            v13 = (char *)ptr;
        }
        else
        {
          sub_4017DD(v10);
        }
        v10 = v12;
      }
      errnum = *__errno_location();
      sub_4017DD(v10);
    }
    if ( v10 != 10 )
      sub_4017DD(10);
    if ( ferror_unlocked(stream) )
    {
      error(0, errnum, "%s", *a2);
      v8 = 0;
    }
    if ( v9 )
    {
      clearerr_unlocked(stream);
      goto LABEL_25;
    }
    if ( (unsigned int)sub_404925(stream) == -1 )
    {
LABEL_24:
      v3 = *a2;
      v4 = __errno_location();
      error(0, *v4, "%s", v3);
      v8 = 0;
    }
LABEL_25:
    --a1;
    ++a2;
  }
  return v8;
}
