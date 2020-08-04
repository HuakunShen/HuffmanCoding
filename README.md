# Huffman Coding Realization

Implement Huffman Coding Algorithm with C++ and compiled into executable files.

## Usage

```bash
Usage: Huffman Coding Argument Parser [options]

Optional arguments:
-h --help       shows help message and exits
-v --version    prints version information and exits
-i --input      Input filename/address
-o --output     Output filename/address
-m --mode       Mode of this program: encode/decode/encrypt/decrypt[Required]
-p --password   Password for encrypt/decrypt
```

## Example

```bash
# encode
./huffmancoding -m encode -i ./input.txt -o ./encoded.txt
./huffmancoding --mode encode --input ./input.txt --output ./encoded.txt

# decode
./huffmancoding -m decode -i ./encoded.txt -o ./decoded.txt
./huffmancoding --mode decode --input ./encoded.txt --output ./decoded.txt
```

## Release Build

- [MacOS](./release/mac/huffmancoding)
- [Linux](./release/linux/huffmancoding)
- [x64](./release/x64/huffmancoding.exe)
- [x86](./release/x86/huffmancoding.exe)

## Download

- [MacOS](https://github.com/HuakunShen/HuffmanCoding/raw/master/release/mac/huffmancoding)
- [Linux](https://github.com/HuakunShen/HuffmanCoding/raw/master/release/linux/huffmancoding)
- [x64](https://github.com/HuakunShen/HuffmanCoding/raw/master/release/x64/huffmancoding.exe)
- [x86](https://github.com/HuakunShen/HuffmanCoding/raw/master/release/x86/huffmancoding.exe)
