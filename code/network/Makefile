# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the network assignment
#    Defines set up assuming this assignment is done last 
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DUSER_PROGRAM -DVM -DFILESYS_NEEDED -DFILESYS -DNETWORK
INCPATH = -I../network -I../bin -I../filesys -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H) $(NETWORK_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C) $(NETWORK_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O) $(NETWORK_O)

# bare bones version
# DEFINES =-DTHREADS -DNETWORK
# INCPATH = -I../network -I../threads -I../machine
# HFILES = $(THREAD_H) $(NETWORK_H)
# CFILES = $(THREAD_C) $(NETWORK_C)
# C_OFILES = $(THREAD_O) $(NETWORK_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o: ../threads/main.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/system.h ../threads/thread.h \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
scheduler.o: ../threads/scheduler.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/scheduler.h ../threads/list.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../bin/noff.h ../machine/translate.h \
 ../userprog/fdtable.h ../filesys/openfile.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/system.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
synch.o: ../threads/synch.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/synch.h ../threads/list.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../bin/noff.h ../machine/translate.h \
 ../userprog/fdtable.h ../filesys/openfile.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
system.o: ../threads/system.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/utility.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h ../threads/preemptive.h
thread.o: ../threads/thread.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/switch.h ../threads/system.h ../threads/scheduler.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/bitmap.h ../userprog/synchconsole.h \
 ../filesys/synchdisk.h ../machine/disk.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/thread.h
utility.o: ../threads/utility.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h
threadtest.o: ../threads/threadtest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/utility.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/interrupt.h ../threads/list.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/system.h ../threads/thread.h \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../userprog/bitmap.h ../userprog/synchconsole.h \
 ../filesys/synchdisk.h ../machine/disk.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/thread.h
sysdep.o: ../machine/sysdep.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/xlocale.h /usr/include/signal.h \
 /usr/include/bits/sigset.h /usr/include/bits/signum.h \
 /usr/include/time.h /usr/include/bits/siginfo.h \
 /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h \
 /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h \
 /usr/include/sys/types.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/sys/socket.h \
 /usr/include/sys/uio.h /usr/include/bits/uio.h \
 /usr/include/bits/socket.h /usr/include/bits/socket_type.h \
 /usr/include/bits/sockaddr.h /usr/include/asm/socket.h \
 /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h \
 /usr/include/asm-generic/sockios.h /usr/include/sys/file.h \
 /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/stat.h \
 /usr/include/sys/un.h /usr/include/sys/mman.h /usr/include/bits/mman.h \
 /usr/include/sys/syscall.h /usr/include/asm/unistd.h \
 /usr/include/asm/unistd_64.h /usr/include/bits/syscall.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 ../machine/interrupt.h ../threads/list.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/system.h \
 ../threads/thread.h ../threads/synch.h ../threads/list.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../bin/noff.h ../machine/translate.h \
 ../userprog/fdtable.h ../filesys/openfile.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../userprog/bitmap.h ../userprog/synchconsole.h \
 ../filesys/synchdisk.h ../machine/disk.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/thread.h
stats.o: ../machine/stats.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../machine/sysdep.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../machine/stats.h
timer.o: ../machine/timer.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/timer.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../threads/synch.h ../threads/list.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
preemptive.o: ../threads/preemptive.cc /usr/include/stdc-predef.h \
 ../threads/preemptive.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h /usr/include/sys/ptrace.h /usr/include/sys/wait.h \
 /usr/include/signal.h /usr/include/bits/signum.h \
 /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
 /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
 /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
 /usr/include/sys/user.h
addrspace.o: ../userprog/addrspace.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h ../userprog/addrspace.h
bitmap.o: ../userprog/bitmap.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../userprog/bitmap.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../filesys/openfile.h
exception.o: ../userprog/exception.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h ../userprog/processtable.h \
 /usr/include/c++/4.8.1/string /usr/include/c++/4.8.1/bits/stringfwd.h \
 /usr/include/c++/4.8.1/bits/char_traits.h \
 /usr/include/c++/4.8.1/bits/postypes.h /usr/include/c++/4.8.1/cwchar \
 /usr/include/bits/wchar.h /usr/include/c++/4.8.1/bits/localefwd.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.8.1/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.8.1/iosfwd \
 /usr/include/c++/4.8.1/cctype /usr/include/ctype.h \
 /usr/include/c++/4.8.1/bits/ostream_insert.h \
 /usr/include/c++/4.8.1/bits/cxxabi_forced.h \
 /usr/include/c++/4.8.1/bits/basic_string.h \
 /usr/include/c++/4.8.1/ext/atomicity.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/bits/sched.h \
 /usr/include/bits/timex.h /usr/include/bits/setjmp.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.8.1/bits/basic_string.tcc \
 /usr/include/c++/4.8.1/vector \
 /usr/include/c++/4.8.1/bits/stl_construct.h \
 /usr/include/c++/4.8.1/ext/alloc_traits.h \
 /usr/include/c++/4.8.1/bits/stl_uninitialized.h \
 /usr/include/c++/4.8.1/bits/stl_vector.h \
 /usr/include/c++/4.8.1/bits/stl_bvector.h \
 /usr/include/c++/4.8.1/bits/vector.tcc /usr/include/c++/4.8.1/iostream \
 /usr/include/c++/4.8.1/ostream /usr/include/c++/4.8.1/ios \
 /usr/include/c++/4.8.1/bits/ios_base.h \
 /usr/include/c++/4.8.1/bits/locale_classes.h \
 /usr/include/c++/4.8.1/bits/locale_classes.tcc \
 /usr/include/c++/4.8.1/streambuf \
 /usr/include/c++/4.8.1/bits/streambuf.tcc \
 /usr/include/c++/4.8.1/bits/basic_ios.h \
 /usr/include/c++/4.8.1/bits/locale_facets.h \
 /usr/include/c++/4.8.1/cwctype /usr/include/wctype.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.8.1/bits/streambuf_iterator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.8.1/bits/locale_facets.tcc \
 /usr/include/c++/4.8.1/bits/basic_ios.tcc \
 /usr/include/c++/4.8.1/bits/ostream.tcc /usr/include/c++/4.8.1/istream \
 /usr/include/c++/4.8.1/bits/istream.tcc /usr/include/c++/4.8.1/numeric \
 /usr/include/c++/4.8.1/bits/stl_numeric.h
progtest.o: ../userprog/progtest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h ../userprog/addrspace.h
console.o: ../machine/console.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/console.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../threads/synch.h ../threads/list.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
machine.o: ../machine/machine.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../machine/translate.h ../machine/disk.h \
 ../threads/system.h ../threads/utility.h ../threads/thread.h \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
mipssim.o: ../machine/mipssim.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../machine/translate.h ../machine/disk.h \
 ../machine/mipssim.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../threads/synch.h ../threads/list.h \
 ../machine/machine.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../bin/noff.h ../machine/translate.h \
 ../userprog/fdtable.h ../filesys/openfile.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
translate.o: ../machine/translate.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
synchconsole.o: ../userprog/synchconsole.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../userprog/synchconsole.h ../threads/synch.h \
 ../threads/copyright.h ../threads/list.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../machine/console.h ../threads/utility.h
fdtable.o: ../userprog/fdtable.cc /usr/include/stdc-predef.h \
 ../userprog/fdtable.h ../filesys/openfile.h ../threads/copyright.h \
 ../threads/utility.h ../threads/copyright.h ../machine/sysdep.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../userprog/syscall.h ../filesys/filesys.h \
 ../filesys/openfile.h ../userprog/synchconsole.h ../threads/synch.h \
 ../threads/list.h ../threads/utility.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h
miu.o: ../vm/miu.cc /usr/include/stdc-predef.h ../vm/miu.h \
 ../threads/copyright.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/utility.h ../threads/copyright.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../bin/noff.h ../machine/translate.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../userprog/fdtable.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/synchconsole.h \
 ../filesys/synchdisk.h ../machine/disk.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/thread.h
directory.o: ../filesys/directory.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../machine/sysdep.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../filesys/filehdr.h ../machine/disk.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../filesys/directory.h \
 ../filesys/openfile.h
filehdr.o: ../filesys/filehdr.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h ../filesys/filehdr.h
filesys.o: ../filesys/filesys.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/disk.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../filesys/directory.h ../filesys/openfile.h ../filesys/filehdr.h \
 ../filesys/filesys.h
fstest.o: ../filesys/fstest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../machine/sysdep.h /usr/include/stdlib.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/system.h ../threads/utility.h ../threads/thread.h \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../bin/noff.h ../machine/translate.h \
 ../userprog/fdtable.h ../filesys/openfile.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
openfile.o: ../filesys/openfile.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../filesys/filehdr.h ../machine/disk.h \
 ../threads/utility.h ../threads/copyright.h ../machine/sysdep.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../filesys/openfile.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../threads/synch.h ../threads/list.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../userprog/syscall.h \
 ../userprog/synchconsole.h ../threads/synch.h ../machine/console.h \
 /usr/include/c++/4.8.1/map /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/synchconsole.h \
 ../filesys/synchdisk.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/thread.h
synchdisk.o: ../filesys/synchdisk.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/utility.h ../threads/copyright.h ../machine/sysdep.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/synch.h ../threads/list.h \
 ../threads/utility.h
disk.o: ../machine/disk.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/disk.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../threads/synch.h ../threads/list.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
nettest.o: ../network/nettest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h ../network/post.h
post.o: ../network/post.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../network/post.h ../machine/network.h \
 ../threads/utility.h ../threads/copyright.h ../machine/sysdep.h \
 /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/synchlist.h ../threads/list.h \
 ../threads/utility.h ../threads/synch.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../bin/noff.h ../machine/translate.h ../userprog/fdtable.h \
 ../filesys/openfile.h ../userprog/syscall.h ../userprog/synchconsole.h \
 ../threads/synch.h ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h
network.o: ../machine/network.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdlib.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/byteswap-16.h \
 /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.1/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h ../threads/thread.h ../threads/synch.h \
 ../threads/list.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../bin/noff.h \
 ../machine/translate.h ../userprog/fdtable.h ../filesys/openfile.h \
 ../userprog/syscall.h ../userprog/synchconsole.h ../threads/synch.h \
 ../machine/console.h /usr/include/c++/4.8.1/map \
 /usr/include/c++/4.8.1/bits/stl_tree.h \
 /usr/include/c++/4.8.1/bits/stl_algobase.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.8.1/bits/functexcept.h \
 /usr/include/c++/4.8.1/bits/exception_defines.h \
 /usr/include/c++/4.8.1/bits/cpp_type_traits.h \
 /usr/include/c++/4.8.1/ext/type_traits.h \
 /usr/include/c++/4.8.1/ext/numeric_traits.h \
 /usr/include/c++/4.8.1/bits/stl_pair.h \
 /usr/include/c++/4.8.1/bits/move.h \
 /usr/include/c++/4.8.1/bits/concept_check.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.8.1/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.8.1/debug/debug.h \
 /usr/include/c++/4.8.1/bits/stl_iterator.h \
 /usr/include/c++/4.8.1/bits/allocator.h \
 /usr/include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.8.1/ext/new_allocator.h /usr/include/c++/4.8.1/new \
 /usr/include/c++/4.8.1/exception \
 /usr/include/c++/4.8.1/bits/atomic_lockfree_defines.h \
 /usr/include/c++/4.8.1/bits/memoryfwd.h \
 /usr/include/c++/4.8.1/bits/stl_function.h \
 /usr/include/c++/4.8.1/backward/binders.h \
 /usr/include/c++/4.8.1/bits/stl_map.h \
 /usr/include/c++/4.8.1/bits/stl_multimap.h \
 /usr/include/c++/4.8.1/bits/range_access.h ../userprog/processtable.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/bitmap.h \
 ../userprog/synchconsole.h ../filesys/synchdisk.h ../machine/disk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/thread.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
