#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream input_file;
	ofstream output_file;
	input_file.open(argv[1]);
	output_file.open(argv[2]);

	char ch;

		while (!input_file.eof()) {
			input_file.get(ch);
			if (input_file.bad()) {
				break;
			}
			if (ch == '\r') {
				output_file << '\n';
			}
			else {
				output_file << ch;
			}
		}
		input_file.close();
		output_file.close();

}