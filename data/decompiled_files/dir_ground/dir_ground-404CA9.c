#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_404CA9()
{
  char *v0; // rax
  int v1; // eax
  unsigned int v2; // eax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rbx
  char *v8; // rax
  char *v9; // rax
  unsigned int v10; // eax
  char *v11; // rax
  char s1[16]; // [rsp+0h] [rbp-50h] BYREF
  int i; // [rsp+10h] [rbp-40h]
  unsigned int v15; // [rsp+14h] [rbp-3Ch]
  char *v16; // [rsp+18h] [rbp-38h] BYREF
  char *v17; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-28h]
  _QWORD *v19; // [rsp+30h] [rbp-20h]
  void *ptr; // [rsp+38h] [rbp-18h]

  v0 = getenv("LS_COLORS");
  v16 = v0;
  if ( v0 )
  {
    LODWORD(v0) = (unsigned __int8)*v16;
    if ( (_BYTE)v0 )
    {
      v18 = 0LL;
      strcpy(s1, "??");
      ::ptr = (void *)sub_414ADE(v16);
      v17 = (char *)::ptr;
      v15 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 == 3 )
          {
            v15 = 6;
            v5 = v16++;
            if ( *v5 == 61 )
            {
              for ( i = 0; (&off_415FA0)[i]; ++i )
              {
                if ( !strcmp(s1, (&off_415FA0)[i]) )
                {
                  *(&::s1 + 2 * i) = v17;
                  if ( sub_4048C0(&v17, &v16, 0, &qword_61D3A0[2 * i]) )
                    v6 = 1;
                  else
                    v6 = 6;
                  v15 = v6;
                  break;
                }
              }
              if ( v15 == 6 )
              {
                v7 = sub_4111EB(s1);
                v8 = gettext("unrecognized prefix: %s");
                error(0, 0, v8, v7);
              }
            }
          }
          if ( v15 > 3 )
            break;
          if ( v15 == 1 )
          {
            v1 = *v16;
            if ( v1 == 42 )
            {
              v18 = (_QWORD *)sub_414989(40LL);
              v18[4] = qword_61D6C8;
              qword_61D6C8 = (__int64)v18;
              ++v16;
              v18[1] = v17;
              if ( sub_4048C0(&v17, &v16, 1, v18) )
                v2 = 4;
              else
                v2 = 6;
              v15 = v2;
            }
            else if ( v1 == 58 )
            {
              ++v16;
            }
            else
            {
              if ( !*v16 )
              {
                v15 = 5;
                goto LABEL_44;
              }
              v3 = v16++;
              s1[0] = *v3;
              v15 = 2;
            }
          }
          else
          {
            if ( v15 != 2 )
              goto LABEL_43;
            if ( *v16 )
            {
              v4 = v16++;
              s1[1] = *v4;
              v15 = 3;
            }
            else
            {
              v15 = 6;
            }
          }
        }
        if ( v15 != 4 )
          break;
        v9 = v16++;
        if ( *v9 == 61 )
        {
          v18[3] = v17;
          if ( sub_4048C0(&v17, &v16, 0, v18 + 2) )
            v10 = 1;
          else
            v10 = 6;
          v15 = v10;
        }
        else
        {
          v15 = 6;
        }
      }
      if ( v15 != 6 )
LABEL_43:
        abort();
LABEL_44:
      if ( v15 == 6 )
      {
        v11 = gettext("unparsable value for LS_COLORS environment variable");
        error(0, 0, v11);
        free(::ptr);
        v19 = (_QWORD *)qword_61D6C8;
        while ( v19 )
        {
          ptr = v19;
          v19 = (_QWORD *)v19[4];
          free(ptr);
        }
        byte_61D6C0 = 0;
      }
      LODWORD(v0) = qword_61D410;
      if ( qword_61D410 == 6 )
      {
        LODWORD(v0) = strncmp(off_61D418, "target", 6uLL);
        if ( !(_DWORD)v0 )
          byte_61D650 = 1;
      }
    }
  }
  return (int)v0;
}
