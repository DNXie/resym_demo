#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4062F7()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60A240;
  for ( i = 1; i < dword_60A220; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60A320 )
  {
    free(ptr[1]);
    qword_60A230 = 256LL;
    off_60A238 = &unk_60A320;
  }
  if ( ptr != (void **)&qword_60A230 )
  {
    free(ptr);
    off_60A240 = &qword_60A230;
  }
  dword_60A220 = 1;
}
