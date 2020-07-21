# qrcode
二维码生成

## zint库编译说明
	*本库使用的是zint-2.8.0.tar.gz*
	*请先阅读readme-cmake查看编译方法*
	*在此使用交叉编译，命令如下：*
	*cmake -DCMAKE_INSTALL_PREFIX=./arm -DCMAKE_C_COMPILER=arm-linux-gcc -DCMAKE_CXX_COMPILER=arm-linux-g++ -DCMAKE_C_FLAGS="-I/toolchain/HiveOS/ark1668/include/" ..*
	
## qrcode库编译说明	
	*将生成的zint库文件以及头文件拷贝至交叉编译环境中，然后在qrcode目录使用make命令*