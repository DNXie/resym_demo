#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402632(__int64 a1, int a2, const char *a3, const char *a4, const char *a5, const char *a6)
{
  __int64 v6; // rbx
  char *v7; // rax
  const char *v8; // rdx
  const char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // rax
  char *format; // [rsp+38h] [rbp-28h]
  char *ptr; // [rsp+40h] [rbp-20h]
  char *v21; // [rsp+48h] [rbp-18h]

  if ( a2 == 1 )
  {
    v6 = sub_4039AF(a1);
    v7 = gettext("neither symbolic link %s nor referent has been changed\n");
    printf(v7, v6);
  }
  else
  {
    v21 = sub_40257C(a5, a6);
    if ( a6 )
      v8 = a4;
    else
      v8 = 0LL;
    if ( a5 )
      v9 = a3;
    else
      v9 = 0LL;
    ptr = sub_40257C(v9, v8);
    switch ( a2 )
    {
      case 3:
        if ( ptr )
        {
          if ( a5 )
          {
            v11 = gettext("failed to change ownership of %s from %s to %s\n");
          }
          else if ( a6 )
          {
            v11 = gettext("failed to change group of %s from %s to %s\n");
          }
          else
          {
            v11 = gettext("failed to change ownership of %s\n");
          }
          format = v11;
        }
        else
        {
          if ( a5 )
          {
            v12 = gettext("failed to change ownership of %s to %s\n");
          }
          else if ( a6 )
          {
            v12 = gettext("failed to change group of %s to %s\n");
          }
          else
          {
            v12 = gettext("failed to change ownership of %s\n");
          }
          format = v12;
          free(0LL);
          ptr = v21;
          v21 = 0LL;
        }
        break;
      case 4:
        if ( a5 )
        {
          v13 = gettext("ownership of %s retained as %s\n");
        }
        else if ( a6 )
        {
          v13 = gettext("group of %s retained as %s\n");
        }
        else
        {
          v13 = gettext("ownership of %s retained\n");
        }
        format = v13;
        break;
      case 2:
        if ( a5 )
        {
          v10 = gettext("changed ownership of %s from %s to %s\n");
        }
        else if ( a6 )
        {
          v10 = gettext("changed group of %s from %s to %s\n");
        }
        else
        {
          v10 = gettext("no change to ownership of %s\n");
        }
        format = v10;
        break;
      default:
        abort();
    }
    v14 = sub_4039AF(a1);
    printf(format, v14, ptr, v21);
    free(ptr);
    free(v21);
  }
}
