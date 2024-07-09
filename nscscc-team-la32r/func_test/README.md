# NSCSCC2024 团体赛功能测试

## 目录结构

- func_test
    - func/
    > CPU运行的功能测试程序（已预生成coe文件，可无需操作）
    > 生成coe的命令为： `make EXP=16`
    > 需要实现的指令为：`./func/inst/` 中的 `n1~n58`
    - gettrace/
    > trace文件生成工程（已预生成trace文件，可无需操作）
    - soc_verify/
    > **自己实现的CPU的SoC系统验证环境**
    >
    > 需手动创建工程：
    > 1. 在vivado tcl console中，进入 `./run_vivado/` 目录
    > 2. `source ./create_project.tcl`
    - README.md
    > 本文件

## 参考资料

关于功能测试trace比对框架，可参考《CPU设计实战：LoongArch版》中[mycpu_env实验开发环境组织结构介绍](https://bookdown.org/loongson/_book3/chapter-single-cycle-cpu.html#mycpu_env%E5%AE%9E%E9%AA%8C%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E7%BB%84%E7%BB%87%E7%BB%93%E6%9E%84%E4%BB%8B%E7%BB%8D)