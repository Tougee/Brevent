#include "log.h"

struct logger_list *android_logger_list_alloc_time(int UNUSED(mode),
                                                   log_time UNUSED(start),
                                                   pid_t UNUSED(pid)) {
    return NULL;
}

struct logger *android_logger_open(struct logger_list *UNUSED(logger_list),
                                   log_id_t UNUSED(id)) {
    return NULL;
}

int android_logger_list_read(struct logger_list *UNUSED(logger_list),
                             struct log_msg *UNUSED(log_msg)) {
    return 0;
}

void android_logger_list_free(struct logger_list *UNUSED(logger_list)) {
}

int __android_log_print(int UNUSED(prio), const char *UNUSED(tag), const char *UNUSED(fmt), ...) {
    return 0;
}