############ Compiling with B extension and linking without the b extension #############################

# The compiler needs further implementation of the bit manipulation extension so we broke the execution chain into compiling with bit manipulation patched complier (toolchain)
# and linking with the the old riscv old linker that works with the benchmarks

# Path of the RV32B extension supporting toolchain
PATH_New = /home/ahmed/riscv-vp_sim/riscv-gnu-toolchain-dist-rv32b-gcc+binutils/bin

# Path of the RV32g extension supporting toolchain
PATH_Old = /home/ahmed/riscv-vp_sim/riscv-gnu-toolchain-dist-rv32imac-ilp32/bin

# Path of the builded risc-vp that supports the b extension 
PATH_sim_new = /home/ahmed/Desktop/riscv-vp-bit-manip-simulator/riscv-vp/vp/build/bin



compile : main.c test.c verification.c
	$(PATH_New)/riscv32-unknown-elf-gcc test.c -O3 -c -o test.o -march=rv32gb -mabi=ilp32 #-ffreestanding 
	$(PATH_Old)/riscv32-unknown-elf-gcc verification.c -O3 -c -o verification.o -march=rv32g -mabi=ilp32 #-ffreestanding 
	$(PATH_Old)/riscv32-unknown-elf-gcc main.c -O3 -c -o main.o -march=rv32g -mabi=ilp32 #-ffreestanding 

	
link : main.o test.o verification.o
	$(PATH_Old)/riscv32-unknown-elf-gcc main.o test.o verification.o -o main #-verbose --stdlib
	
sim : compile link
	$(PATH_sim_new)/riscv-vp --intercept-syscalls main
	
dump-code: compile link
	$(PATH_New)/riscv32-unknown-elf-objdump -D main > output.text

	
dump-elf: compile link
	$(PATH_New)/riscv32-unknown-elf-readelf -a main

	
clean:
	rm -f main *.o *.s *.i

##########################################################################################################



