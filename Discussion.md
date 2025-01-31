# Solutions Considered

1. **Naive Approach:**
Description: The first solution that came to mind is to read the whole log file into memory and filter out lines that match a given date. This means you would have to load the entire log file into memory, store it, and then iterate over all lines to see if any of them actually match the date.
Advantage: Quite simple to code.
- **Cons:** Inefficient for large files (1TB in size). It would use a lot of memory and would be much slower, especially for daily log retrieval. This approach is not suitable for production-level systems that need to handle massive log files.

2. **Optimized Approach (Final Solution):
- **Description:** In the final approach, I chose to read the log file line by line, which lets us keep only a small part of the file in memory at a time (just the current line). The program checks if the line starts with the specified date and writes it to an output file. This approach is not necessary to load the entire file into memory; thus, it can process very large log files. - **Advantages:** It's memory efficient. It works efficiently with big files. Only necessary lines are processed.
- **Disadvantages:** A bit more complex than the naive approach but required for efficiency when dealing with big data.

