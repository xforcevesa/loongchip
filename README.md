# loongchip

An implementation of LoongArch32 Reduced architecture using verilog and verilator with 5-stage pipeline, inherited from [chiplab](https://gitee.com/loongson-edu/chiplab). 

IPC is as low as around 0.207, thus awaiting for further optimization.

## Runing Step

Providing you're to run the simulation, see the following if you've changed your work directory to the root of this project.

```bash
export CHIPLAB_HOME=$(pwd)
cd $CHIPLAB_HOME/sims/verilator/run_prog
# Examples in the software directory
# Run software/my_program
./configure.sh --run my_program
# Run linux
./configure.sh --run linux
make -j$(nproc)
```

## Documentation

Inherited. TODO.
