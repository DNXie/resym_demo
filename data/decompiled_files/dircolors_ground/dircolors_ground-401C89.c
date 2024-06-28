#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401C89(FILE *a1, __int64 a2)
{
  size_t v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  void *v13; // r12
  char *v14; // rbx
  char *v15; // rax
  unsigned __int8 v17; // [rsp+1Eh] [rbp-A2h]
  char v18; // [rsp+1Fh] [rbp-A1h]
  int v19; // [rsp+20h] [rbp-A0h]
  int i; // [rsp+24h] [rbp-9Ch]
  char *lineptr; // [rsp+28h] [rbp-98h] BYREF
  size_t n; // [rsp+30h] [rbp-90h] BYREF
  void *ptr; // [rsp+38h] [rbp-88h] BYREF
  char *s1; // [rsp+40h] [rbp-80h] BYREF
  __int64 v25; // [rsp+48h] [rbp-78h]
  char *s; // [rsp+50h] [rbp-70h]
  unsigned __int8 *v27; // [rsp+58h] [rbp-68h]
  char *s2; // [rsp+60h] [rbp-60h]
  struct obstack *v29; // [rsp+68h] [rbp-58h]
  struct obstack *v30; // [rsp+70h] [rbp-50h]
  struct obstack *v31; // [rsp+78h] [rbp-48h]
  struct obstack *v32; // [rsp+80h] [rbp-40h]
  struct obstack *v33; // [rsp+88h] [rbp-38h]
  struct obstack *v34; // [rsp+90h] [rbp-30h]
  struct obstack *v35; // [rsp+98h] [rbp-28h]
  struct obstack *v36; // [rsp+A0h] [rbp-20h]
  struct obstack *v37; // [rsp+A8h] [rbp-18h]

  v25 = 0LL;
  s = "# Configuration file for dircolors, a utility to help you set the";
  lineptr = 0LL;
  n = 0LL;
  v17 = 1;
  v19 = 3;
  s2 = getenv("TERM");
  if ( !s2 || !*s2 )
    s2 = "none";
  while ( 1 )
  {
    ++v25;
    if ( a1 )
      break;
    if ( s == "NORMAL" )
      return v17;
    v27 = (unsigned __int8 *)s;
    v2 = strlen(s);
    s += v2 + 1;
LABEL_10:
    sub_401892(v27, &ptr, (__int64 *)&s1);
    if ( ptr )
    {
      if ( s1 )
      {
        v18 = 0;
        if ( (unsigned int)sub_40285B(ptr, "TERM") )
        {
          if ( v19 == 2 )
            v19 = 1;
          if ( v19 )
          {
            if ( *(_BYTE *)ptr == 46 )
            {
              v29 = &stru_609260;
              if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                _obstack_newchunk(v29, 1);
              v4 = v29->next_free;
              v29->next_free = v4 + 1;
              *v4 = 42;
              sub_401A80((char *)ptr);
              v30 = &stru_609260;
              if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                _obstack_newchunk(v30, 1);
              v5 = v30->next_free;
              v30->next_free = v5 + 1;
              *v5 = 61;
              sub_401A80(s1);
              v31 = &stru_609260;
              if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                _obstack_newchunk(v31, 1);
              v6 = v31->next_free;
              v31->next_free = v6 + 1;
              *v6 = 58;
            }
            else if ( *(_BYTE *)ptr == 42 )
            {
              sub_401A80((char *)ptr);
              v32 = &stru_609260;
              if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                _obstack_newchunk(v32, 1);
              v7 = v32->next_free;
              v32->next_free = v7 + 1;
              *v7 = 61;
              sub_401A80(s1);
              v33 = &stru_609260;
              if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                _obstack_newchunk(v33, 1);
              v8 = v33->next_free;
              v33->next_free = v8 + 1;
              *v8 = 58;
            }
            else if ( (unsigned int)sub_40285B(ptr, "OPTIONS")
                   && (unsigned int)sub_40285B(ptr, "COLOR")
                   && (unsigned int)sub_40285B(ptr, "EIGHTBIT") )
            {
              for ( i = 0; off_4069E0[i] && (unsigned int)sub_40285B(ptr, off_4069E0[i]); ++i )
                ;
              if ( off_4069E0[i] )
              {
                v34 = &stru_609260;
                if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                  _obstack_newchunk(v34, 1);
                v9 = v34->next_free;
                v34->next_free = v9 + 1;
                *v9 = *(_BYTE *)*(&off_406B60 + i);
                v35 = &stru_609260;
                if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                  _obstack_newchunk(v35, 1);
                v10 = v35->next_free;
                v35->next_free = v10 + 1;
                *v10 = *((_BYTE *)*(&off_406B60 + i) + 1);
                v36 = &stru_609260;
                if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                  _obstack_newchunk(v36, 1);
                v11 = v36->next_free;
                v36->next_free = v11 + 1;
                *v11 = 61;
                sub_401A80(s1);
                v37 = &stru_609260;
                if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
                  _obstack_newchunk(v37, 1);
                v12 = v37->next_free;
                v37->next_free = v12 + 1;
                *v12 = 58;
              }
              else
              {
                v18 = 1;
              }
            }
          }
          else
          {
            v18 = 1;
          }
        }
        else if ( !strcmp(s1, s2) )
        {
          v19 = 2;
        }
        else if ( v19 != 2 )
        {
          v19 = 0;
        }
        if ( v18 && (v19 == 2 || v19 == 1) )
        {
          v13 = ptr;
          if ( a2 )
            v14 = (char *)sub_402D4F(a2);
          else
            v14 = gettext("<internal>");
          v15 = gettext("%s:%lu: unrecognized keyword %s");
          error(0, 0, v15, v14, v25, v13);
          v17 = 0;
        }
        free(ptr);
        free(s1);
      }
      else
      {
        v3 = gettext("%s:%lu: invalid line;  missing second token");
        error(0, 0, v3, a2, v25);
        v17 = 0;
        free(ptr);
      }
    }
  }
  if ( getline(&lineptr, &n, a1) > 0 )
  {
    v27 = (unsigned __int8 *)lineptr;
    goto LABEL_10;
  }
  free(lineptr);
  return v17;
}
