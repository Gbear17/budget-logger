#include"logfile_io.hpp"

namespace logfile_io {
	void ReadFile(std::ifstream in_file) {
		if (in_file.is_open()) {
			in_file.close();
		} else {
			std::cout << "ERROR: Cannot open file";
		}
	}
} // namespace logfile_io