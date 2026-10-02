.PHONY: clean

compile:
	@riscv32-unknown-linux-gnu-gcc -march=rv32i -mabi=ilp32 -c func.c -o program
	@riscv32-unknown-linux-gnu-objdump -D program > func.dump

clean:
	rm func.dump program