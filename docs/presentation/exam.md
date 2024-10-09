# 系统能力大赛与人工智能组考核方案

- 旧有考核方案见[此处](./exam.old.md)，亦可供参考
- 考核时提问：指针对任务所实现的代码、运行过程、实现原理或某些技术、知识点的提问
- 所有链接资料仅供参考
- 新考核方案如下：

## 人工智能考核内容

以下内容可五选四完成：

1. 使用C/C++实现一个简单的机器学习算法
    - 具体：实现梯度下降算法，进行线性拟合等任务，并实时打印loss值
    - 要求：算法实现代码需包含注释，并附上算法的基本原理和推导过程
    - 展示方式：当场展示（可线上）+可复现源码及其文档
    - 资料：
        1. [梯度下降算法原理](https://dsfftp.readthedocs.io/zh-cn/latest/Linear-Regression/%E6%A2%AF%E5%BA%A6%E4%B8%8B%E9%99%8D%E6%B3%95%E7%9A%84%E6%95%B0%E5%AD%A6%E5%8E%9F%E7%90%86.html)
        2. [梯度下降算法实现demo](https://blog.csdn.net/AbBaCl/article/details/78817775)
2. 实现一个基于深度学习的图像分类算法
    - 具体：使用TensorFlow或PyTorch实现一个卷积神经网络，并训练模型进行图像分类
    - 要求：算法实现代码需包含注释，并附上算法的基本原理和推导过程
    - 展示方式：当场展示（可线上）+考核时提问+可复现源码及其文档
    - 备注：采用开源数据集，展示时请放出训练loss曲线
    - 资料：
        1. [卷积神经网络原理](https://zh.d2l.ai/chapter_convolutional-neural-networks/index.html)
        2. [MNIST数据集图像分类](https://pytorch.org/tutorials/beginner/basics/optimization_tutorial.html)
3. 实现一个基于深度学习的序列预测与生成模型
    - 具体：使用TensorFlow或PyTorch实现一个LSTM/GRU/GPT等模型选其一，并训练模型进行序列预测与生成
    - 要求：算法实现代码需包含注释，并附上算法的基本原理和推导过程
    - 展示方式：当场展示（可线上）+考核时提问+可复现源码及其文档
    - 备注：此处序列可以是文本，也可以是时序数据。展示时请放出训练loss曲线
    - 资料：
        1. [LSTM/GRU原理](https://towardsdatascience.com/illustrated-guide-to-lstms-and-gru-s-a-step-by-step-explanation-44e9eb85bf21)
        2. [Transformer for Time Series](https://medium.com/intel-tech/how-to-apply-transformers-to-time-series-models-spacetimeformer-e452f2825d2e)
        3. [nanoGPT](https://github.com/karpathy/nanoGPT)
4. 实现一个自定功能的AI智能体模型
    - 具体：使用Python或其他编程语言实现一个基于规则或深度学习的智能体模型，并训练模型进行智能决策
    - 要求：算法实现代码需包含注释，并附上算法的基本原理和推导过程
    - 展示方式：当场展示（可线上）+考核时提问+可复现源码及其文档
    - 备注：AI智能体的功能可自行DIY
    - 资料：
        1. [MoFA框架](https://github.com/moxin-org/mofa/)
        2. [Awesome AI Agents](https://github.com/e2b-dev/awesome-ai-agents)
5. 实现一个大模型训练推理优化的方法或工具
    - 具体：使用Python与C++、CUDA等，实现一个大模型训练推理优化的方法或工具，并分析其优缺点
    - 要求：算法实现代码需包含注释，并附上算法的基本原理和推导过程
    - 展示方式：当场展示（可线上）+考核时提问+可复现源码及其文档
    - 备注：可选大模型如LlaMA-2-7B等，展示时请放出优化前后推理或训练速度对比
    - 资料：
        1. [LlaMA模型](https://github.com/meta-llama/llama)
        2. [TensorRT-LLM](https://github.com/NVIDIA/TensorRT-LLM)


## 操作系统考核内容

1. 完成清华大学操作系统集训营基础阶段 - rustlings
    - 具体：完成rustlings所有题目
    - 要求：完成所有关卡，并提交代码。
    - 展示方式：当场展示（可线上）+仓库代码
    - 链接：
        1. [rustlings](https://github.com/rust-lang/rustlings)
        2. [Rust语言圣经](https://course.rs/about-book.html)
        3. [Rust圣经（官方版）](https://doc.rust-lang.org/book/)
2. 完成清华大学操作系统集训营进阶阶段 - 操作系统实验
    - 具体：完成第3/4/5/6/8章节实验
    - 要求：尽可能完成各个章节实验，并提前准备好操作系统方面的知识
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. [操作系统实验指导书](https://learningos.cn/rCore-Tutorial-Guide-2024A/)
        2. [rCore-Tutorial-v3](https://rcore-os.cn/rCore-Tutorial-Book-v3/)
3. 基于操作系统实现FAT32文件系统驱动
    - 具体：实现一个基于FAT32文件系统的驱动，并完成相关测试
    - 要求：驱动代码需包含注释，并附上相关原理
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. [axfs](https://github.com/Starry-OS/axfs)
        2. [rust-fatfs](https://github.com/rafalh/rust-fatfs)
4. 完成Virtio Driver移植
    - 具体：移植Virtio Driver到你写的操作系统内核，并完成相关测试
    - 要求：驱动代码需包含注释，并附上相关原理
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. [virtio-drivers](https://github.com/rcore-os/virtio-drivers)
        2. [driver_virtio](https://github.com/Starry-OS/driver_virtio)

相关链接：
   1. https://opencamp.cn/os2edu/camp/2024fall
   2. https://wiki.osdev.org/Expanded_Main_Page
   3. https://github.com/rustsbi/rustsbi-qemu

## 编译器考核内容

1. 完成InfiniTensor集训营的C++作业
    - 具体：完成所有C++作业
    - 要求：完成所有关卡，并提交代码。
    - 展示方式：当场展示（可线上）+仓库代码
    - 链接：
        1. (learning-cxx)[https://github.com/LearningInfiniTensor/learning-cxx]
2. 完成基于LLVM的编译器实现
    - 具体：实现一个基于LLVM的编译器，并完成相关测试
    - 要求：代码需包含注释，并附上相关原理
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. [llvm-project](https://github.com/llvm/llvm-project)
        2. [LLVM Tutorials](https://llvm.org/docs/GettingStartedTutorials.html)
3. 完成编译器后端实现
    - 具体：实现一个编译器后端，可编译出汇编
    - 要求：代码需包含注释，并附上相关原理
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
4. 完成编译器中后端编译优化
    - 具体：优化编译器后端，提升编译速度
    - 要求：代码需包含注释，并附上相关原理
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码

相关链接：
   1. https://opencamp.cn/InfiniTensor/camp/2024summer
   2. https://github.com/rswier/c4
   3. https://github.com/TinyCC/tinycc

## 龙芯杯考核方案

1. 完成傲来集训营的C语言作业
    - 具体：完成所有C语言作业
    - 要求：完成所有关卡，并提交代码。
    - 展示方式：当场展示（可线上）+仓库代码
    - 链接：
        1. https://gitee.com/LearningEulixOS/2024-exercises-stage-1
        2. https://gitee.com/LearningEulixOS/2024-exercises-stage-2
2. 完成HDLBits的大部分Verilog练习题
    - 具体：完成大部分Verilog练习题
    - 展示方式：当场展示（可线上）
    - 链接：
        1. https://hdlbits.01xz.net/wiki/Main_Page
3. 完成南京大学数字逻辑与计算机组成实验
    - 具体：完成实验一、二、三、六、七
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. https://nju-projectn.github.io/dlco-lecture-note/index.html
        2. https://github.com/NJU-ProjectN/nvboard
4. 完成《CPU设计实战》书上的实验
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. https://gitee.com/loongson-edu/cdp_ede_local
        2. https://bookdown.org/ghostboy316/bookdown/chapter-cpu-chip-design-process.html
5. 基于Chiplab设计CPU
    - 具体：基于Chiplab设计CPU，并完成相关测试
    - 要求：代码需包含注释，并附上相关原理
    - 展示方式：当场展示（可线上）+考核时提问+仓库代码
    - 链接：
        1. https://gitee.com/loongson-edu/chiplab
        2. https://gitee.com/xforcevesa/hc-core
        3. https://www.chisel-lang.org/docs
