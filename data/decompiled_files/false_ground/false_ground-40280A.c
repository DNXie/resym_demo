#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40280A()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6061A0;
  for ( i = 1; i < dword_606180; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_606260 )
  {
    free(ptr[1]);
    qword_606190 = 256LL;
    off_606198 = &unk_606260;
  }
  if ( ptr != (void **)&qword_606190 )
  {
    free(ptr);
    off_6061A0 = &qword_606190;
  }
  dword_606180 = 1;
}
