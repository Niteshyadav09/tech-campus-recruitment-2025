## Naive Approach (Read All Logs into Memory)
Description:
This would basically be reading the entire log file into memory as a large single string or as a list of strings. The program would then filter the logs by date, looping through all entries to match the date and extract relevant ones.

Pros:

Easy to implement and understand.

Cons:

Inefficient for large log files like the 1TB file in this case.
Eats up a lot of memory, making it unsuitable for files that exceed available system memory.
Performance will be severely impacted for massive files.

## Optimized Approach (Reading Logs Line by Line)
Description:
In this approach, instead of loading the whole log file into memory, the program processes the file line by line. It reads each line, checks whether it begins with the given date, and if it does, writes the line to an output file.

Pros:

Extremely memory-efficient because only one line is held in memory at any time.
It scales very well with large log files (like 1TB).
Faster processing as unnecessary lines are skipped.
Cons:

Slightly more complex than the naive approach.

## Final Solution Summary:
The Optimized Approach is used because it is built for handling very large log files such as the 1TB file in this problem very efficiently. As we read the file line by line, this way, the program does not consume a lot of extra memory. This is a scalable method that is faster, too.

Reason for Choosing This Solution:
Given the constraint of a large log file, this solution is most practical and efficient in handling the problem at hand. It will not flood the system because it uses the minimum amount of memory and offers an easy, quick way to obtain logs for a specific date. This solution guarantees that the program can run in production environments with large log files.


##Steps to Run:
1. Clone the Repository
   git clone https://github.com/YOUR_USERNAME/tech-campus-recruitment-2025.git
   cd tech-campus-recruitment-2025

2. Compile the C++ Code
Go to the directory containing your extract_logs.cpp file and compile the code using the following command,
run:g++ extract_logs.cpp -o extract_logs

4. Run the Program

To execute the program, pass a date as a command-line argument in the YYYY-MM-DD format. For example, to extract logs for 2024-12-01, 
run:./extract_logs 2024-12-01

4. Check the Output
   Run the program, then see that it's generated output file inside the output/ directory. For the above example, it should be named output_2024-12-01.txt, and 
   this file will hold all the logs for that specific date.
5. Re-run with Different Dates
    You can rerun the program with a different date by just changing the argument passed to the program. To extract logs for 2024-12-02, for example, use
   run:./extract_logs 2024-12-02
