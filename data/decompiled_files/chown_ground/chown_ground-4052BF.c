#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4052BF(_BYTE *a1, _BYTE *a2, int *a3, __gid_t *a4, char **a5, void **a6)
{
  char *v6; // rax
  struct passwd *v7; // rax
  __int64 v9; // rax
  struct group *v10; // rax
  int v16; // [rsp+38h] [rbp-78h]
  __gid_t gid; // [rsp+3Ch] [rbp-74h]
  unsigned __int64 v18; // [rsp+40h] [rbp-70h] BYREF
  char *msgid; // [rsp+48h] [rbp-68h]
  char *name; // [rsp+50h] [rbp-60h]
  void *ptr; // [rsp+58h] [rbp-58h]
  __int64 v22; // [rsp+60h] [rbp-50h]
  char *v23; // [rsp+68h] [rbp-48h]
  struct passwd *v24; // [rsp+70h] [rbp-40h]
  struct group *v25; // [rsp+78h] [rbp-38h]
  char v26[24]; // [rsp+80h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp-18h]

  v27 = __readfsqword(0x28u);
  ptr = 0LL;
  v16 = *a3;
  gid = *a4;
  msgid = 0LL;
  *a6 = 0LL;
  *a5 = (char *)*a6;
  name = 0LL;
  if ( a2 )
  {
    v22 = a2 - a1;
    if ( a2 != a1 )
    {
      name = (char *)sub_4061E5(a1, v22 + 1);
      name[v22] = 0;
    }
  }
  else if ( *a1 )
  {
    name = (char *)sub_406216(a1);
  }
  if ( a2 && a2[1] )
    v6 = a2 + 1;
  else
    v6 = 0LL;
  v23 = v6;
  if ( name )
  {
    if ( *name == 43 )
      v7 = 0LL;
    else
      v7 = getpwnam(name);
    v24 = v7;
    if ( v7 )
    {
      v16 = v24->pw_uid;
      if ( !v23 && a2 )
      {
        gid = v24->pw_gid;
        v25 = getgrgid(gid);
        if ( v25 )
          v9 = (__int64)v25->gr_name;
        else
          v9 = sub_403997(gid, (__int64)v26);
        ptr = (void *)sub_406216(v9);
        endgrent();
      }
    }
    else if ( a2 && !v23 )
    {
      msgid = off_60F298;
    }
    else if ( (unsigned int)sub_406318(name, 0LL, 10LL, &v18, &unk_40CC86) || v18 > 0xFFFFFFFF || (_DWORD)v18 == -1 )
    {
      msgid = off_60F2A0;
    }
    else
    {
      v16 = v18;
    }
    endpwent();
  }
  if ( v23 && !msgid )
  {
    if ( *v23 == 43 )
      v10 = 0LL;
    else
      v10 = getgrnam(v23);
    v25 = v10;
    if ( v10 )
    {
      gid = v25->gr_gid;
    }
    else if ( (unsigned int)sub_406318(v23, 0LL, 10LL, &v18, &unk_40CC86) || v18 > 0xFFFFFFFF || (_DWORD)v18 == -1 )
    {
      msgid = off_60F2A8;
    }
    else
    {
      gid = v18;
    }
    endgrent();
    ptr = (void *)sub_406216(v23);
  }
  if ( msgid )
  {
    free(ptr);
  }
  else
  {
    *a3 = v16;
    *a4 = gid;
    *a5 = name;
    *a6 = ptr;
    name = 0LL;
  }
  free(name);
  return gettext(msgid);
}
