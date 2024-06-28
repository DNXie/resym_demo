#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40552C()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60A230;
  for ( i = 1; i < dword_60A210; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60A2E0 )
  {
    free(ptr[1]);
    qword_60A220 = 256LL;
    off_60A228 = &unk_60A2E0;
  }
  if ( ptr != (void **)&qword_60A220 )
  {
    free(ptr);
    off_60A230 = &qword_60A220;
  }
  dword_60A210 = 1;
}
