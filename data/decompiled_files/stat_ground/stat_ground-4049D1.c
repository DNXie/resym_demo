#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4049D1(char a1, char a2, char a3)
{
  char *v3; // rax
  char *v4; // rax
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // er8
  int v8; // er9
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // er8
  int v12; // er9
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // er8
  int v16; // er9
  __int64 v19; // [rsp+10h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-10h]
  __int64 v21; // [rsp+10h] [rbp-10h]
  __int64 v22; // [rsp+10h] [rbp-10h]
  void *ptr; // [rsp+18h] [rbp-8h]
  void *ptra; // [rsp+18h] [rbp-8h]
  void *ptrb; // [rsp+18h] [rbp-8h]

  if ( a1 )
  {
    if ( a2 )
    {
      v19 = sub_40ABFE("%n %i %l %t %s %S %b %f %a %c %d\n");
    }
    else
    {
      v3 = gettext(
             "  File: \"%n\"\n"
             "    ID: %-8i Namelen: %-7l Type: %T\n"
             "Block size: %-10s Fundamental block size: %S\n"
             "Blocks: Total: %-10b Free: %-10f Available: %a\n"
             "Inodes: Total: %-10c Free: %d\n");
      v19 = sub_40ABFE(v3);
    }
  }
  else if ( a2 )
  {
    v19 = sub_40ABFE("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
  }
  else
  {
    v4 = gettext("  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n");
    v20 = sub_40ABFE(v4);
    ptr = (void *)v20;
    if ( a3 )
      v5 = (unsigned int)gettext("Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n");
    else
      v5 = (unsigned int)gettext("Device: %Dh/%dd\tInode: %-10i  Links: %h\n");
    v21 = sub_40AC99((unsigned int)"%s%s", v20, v5, v6, v7, v8);
    free(ptr);
    ptra = (void *)v21;
    v9 = (unsigned int)gettext("Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n");
    v22 = sub_40AC99((unsigned int)"%s%s", v21, v9, v10, v11, v12);
    free(ptra);
    ptrb = (void *)v22;
    v13 = (unsigned int)gettext("Access: %x\nModify: %y\nChange: %z\n Birth: %w\n");
    v19 = sub_40AC99((unsigned int)"%s%s", v22, v13, v14, v15, v16);
    free(ptrb);
  }
  return v19;
}
