
Exercise 0x15: C - File I/O
This exercise focuses on file I/O operations in the C programming language, covering concepts such as file descriptors and the open(), read(), and write() functions. Below is a guide to understanding and utilizing these functions effectively.

File Descriptors
In Unix-like operating systems, including Linux, file descriptors are small, non-negative integers that refer to an opened file. When a program opens or creates a file, the kernel returns a file descriptor, which is used to perform various operations on the file, such as reading, writing, and seeking.

Functions Covered
1. open()
The open() function is used to open or create a file and returns a file descriptor.

c
Copy code
#include <fcntl.h>

int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
pathname: Path to the file to be opened or created.
flags: Flags to control the file opening mode (e.g., read-only, write-only, read-write, etc.).
mode: Only used when creating a new file, specifies the file permissions.
2. read()
The read() function is used to read data from an open file descriptor into a buffer.

c
Copy code
#include <unistd.h>

ssize_t read(int fd, void *buf, size_t count);
fd: File descriptor of the file to read from.
buf: Buffer to store the read data.
count: Number of bytes to read.
3. write()
The write() function is used to write data from a buffer to an open file descriptor.

c
Copy code
#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t count);
fd: File descriptor of the file to write to.
buf: Buffer containing the data to write.
count: Number of bytes to write.
Tutorial - Using open(), read(), and write() Functions
Include Header Files:
Make sure to include the necessary header files at the beginning of your C program.

c
Copy code
#include <fcntl.h>
#include <unistd.h>
Open a File:
Use the open() function to open a file. This function returns a file descriptor.

c
Copy code
int fd = open("filename.txt", O_RDONLY);
if (fd == -1) {
    // Handle error
}
Read from a File:
Use the read() function to read data from the file into a buffer.

c
Copy code
char buffer[1024];
ssize_t bytes_read = read(fd, buffer, sizeof(buffer));
if (bytes_read == -1) {
    // Handle error
}
Write to a File:
Use the write() function to write data from a buffer to a file.

c
Copy code
ssize_t bytes_written = write(fd, buffer, bytes_read);
if (bytes_written == -1) {
    // Handle error
}
Close the File:
Once you're done with the file, close it using the close() function.

c
Copy code
close(fd);
Additional Notes
Ensure error handling for each file I/O operation to handle potential failures gracefully.
Pay attention to file permissions and modes when opening or creating files.
Always close files after you finish working with them to free up system resources.
This covers the basics of file I/O operations using file descriptors and the open(), read(), and write() functions in C programming on Linux systems. For more advanced usage and error handling, refer to the official documentation and further tutorials.
