#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40226B(const char *a1)
{
  char *v1; // rax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  size_t v6; // rbx
  size_t v7; // rax
  char *v8; // rax
  char *v9; // rax
  size_t v10; // rbx
  size_t v11; // rax
  char *v12; // rax
  char *v13; // rax
  struct passwd *v15; // [rsp+18h] [rbp-478h]
  char *v16; // [rsp+20h] [rbp-470h]
  char *ptr; // [rsp+28h] [rbp-468h]
  char *dest; // [rsp+38h] [rbp-458h]
  FILE *stream; // [rsp+40h] [rbp-450h]
  size_t n; // [rsp+48h] [rbp-448h]
  char *filename; // [rsp+58h] [rbp-438h]
  FILE *v22; // [rsp+60h] [rbp-430h]
  size_t v23; // [rsp+68h] [rbp-428h]
  char v24[1032]; // [rsp+70h] [rbp-420h] BYREF
  unsigned __int64 v25; // [rsp+478h] [rbp-18h]

  v25 = __readfsqword(0x28u);
  v15 = getpwnam(a1);
  v1 = gettext("Login name: ");
  printf(v1);
  printf("%-28s", a1);
  v2 = gettext("In real life: ");
  printf(v2);
  if ( v15 )
  {
    v16 = strchr(v15->pw_gecos, 44);
    if ( v16 )
      *v16 = 0;
    ptr = (char *)sub_401B24(v15->pw_gecos, v15->pw_name);
    printf(" %s", ptr);
    free(ptr);
    putchar_unlocked(10);
    if ( byte_608245 )
    {
      v4 = gettext("Directory: ");
      printf(v4);
      printf("%-29s", v15->pw_dir);
      v5 = gettext("Shell: ");
      printf(v5);
      printf(" %s", v15->pw_shell);
      putchar_unlocked(10);
    }
    if ( byte_608243 )
    {
      v6 = strlen(v15->pw_dir);
      v7 = strlen("/.project");
      dest = (char *)sub_40530A(v6 + v7 + 1);
      v8 = stpcpy(dest, v15->pw_dir);
      strcpy(v8, "/.project");
      stream = fopen(dest, "r");
      if ( stream )
      {
        v9 = gettext("Project: ");
        printf(v9);
        while ( 1 )
        {
          n = fread_unlocked(v24, 1uLL, 0x400uLL, stream);
          if ( !n )
            break;
          fwrite_unlocked(v24, 1uLL, n, stdout);
        }
        sub_4054C1(stream);
      }
      free(dest);
    }
    if ( byte_608244 )
    {
      v10 = strlen(v15->pw_dir);
      v11 = strlen("/.plan");
      filename = (char *)sub_40530A(v10 + v11 + 1);
      v12 = stpcpy(filename, v15->pw_dir);
      strcpy(v12, "/.plan");
      v22 = fopen(filename, "r");
      if ( v22 )
      {
        v13 = gettext("Plan:\n");
        printf(v13);
        while ( 1 )
        {
          v23 = fread_unlocked(v24, 1uLL, 0x400uLL, v22);
          if ( !v23 )
            break;
          fwrite_unlocked(v24, 1uLL, v23, stdout);
        }
        sub_4054C1(v22);
      }
      free(filename);
    }
    putchar_unlocked(10);
  }
  else
  {
    v3 = gettext("???\n");
    printf(" %s", v3);
  }
  return __readfsqword(0x28u) ^ v25;
}
