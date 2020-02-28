docker pull nervos/ckb-riscv-gnu-toolchain:xenial-full-20191209
docker run --rm -v `pwd`:/code nervos/ckb-riscv-gnu-toolchain:xenial-full-20191209  bash -c "cd /code && riscv64-unknown-elf-g++ examples/*.cpp -o sha256_riscv_example"
