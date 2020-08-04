#include <iostream>
#include <argparse/argparse.hpp>
#include <bitset>
#include <fstream>
#include <string>

#include "util.hpp"
#include "encode.hpp"
#include "decode.hpp"

// encode arguments
// -m encode -i in.txt -o out.txt

// decode arguments
// -m decode -i out.txt -o decoded.txt


using namespace std;

int main(int argc, const char** argv) {
	argparse::ArgumentParser parser("Tinicryptor Argument Parser");
	parse_arguments(parser, argc, argv);
	if (parser.present("--mode")) {
		string mode = parser.get<string>("--mode");
		const char* mode_c = mode.c_str();
		switch (mode_switch_hash(mode))
		{
		case MODE_ENCODE:
			encode_main(parser);
			break;
		case MODE_DECODE:
			decode_main(parser);
			break;
		default:
			cout << "--mode argument \"" + mode + "\" not valid" << endl;
			cout << "Choose from the following modes:" << endl;
			cout << ALL_MODES << endl;
			break;
		}
	}
	else {
		cout << "Error! --mode is required but missing, maybe not detected by argparse" << endl;
	}
}
