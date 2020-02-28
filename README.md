# Ctypto-demo

## About 
Demo for CKB crypto lib


# build on local

**comment secondline in example/main.cpp**
like `//#define CKB_VM`

```
cmake -B build  
cd build  
make sha256  
make testf  
```

## build example on riscv

```
./make_via_riscv.sh
```

## usage
`sha256 <string>`   
or  
`sha256_riscv_example  <string>`
