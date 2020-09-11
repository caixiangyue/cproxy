#ifndef LOG_H
#define LOG_H

#ifndef LOG_W
#ifdef __linux__
#define LOG_W(fmt, ...) g_warning("%s(%d): " fmt, __FILE__, __LINE__, ##__VA_ARGS__)
#else
#define LOG_W(fmt, ...) g_warning(fmt, ##__VA_ARGS__)
#endif
#endif

#ifndef LOG_M
#define LOG_M(fmt, ...) g_message("%s(%d): " fmt, __FILE__, __LINE__, ##__VA_ARGS__)
#endif

#endif