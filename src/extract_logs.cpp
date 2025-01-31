#include <iostream>
#include <fstream>
#include <string>

void extract_logs(const std::string& log_file, const std::string& target_date) {
    std::ifstream infile(log_file);
    if (!infile) {
        std::cerr << "Error: Unable to open log file '" << log_file << "'\n";
        return;
    }

    std::string output_file = "output/output_" + target_date + ".txt";
    std::ofstream outfile(output_file);
    if (!outfile) {
        std::cerr << "Error: Unable to create output file '" << output_file << "'\n";
        return;
    }

    std::string line;
    while (std::getline(infile, line)) {
        if (line.rfind(target_date, 0) == 0) { // Check if line starts with target_date
            outfile << line << "\n";
        }
    }

    std::cout << "Logs for " << target_date << " saved to " << output_file << "\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./extract_logs YYYY-MM-DD\n";
        return 1;
    }

    std::string target_date = argv[1];
    std::string log_file = "logs_2024.log"; // Change if needed

    extract_logs(log_file, target_date);

    return 0;
}
